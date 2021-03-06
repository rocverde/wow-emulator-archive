// Copyright (C) 2004 WoW Daemon
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#include "Common.h"
#include "Database/DatabaseEnv.h"
#include "WorldPacket.h"
#include "Opcodes.h"
#include "Log.h"
#include "Player.h"
#include "World.h"
#include "ObjectMgr.h"
#include "WorldSession.h"
#include "Auth/BigNumber.h"
#include "Auth/Sha1.h"
#include "UpdateData.h"


void WorldSession::HandleRepopRequestOpcode( WorldPacket & recv_data )
{
    Log::getSingleton( ).outDebug( "WORLD: Recvd CMSG_REPOP_REQUEST Message" );

    GetPlayer()->BuildPlayerRepop();
    GetPlayer()->RepopAtGraveyard();
}


void WorldSession::HandleAutostoreLootItemOpcode( WorldPacket & recv_data )
{
    uint8 i, slot = 0;
    uint32 itemid;
    uint8 lootSlot;
    WorldPacket data;

    Creature* pCreature = objmgr.GetObject<Creature>(GetPlayer()->GetLootGUID());
    if (!pCreature)
        return;

    recv_data >> lootSlot;

    for(i = INVENTORY_SLOT_ITEM_START; i < INVENTORY_SLOT_ITEM_END; i++)
    {
        if (GetPlayer()->GetItemBySlot(i) == NULL)
        {
            slot = i;
            break;
        }
    }

    if (slot == 0)
        return; //maybe whine a bit too?

    if (pCreature->getItemAmount(lootSlot) == 0)
        return; //maybe whine a bit too?

    itemid = pCreature->getItemId(lootSlot);
    pCreature->setItemAmount(lootSlot, 0);

    Item *item = new Item();
    ASSERT(item);

    item->Create(objmgr.GenerateLowGuid(HIGHGUID_ITEM), itemid, GetPlayer());
    GetPlayer()->AddItemToSlot(slot, item);

    data.Initialize( SMSG_LOOT_REMOVED );
    data << uint8(lootSlot);
    SendPacket( &data );
}


void WorldSession::HandleLootMoneyOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    uint32 newcoinage = 0;

    Creature* pCreature = objmgr.GetObject<Creature>(GetPlayer()->GetLootGUID());
    if (!pCreature)
        return;

    newcoinage = GetPlayer()->GetUInt32Value(PLAYER_FIELD_COINAGE) + pCreature->getLootMoney();
    pCreature->setLootMoney(0);
    GetPlayer()->SetUInt32Value( PLAYER_FIELD_COINAGE , newcoinage);
}


void WorldSession::HandleLootOpcode( WorldPacket & recv_data )
{
    uint64 guid;
    uint16 tmpItemsCount = 0;
    uint8 i;
    ItemPrototype *tmpLootItem;
    WorldPacket data;

    recv_data >> guid;

    Creature* pCreature = objmgr.GetObject<Creature>(guid);
    if (!pCreature)
        return;

    GetPlayer()->SetLootGUID(guid);

    for(i = 0; i < pCreature->getItemCount() ; i++)
    {
        if (pCreature->getItemAmount((int)i) > 0)
            tmpItemsCount++;
    }


    data.Initialize( SMSG_LOOT_RESPONSE );

    data << guid;
    data << uint8(0x01);
    data << uint32(pCreature->getLootMoney());
    data << uint8(pCreature->getItemCount());

    for(i = 0; i<pCreature->getItemCount() ; i++)
    {
        if (pCreature->getItemAmount((int)i) > 0)
        {
            data << uint8(i);
            tmpLootItem = objmgr.GetItemPrototype(pCreature->getItemId((int)i));
            data << uint32(pCreature->getItemId((int)i));
            data << uint32(pCreature->getItemAmount((int)i));
            data << uint32(tmpLootItem->DisplayInfoID);
            data << uint8(0) << uint32(0) << uint32(0);
        }
    }
    SendPacket( &data );
}


void WorldSession::HandleLootReleaseOpcode( WorldPacket & recv_data )
{
    uint64 guid;
    WorldPacket data;

    recv_data >> guid;

    GetPlayer()->SetLootGUID(0);

    data.Initialize( SMSG_LOOT_RELEASE_RESPONSE );
    data << guid << uint8( 1 );
    SendPacket( &data );
}


void WorldSession::HandleWhoOpcode( WorldPacket & recv_data )
{
    uint64 clientcount = 0;
    int datalen = 8;
    int countcheck = 0;
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recvd CMSG_WHO Message" );

    ObjectMgr::PlayerMap::const_iterator itr;
    for (itr = objmgr.Begin<Player>(); itr != objmgr.End<Player>(); itr++)
    {
        if ( itr->second->GetName() )
        {
            clientcount++;

            datalen = datalen + strlen(itr->second->GetName()) + 1 + 21;
        }
    }

    data.Initialize( SMSG_WHO );
    data << uint64( clientcount );

    for (itr = objmgr.Begin<Player>(); itr != objmgr.End<Player>(); itr++)
    {
        if ( itr->second->GetName() && (countcheck  < clientcount))
        {
            countcheck++;

            data.append(itr->second->GetName() , strlen(itr->second->GetName()) + 1);
            data << uint8( 0x00 );
            data << uint32( itr->second->getLevel() );
            data << uint32( itr->second->getClass() );
            data << uint32( itr->second->getRace() );
            data << uint32( itr->second->GetZoneId() );

            data << uint32( 0x00000000 ); // this is the guild id...once we have guilds working it'll go here.
        }
    }

    WPAssert(data.size() == datalen);
    SendPacket(&data);
}


void WorldSession::HandleLogoutRequestOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recvd CMSG_LOGOUT_REQUEST Message" );

    // TODO: fix this
/*
    data.Initialize( SMSG_LOGOUT_RESPONSE );
    //data << (uint8)0xC;
    data << uint32(0); //Filler
    data << uint8(0); //Logout accepted
    SendPacket( &data );

    LogoutRequest(time(NULL));
*/

    LogoutPlayer();
}


void WorldSession::HandlePlayerLogoutOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recvd CMSG_PLAYER_LOGOUT Message" );

//    LogoutRequest(1);
}


void WorldSession::HandleLogoutCancelOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recvd CMSG_LOGOUT_CANCEL Message" );

    LogoutRequest(0);

    data.Initialize( SMSG_LOGOUT_CANCEL_ACK );
    SendPacket( &data );

    Log::getSingleton( ).outDebug( "WORLD: sent SMSG_LOGOUT_CANCEL_ACK Message" );
}


void WorldSession::HandleGMTicketGetTicketOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    data.Initialize( SMSG_GMTICKET_GETTICKET );
    data << uint32(6);
    data << uint32(0xffbfbfbf);
    data << uint8(0);
    data << uint8(3);

    SendPacket( &data );
}


void WorldSession::HandleGMTicketCreateOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    //TODO: Receive message sent and relay it to an online GM
    data.Initialize( SMSG_GMTICKET_CREATE );
    data << uint32(2);

    SendPacket( &data );
}


void WorldSession::HandleGMTicketSystemStatusOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    //TODO: Receive message sent and relay it to an online GM
    data.Initialize( SMSG_GMTICKET_SYSTEMSTATUS );
    data << uint32(1);

    SendPacket( &data );
}


void WorldSession::HandleZoneUpdateOpcode( WorldPacket & recv_data )
{
    uint32 newZone,oldZone;
    WPAssert(GetPlayer());

    recv_data >> newZone;
    Log::getSingleton( ).outDetail("WORLD: Recvd ZONE_UPDATE: %u", newZone);

    if (GetPlayer()->GetZoneId() == newZone)
        return;

    oldZone = GetPlayer( )->GetZoneId();

    //Setting new zone
    GetPlayer()->SetZoneId((uint16)newZone);
}


void WorldSession::HandleSetTargetOpcode( WorldPacket & recv_data )
{
    uint64 guid ;
    recv_data >> guid;

    if( GetPlayer( ) != 0 )
        GetPlayer( )->SetTarget(guid);
}


void WorldSession::HandleSetSelectionOpcode( WorldPacket & recv_data )
{
    uint64 guid;
    recv_data >> guid;

    if( GetPlayer( ) != 0 )
        GetPlayer( )->SetSelection(guid);
}


void WorldSession::HandleStandStateChangeOpcode( WorldPacket & recv_data )
{
    if( GetPlayer( ) != 0 )
    {
        // retrieve current BYTES
        uint32 bytes1 = GetPlayer( )->GetUInt32Value( UNIT_FIELD_BYTES_1 );
        uint8 bytes[4];

//        uint64 guid; no need for it in 0.12
//        recv_data >> guid;

        bytes[0] = uint8(bytes1 & 0xff);
        bytes[1] = uint8((bytes1>>8) & 0xff);
        bytes[2] = uint8((bytes1>>16) & 0xff);
        bytes[3] = uint8((bytes1>>24) & 0xff);

        // retrieve new stand state
        uint8 animstate;
        recv_data >> animstate;

        // if (bytes[0] == animstate) break;
        bytes[0] = animstate;

        uint32 newbytes = (bytes[0]) + (bytes[1]<<8) + (bytes[2]<<16) + (bytes[3]<<24);
        GetPlayer( )->SetUInt32Value(UNIT_FIELD_BYTES_1 , newbytes);
    }
}


void WorldSession::HandleFriendListOpcode( WorldPacket & recv_data )
{
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recieved CMSG_FRIEND_LIST"  );
    // TODO: send SMSG_FRIEND_LIST with a list of friend

    unsigned char Counter=0;

    while (0) {
        // get friend list add them to buffer
    }

    FriendStr friendstr[255];

    /// add RandomGuy to the friend's list
    friendstr[Counter].PlayerGUID = 48;
    friendstr[Counter].Status = 0;
    friendstr[Counter].Area = 0;
    friendstr[Counter].Level = 1;
    friendstr[Counter].Class = 1;
    Counter++;

    data.Initialize( SMSG_FRIEND_LIST );
    data << Counter;

    for (int j=0; j<Counter; j++) {
        // adding friend
        Log::getSingleton( ).outDetail( "WORLD: Adding Friend - Guid:%ld, Status:%d, Area:%d, Level:%d Class:%d",
            friendstr[j].PlayerGUID, friendstr[j].Status, friendstr[j].Area,friendstr[j].Level,friendstr[j].Class  );

        data << friendstr[j].PlayerGUID << friendstr[j].Status ;
        if (friendstr[j].Status != 0)
            data << friendstr[j].Area << friendstr[j].Level << friendstr[j].Class;
    }

    SendPacket( &data );

    Log::getSingleton( ).outDebug( "WORLD: Sent (SMSG_FRIEND_LIST)" );
}


void WorldSession::HandleAddFriendOpcode( WorldPacket & recv_data )
{
    Log::getSingleton( ).outDebug( "WORLD: Recieved CMSG_ADD_FRIEND"  );

    std::string friendName = "UNKNOWN";
    recv_data >> friendName;

    Log::getSingleton( ).outDetail( "WORLD: %s asked to add friend : '%s'",
        GetPlayer()->GetName(), friendName.c_str() );

    unsigned char friendResult = FRIEND_NOT_FOUND;
    uint64 friendGuid = 0;
    uint32 friendArea = 0;
    uint32 friendLevel = 0;
    uint32 friendClass = 0;
    WorldPacket data;

    // TODO: Add Friend To list, and fill in FriendResult.
    friendGuid = objmgr.GetPlayerGUIDByName(friendName.c_str());
    if (friendGuid > 0)
    {
        if( objmgr.GetObject<Player>(friendGuid) != NULL )
            friendResult = FRIEND_ADDED_ONLINE;
        else
            friendResult = FRIEND_ADDED_OFFLINE;

        Log::getSingleton( ).outDetail( "WORLD: %s Guid found '%ld' area:%d Level:%d Class:%d. ",
            friendName.c_str(), friendGuid, friendArea, friendLevel, friendClass );

    }
    else
    {
        Log::getSingleton( ).outDetail( "WORLD: %s Guid not found ", friendName.c_str() );
    }


    if (!strcmp(GetPlayer()->GetName(),friendName.c_str()))
        friendResult = FRIEND_SELF;

    // Send reposnse.
    data.Initialize( SMSG_FRIEND_STATUS );
    if (friendResult ==  FRIEND_ADDED_ONLINE || friendResult == FRIEND_ONLINE ||
        friendResult ==  FRIEND_OFFLINE
        //|| FriendResult ==  FRIEND_ADDED_OFFLINE
        ){
            data << (uint8)friendResult << (uint64)friendGuid;
            data << (uint32)friendArea << (uint32)friendLevel << (uint32)friendClass;
        }
    else {
        data << (uint8)friendResult << (uint64)friendGuid;
    }

    SendPacket( &data );

    Log::getSingleton( ).outDebug( "WORLD: Sent (SMSG_FRIEND_STATUS)" );
}


void WorldSession::HandleDelFriendOpcode( WorldPacket & recv_data )
{
    uint64 FriendGUID;
    WorldPacket data;

    Log::getSingleton( ).outDebug( "WORLD: Recieved CMSG_DEL_FRIEND"  );
    recv_data >> FriendGUID;

    unsigned char FriendResult = FRIEND_REMOVED;

    int FriendArea = 0;
    int FriendLevel = 0;
    int FriendClass = 0;

    // TODO: Delete Friend from list, and fill in FriendResult.

    // Send reposnse.
    data.Initialize( SMSG_FRIEND_STATUS );

    data << (uint8)FriendResult << (uint32)FriendGUID;

    SendPacket( &data );

    Log::getSingleton( ).outDebug( "WORLD: Sent motd (SMSG_FRIEND_STATUS)" );
}


void WorldSession::HandleBugOpcode( WorldPacket & recv_data )
{
    uint32 suggestion, contentlen;
    std::string content;
    uint32 typelen;
    std::string type;

    recv_data >> suggestion >> contentlen >> content >> typelen >> type;

    if( suggestion == 0 )
        Log::getSingleton( ).outDebug( "WORLD: Recieved CMSG_BUG [Bug Report]" );
    else
        Log::getSingleton( ).outDebug( "WORLD: Recieved CMSG_BUG [Suggestion]" );

    Log::getSingleton( ).outDebug( type.c_str( ) );
    Log::getSingleton( ).outDebug( content.c_str( ) );
}


/*void WorldSession::HandleJoinChannelOpcode( WorldPacket & recv_data )
{
    WorldPacket data;
    std::string channelName;
    recv_data >> channelName;
    data.Initialize(SMSG_CHANNEL_NOTIFY);
    data << uint8(2);
    data << channelName;
    data << uint32(1);
    SendPacket( &data );
}


void WorldSession::HandleLeaveChannelOpcode( WorldPacket & recv_data )
{
    WorldPacket data;
    std::string channelName;
    recv_data >> channelName;
    data.Initialize(SMSG_CHANNEL_NOTIFY);
    data << uint8(3);
    data << channelName;
    SendPacket( &data );
}*/


void WorldSession::HandleCorpseReclaimOpcode(WorldPacket &recv_data)
{
    Log::getSingleton().outDetail("WORLD: Received CMSG_RECLAIM_CORPSE");

    uint64 guid;
    recv_data >> guid;

    GetPlayer()->SetMovement(MOVE_LAND_WALK);
    GetPlayer( )->SetPlayerSpeed(RUN, (float)7.5, true);
    GetPlayer( )->SetPlayerSpeed(SWIM, (float)4.9, true);

    GetPlayer( )->SetUInt32Value(CONTAINER_FIELD_SLOT_1+29, 0);
    GetPlayer( )->SetUInt32Value(UNIT_FIELD_AURA+32, 0);
    GetPlayer( )->SetUInt32Value(UNIT_FIELD_AURALEVELS+8, 0xeeeeeeee);
    GetPlayer( )->SetUInt32Value(UNIT_FIELD_AURAAPPLICATIONS+8, 0xeeeeeeee);
    GetPlayer( )->SetUInt32Value(UNIT_FIELD_AURAFLAGS+4, 0);
    GetPlayer( )->SetUInt32Value(UNIT_FIELD_AURASTATE, 0);

    GetPlayer()->ResurrectPlayer();
    GetPlayer()->SetUInt32Value(UNIT_FIELD_HEALTH, (uint32)(GetPlayer()->GetUInt32Value(UNIT_FIELD_MAXHEALTH)*0.50) );
    GetPlayer()->SpawnCorpseBones();
}
