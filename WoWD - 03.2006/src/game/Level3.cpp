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

/////////////////////////////////////////////////
//  Admin Chat Commands
//

#include "Common.h"
#include "Database/DatabaseEnv.h"
#include "WorldPacket.h"
#include "WorldSession.h"
#include "World.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "Opcodes.h"
#include "GameObject.h"
#include "Chat.h"
#include "Log.h"
#include "ChannelMgr.h"


bool ChatHandler::HandleSecurityCommand(const char* args)
{
    WorldPacket data;

    char* pName = strtok((char*)args, " ");
    if (!pName)
        return false;

    char* pgm = strtok(NULL, " ");
    if (!pgm)
        return false;

    int8 gm = (uint8) atoi(pgm);
    if ( gm < 0 || gm > 5)
    {
        FillSystemMessageData(&data, m_session, "Incorrect value.");
        m_session->SendPacket( &data );
        return true;
    }

    char buf[256];

    Player *chr = objmgr.GetPlayer(args);
    if (chr)
    {
        // send message to user
        sprintf((char*)buf,"You change security level of %s to %i.", chr->GetName(), gm);
        FillSystemMessageData(&data, m_session, buf);
        m_session->SendPacket( &data );

        // send message to player
        sprintf((char*)buf,"%s changed your security level to %i.", m_session->GetPlayer()->GetName(), gm);
        FillSystemMessageData(&data, m_session, buf);

        chr->GetSession()->SendPacket(&data);
        chr->GetSession()->SetSecurity(gm);

        char sql[512];
        sprintf(sql, "UPDATE accounts SET gm = '%i' WHERE acct = '%u'", gm, chr->GetSession()->GetAccountId());
        sDatabase.Execute( sql );
    }
    else
    {
        sprintf((char*)buf,"Player (%s) does not exist or is not logged in.", pName);
        FillSystemMessageData(&data, m_session, buf);
        m_session->SendPacket( &data );
    }

    return true;
}


bool ChatHandler::HandleWorldPortCommand(const char* args)
{
    char* pContinent = strtok((char*)args, " ");
    if (!pContinent)
        return false;

    char* px = strtok(NULL, " ");
    char* py = strtok(NULL, " ");
    char* pz = strtok(NULL, " ");

    if (!px || !py || !pz)
        return false;

    smsg_NewWorld(m_session, atoi(pContinent), (float)atof(px), (float)atof(py), (float)atof(pz)); //LINA

    return true;
}

bool ChatHandler::HandleAllowMovementCommand(const char* args)
{
    WorldPacket data;
    if(sWorld.getAllowMovement())
	{
		sWorld.SetAllowMovement(false);
		FillSystemMessageData(&data, m_session, "Creature Movement Disabled.");
	}
	else
	{

		sWorld.SetAllowMovement(true);
		FillSystemMessageData(&data, m_session, "Creature Movement Enabled.");
	}
	
	m_session->SendPacket( &data );
    return true;
}

bool ChatHandler::HandleAddSpiritCommand(const char* args)
{
    Log::getSingleton( ).outDetail("Spawning Spirit Healers\n");

    std::stringstream query;
    std::stringstream ss,ss2,ss3;
    QueryResult *result,*result2,*result3;
    Creature* pCreature;
    UpdateMask unitMask;
    WorldPacket data;
    uint32 textId,gossipId;

    query << "select X,Y,Z,F,name_id,mapId,zoneId,faction_id from spirithealers";
    result = sDatabase.Query( query.str( ).c_str( ) );

    if(!result)
    {
        FillSystemMessageData(&data, m_session, "No spirit healers in db, exiting.");
        m_session->SendPacket( &data );

        return true;
    }

    uint32 name;
    do
    {
        Field* fields = result->Fetch();

        name = fields[4].GetUInt32();
        Log::getSingleton( ).outDetail("%s name is %d\n", fields[4].GetString(), name);

        pCreature = new Creature();

        pCreature->Create(objmgr.GenerateLowGuid(HIGHGUID_UNIT), objmgr.GetCreatureName(name)->Name.c_str(), fields[5].GetUInt16(),
            fields[0].GetFloat(), fields[1].GetFloat(), fields[2].GetFloat(), fields[3].GetFloat());

        pCreature->SetZoneId( fields[6].GetUInt16() );
        pCreature->SetUInt32Value( OBJECT_FIELD_ENTRY, name );
        pCreature->SetFloatValue(OBJECT_FIELD_SCALE_X, 1.0f);
        pCreature->SetUInt32Value(UNIT_FIELD_DISPLAYID, 5233);
        pCreature->SetUInt32Value(UNIT_NPC_FLAGS, 33);
        pCreature->SetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE , 35);
        pCreature->SetUInt32Value(UNIT_FIELD_HEALTH, 100);
        pCreature->SetUInt32Value(UNIT_FIELD_MAXHEALTH, 100);
        pCreature->SetUInt32Value(UNIT_FIELD_LEVEL, 60);
        pCreature->SetUInt32Value(UNIT_FIELD_FLAGS, 768);
        pCreature->SetUInt32Value(UNIT_FIELD_AURA+0, 10848);
        pCreature->SetUInt32Value(UNIT_FIELD_AURALEVELS+0, 0xEEEEEE3C);
        pCreature->SetUInt32Value(UNIT_FIELD_AURAAPPLICATIONS+0, 0xEEEEEE00);
        pCreature->SetUInt32Value(UNIT_FIELD_AURAFLAGS+0, 0x00000009);
        pCreature->SetFloatValue(UNIT_FIELD_COMBATREACH , 1.5f);
        pCreature->SetFloatValue(UNIT_FIELD_MAXDAMAGE ,  5.0f);
        pCreature->SetFloatValue(UNIT_FIELD_MINDAMAGE , 8.0f);
        pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME, 1900);
        pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME+1, 2000);
        pCreature->SetFloatValue(UNIT_FIELD_BOUNDINGRADIUS, 2.0f);
		Log::getSingleton( ).outError("AddObject at Level3.cpp line 172");
        objmgr.AddObject(pCreature);
        pCreature->AddToWorld();

        pCreature->SaveToDB();


        ss.rdbuf()->str("");
        ss2.rdbuf()->str("");
        ss3.rdbuf()->str("");
	    result2 = sDatabase.Query( "SELECT MAX(ID) FROM npc_gossip" );
	    if( result2 )
	    {
		    result3 = sDatabase.Query( "SELECT MAX(ID) FROM npc_text" );
		    if( result3 )
		    {
                textId = (*result3)[0].GetUInt32();
			    ss3 << "INSERT INTO npc_text ( ID , TYPE_UNUSED, TEXT) VALUES ("
				    << textId+1 << ", "
				    << 0 << ", '"
				    << "It is not yet your time. I shall aid your journey back to the realm of the living... For a price." << "')";
			    sDatabase.Execute( ss3.str( ).c_str( ) );
			    delete result3;
			    result3 = NULL;
		    }

            gossipId = (*result2)[0].GetUInt32();
		    ss2 << "INSERT INTO npc_gossip ( ID , NPC_GUID, GOSSIP_TYPE, TEXTID, OPTION_COUNT) VALUES ("
			    << gossipId+1 << ", "
			    << pCreature->GetGUIDLow() << ", "
			    << 1 << ", "
			    << textId+1 << ", "
			    << 1 << ")";

		    sDatabase.Execute( ss2.str( ).c_str( ) );
		    delete result2;
		    result2 = NULL;


		    result2 = sDatabase.Query( "SELECT MAX(ID) FROM npc_options" );
		    if( result2 )
		    {
			    ss << "INSERT INTO npc_options ( `ID` , `GOSSIP_ID`, `TYPE`, `OPTION`, `NPC_TEXT_NEXTID`, `SPECIAL`) VALUES ("
				    << (*result2)[0].GetUInt32()+1 << ", "
				    << gossipId+1 << ", "
				    << 0 << ", '"
				    << "Return me to life." << "', "
				    << 0 << ", "
				    << 2 << ")";

			    sDatabase.Execute( ss.str( ).c_str( ) );
			    delete result2;
			    result2 = NULL;
		    }
        }
    }
    while( result->NextRow() );

    delete result;

    FillSystemMessageData(&data, m_session, "Restart server for spirit healers.");
    m_session->SendPacket( &data );

    return true;
}


bool ChatHandler::HandleMoveCommand(const char* args)
{
    char* px = strtok((char*)args, " ");
    if(!px)
        return false;

    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

    if((STRCASECMP(px,"x") == 0) || (STRCASECMP(px,"y") == 0) || (STRCASECMP(px,"z") == 0))
    {
        //use new method
        x = m_session->GetPlayer()->GetPositionX();
        y = m_session->GetPlayer()->GetPositionY();
        z = m_session->GetPlayer()->GetPositionZ();

        //Add next value to current x,y,z
        char* pAdd = strtok(NULL, " ");
        float add = (float)atof(pAdd);
        if(STRCASECMP(px,"x") == 0)
        {
            //add x
            x += add;
        }
        else if(STRCASECMP(px,"y") == 0)
        {
            //add y
            y += add;
        }
        else if(STRCASECMP(px,"z") == 0)
        {
            //add z
            z += add;
        }
    }
    else
    {
        //use old method
        char* py = strtok(NULL, " ");
        char* pz = strtok(NULL, " ");

        if (!py || !pz)
            return false;

        x = (float)atof(px);
        y = (float)atof(py);
        z = (float)atof(pz);
    }
    MovePlayer(m_session, x, y, z);

    return true;
}


bool ChatHandler::HandleLearnCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    uint32 spell = atol((char*)args);

	if (m_session->GetPlayer()->HasSpell(spell)) // check to see if char already learned spell
	{
        FillSystemMessageData(&data, m_session, "You already know that spell.");
        m_session->SendPacket(&data);
		return true;
	}

    data.Initialize( SMSG_LEARNED_SPELL );
    data << (uint32)spell;
    m_session->SendPacket( &data );
    m_session->GetPlayer()->addSpell((uint16)spell);

    return true;
}


bool ChatHandler::HandleObjectCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    uint32 display_id = atoi(strtok((char*)args, " "));
    uint32 entry_id = atoi(strtok((char*)args, " "));
    uint32 type = atoi(strtok((char*)args, " "));
    //char* name = strtok((char*)args, " ");
    char* safe = strtok((char*)args, " ");

    Player *chr = m_session->GetPlayer();
    float x = chr->GetPositionX();
    float y = chr->GetPositionY();
    float z = chr->GetPositionZ();
    float o = chr->GetOrientation();

    GameObject* pGameObj = new GameObject();

    // uint32 guidlow, uint16 display_id, uint8 state, uint32 obj_field_entry, uint8 scale, uint16 type, uint16 faction,  float x, float y, float z, float ang
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), display_id, 1, entry_id, 1, type, 1, chr->GetMapId(), x, y, z, o );
	Log::getSingleton( ).outError("AddObject at Level3.cpp line 252");
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();

    if(strcmp(safe,"true") == 0)
        pGameObj->SaveToDB();

    return true;
}

bool ChatHandler::HandleAddWeaponCommand(const char* args)
{
    if (!*args)
        return false;

	WorldPacket data;

    uint64 guid = m_session->GetPlayer()->GetSelection();
    if (guid == 0)
    {
        FillSystemMessageData(&data, m_session, "No selection.");
        m_session->SendPacket( &data );
        return true;
    }

	Creature * pCreature = objmgr.GetCreature(guid);
    if(!pCreature)
    {
        FillSystemMessageData(&data, m_session, "You should select a creature.");
        m_session->SendPacket( &data );
        return true;
    }

	char* pSlotID = strtok((char*)args, " ");
    if (!pSlotID)
        return false;

	char* pItemID = strtok(NULL, " ");
    if (!pItemID)
		return false;       
	
	uint32 ItemID = atoi(pItemID);
	uint32 SlotID = atoi(pSlotID);

	ItemPrototype* tmpItem = objmgr.GetItemPrototype(ItemID);

	bool added = false;
	std::stringstream sstext;
	if(tmpItem)
	{
		switch(SlotID)
		{
		case 1:
			pCreature->SetUInt32Value(UNIT_VIRTUAL_ITEM_SLOT_DISPLAY, ItemID);
			added = true;
			break;
		case 2:
			pCreature->SetUInt32Value(UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_01, ItemID);
			added = true;
			break;
		case 3:
			pCreature->SetUInt32Value(UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_02, ItemID);
			added = true;
			break;
		default:
			sstext << "Item Slot '" << SlotID << "' doesn't exist." << '\0';
			added = false;
			break;
		}
		if(added)
		{
			sstext << "Item '" << ItemID << "' '" << tmpItem->Name1 << "' Added to Slot " << SlotID << '\0';
		}
	}
	else
	{
		sstext << "Item '" << ItemID << "' Not Found in Database." << '\0';
        return true;
	}
	FillSystemMessageData(&data, m_session, sstext.str().c_str());
    m_session->SendPacket( &data );
    return true;
}

bool ChatHandler::HandleGameObjectCommand(const char* args)
{
    if (!*args)
        return false;

	WorldPacket data;

    uint32 display_id = atoi((char*)args);
	if(!display_id) return false;

	uint16 typesid = atoi((char*)args);
	if(!typesid) return false;

	uint16 factionid = atoi((char*)args);
	if(!factionid) return false;

	uint32 fieldentry = atoi((char*)args);
	if(!fieldentry) return false;

    //char* name = strtok((char*)args, " ");
    //char* safe = strtok((char*)args, " ");

    Player *chr = m_session->GetPlayer();
    float x = chr->GetPositionX();
    float y = chr->GetPositionY();
    float z = chr->GetPositionZ();
    float o = chr->GetOrientation();
	uint32 guidlow = objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT);
	Log::getSingleton( ).outError("GameObjectGUIDlow %u",guidlow);
	uint8 state = 1;
	uint8 scale = 1;

    GameObject* pGameObj = new GameObject();

    // uint32 guidlow, uint16 display_id, uint8 state, uint32 obj_field_entry, uint8 scale, uint16 type, uint16 faction,  float x, float y, float z, float ang
    pGameObj->Create(guidlow, display_id, state, fieldentry, scale, typesid, factionid, chr->GetMapId(), x, y, z, o );
	pGameObj->SetZoneId(chr->GetZoneId());
	Log::getSingleton( ).outError("AddObject at Level3.cpp line 252");
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();

    //if(strcmp(safe,"true") == 0)
    pGameObj->SaveToDB();

    return true;
}

bool ChatHandler::HandleAnimCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    uint32 anim_id = atoi((char*)args);

    data.Initialize( SMSG_EMOTE );
    data << anim_id << m_session->GetPlayer( )->GetGUID();
    WPAssert(data.size() == 12);
    m_session->GetPlayer()->SendMessageToSet(&data, true);

    return true;
}


bool ChatHandler::HandleStandStateCommand(const char* args)
{
    if (!*args)
        return false;

    uint32 anim_id = atoi((char*)args);
    m_session->GetPlayer( )->SetUInt32Value( UNIT_NPC_EMOTESTATE , anim_id );

    return true;
}


bool ChatHandler::HandleDieCommand(const char* args)
{
	Player* SelectedPlayer;
	uint64 guid = m_session->GetPlayer()->GetSelection();

	if(guid == 0)
	{
		SelectedPlayer = m_session->GetPlayer();
	}
	else
	{
		SelectedPlayer = objmgr.GetPlayer(guid);
	}
	if(!SelectedPlayer)
	{
		SelectedPlayer = m_session->GetPlayer();
	}
	
	SelectedPlayer->KillPlayer();
	SelectedPlayer->SetUInt32Value(UNIT_FIELD_HEALTH, 0);
	
	//spawn Corpse
	//SelectedPlayer->SpawnCorpseBody();
	return true;
}

bool ChatHandler::HandleReviveCommand(const char* args)
{
	Player* SelectedPlayer;
	uint64 guid = m_session->GetPlayer()->GetSelection();

	if(guid == 0)
	{
		SelectedPlayer = m_session->GetPlayer();
	}
	else
	{
		SelectedPlayer = objmgr.GetPlayer(guid);
	}
	if(!SelectedPlayer)
	{
		SelectedPlayer = m_session->GetPlayer();
	}

	SelectedPlayer->SetMovement(MOVE_LAND_WALK);
	SelectedPlayer->SetMovement(MOVE_UNROOT);
    SelectedPlayer->SetPlayerSpeed(RUN, (float)7.5, true);
	SelectedPlayer->SetPlayerSpeed(SWIM, (float)4.9, true);

    SelectedPlayer->SetUInt32Value(CONTAINER_FIELD_SLOT_1+29, 0);
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_AURA+32, 0);
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_AURALEVELS+8, 0xeeeeeeee);
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_AURAAPPLICATIONS+8, 0xeeeeeeee);
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_AURAFLAGS+4, 0);
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_AURASTATE, 0);

    SelectedPlayer->ResurrectPlayer();
    SelectedPlayer->SetUInt32Value(UNIT_FIELD_HEALTH, (uint32)(SelectedPlayer->GetUInt32Value(UNIT_FIELD_MAXHEALTH)*0.50) );
    //SelectedPlayer->SpawnCorpseBones();
    return true;
}

bool ChatHandler::HandleMorphCommand(const char* args)
{
    if (!*args)
        return false;

    uint16 display_id = (uint16)atoi((char*)args);

    m_session->GetPlayer()->SetUInt32Value(UNIT_FIELD_DISPLAYID, display_id);
    //m_session->GetPlayer()->UpdateObject( );
    //m_session->GetPlayer()->SendMessageToSet(&data, true);

    return true;
}


bool ChatHandler::HandleAuraCommand(const char* args)
{
    if (!*args)
        return false;

    uint32 aura_id = atoi((char*)args);

    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURA, aura_id );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURAFLAGS, 0x0000000d );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURA+32, aura_id );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURALEVELS+8, 0xeeeeee00 );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURAAPPLICATIONS+8, 0xeeeeee00 );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURAFLAGS+4, 0x0000000d );
    m_session->GetPlayer( )->SetUInt32Value( UNIT_FIELD_AURASTATE, 0x00000002 );
    //m_session->GetPlayer()->UpdateObject( );

    return true;
}
bool ChatHandler::HandleAddGraveCommand(const char* args)
{
    QueryResult *result;
    std::stringstream ss;
    GraveyardTeleport *pGrave;

    ss.rdbuf()->str("");
    pGrave = new GraveyardTeleport;

    result = sDatabase.Query( "SELECT MAX(ID) FROM graveyards" );
    if( result )
    {
        pGrave->ID = (*result)[0].GetUInt32()+1;

        delete result;
    }
    pGrave->X = m_session->GetPlayer()->GetPositionX();
    pGrave->Y = m_session->GetPlayer()->GetPositionY();
    pGrave->Z = m_session->GetPlayer()->GetPositionZ();
    pGrave->O = m_session->GetPlayer()->GetOrientation();
    pGrave->ZoneId = m_session->GetPlayer()->GetZoneId();
    pGrave->MapId = m_session->GetPlayer()->GetMapId();
    pGrave->FactionID = 0;

    ss << "INSERT INTO graveyards ( X, Y, Z, O, zoneId, mapId) VALUES ("
        << pGrave->X << ", "
        << pGrave->Y << ", "
        << pGrave->Z << ", "
        << pGrave->O<< ", "
        << pGrave->ZoneId << ", "
        << pGrave->MapId << ")";

    sDatabase.Execute( ss.str( ).c_str( ) );

    objmgr.AddGraveyard(pGrave);
    return true;
}

bool ChatHandler::HandleAddSHCommand(const char *args)
{
    WorldPacket data;
    uint32 gossipId,textId;
    QueryResult *result2,*result3;
    std::stringstream ss,ss2,ss3;

    // Create the requested monster
    Player *chr = m_session->GetPlayer();
    float x = chr->GetPositionX();
    float y = chr->GetPositionY();
    float z = chr->GetPositionZ();
    float o = chr->GetOrientation();

    Creature* pCreature = new Creature();

    pCreature->Create(objmgr.GenerateLowGuid(HIGHGUID_UNIT), "Spirit Healer", chr->GetMapId(), x, y, z, o);
    pCreature->SetZoneId(chr->GetZoneId());
    pCreature->SetUInt32Value(OBJECT_FIELD_ENTRY, objmgr.AddCreatureName(pCreature->GetName(), 5233));
/*    pCreature->SetFloatValue(OBJECT_FIELD_SCALE_X, 1.0f);
    pCreature->SetUInt32Value(UNIT_FIELD_DISPLAYID, 5233);
    pCreature->SetUInt32Value(UNIT_NPC_FLAGS, 33);
    pCreature->SetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE , 35);
    pCreature->SetUInt32Value(UNIT_FIELD_HEALTH, 100);
    pCreature->SetUInt32Value(UNIT_FIELD_MAXHEALTH, 100);
    pCreature->SetUInt32Value(UNIT_FIELD_LEVEL, 60);
    pCreature->SetUInt32Value(UNIT_FIELD_FLAGS, 768);
    pCreature->SetUInt32Value(UNIT_FIELD_AURA+0, 10848);
    pCreature->SetUInt32Value(UNIT_FIELD_AURALEVELS+0, 0xEEEEEE3C);
    pCreature->SetUInt32Value(UNIT_FIELD_AURAAPPLICATIONS+0, 0xEEEEEE00);
    pCreature->SetUInt32Value(UNIT_FIELD_AURAFLAGS+0, 0x00000009);
    pCreature->SetFloatValue(UNIT_FIELD_COMBATREACH , 1.5f);
    pCreature->SetFloatValue(UNIT_FIELD_MAXDAMAGE ,  5.0f);
    pCreature->SetFloatValue(UNIT_FIELD_MINDAMAGE , 8.0f);
    pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME, 1900);
    pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME+1, 2000);
    pCreature->SetFloatValue(UNIT_FIELD_BOUNDINGRADIUS, 2.0f);
	Log::getSingleton( ).outError("AddObject at Level3.cpp line 455");
    objmgr.AddObject(pCreature);
	pCreature->AddToWorld();
    pCreature->SaveToDB();

	std::stringstream ss,ss2,ss3;
	QueryResult *result;

	result = sDatabase.Query( "SELECT MAX(ID) FROM npc_gossip" );
	if( result )
	{
		ss2 << "INSERT INTO npc_gossip ( ID , NPC_GUID, GOSSIP_TYPE, TEXTID, OPTION_COUNT) VALUES ("
			<< (*result)[0].GetUInt32()+1 << ", "
			<< pCreature->GetGUIDLow() << ", "
			<< 1 << ", "
			<< 1 << ", "
			<< 1 << ")";

		sDatabase.Execute( ss2.str( ).c_str( ) );
		delete result;
		result = NULL;


		result = sDatabase.Query( "SELECT MAX(ID) FROM npc_options" );
		if( result )
		{
			ss << "INSERT INTO npc_options ( `ID` , `GOSSIP_ID`, `TYPE`, `OPTION`, `NPC_TEXT_NEXTID`, `SPECIAL`) VALUES ("
				<< (*result)[0].GetUInt32()+1 << ", "
				<< (*result)[0].GetUInt32()+2 << ", "
				<< 0 << ", '"
				<< "Return me to life." << "', "
				<< 0 << ", "
				<< 2 << ")";

			sDatabase.Execute( ss.str( ).c_str( ) );
			delete result;
			result = NULL;
		}
		result = sDatabase.Query( "SELECT MAX(ID) FROM npc_text" );
		if( result )
		{
			ss3 << "INSERT INTO npc_text ( ID , TYPE_UNUSED, TEXT) VALUES ("
				<< (*result)[0].GetUInt32()+1 << ", "
				<< 0 << ", '"
				<< "It is not yet your time. I shall aid your journey back to the realm of the living... For a price." << "')";
			sDatabase.Execute( ss3.str( ).c_str( ) );
			delete result;
			result = NULL;
		}
    }*/
    pCreature->SetFloatValue(OBJECT_FIELD_SCALE_X, 1.0f);
    pCreature->SetUInt32Value(UNIT_FIELD_DISPLAYID, 5233);
    pCreature->SetUInt32Value(UNIT_NPC_FLAGS, 33);
    pCreature->SetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE , 35);
    pCreature->SetUInt32Value(UNIT_FIELD_HEALTH, 100);
    pCreature->SetUInt32Value(UNIT_FIELD_MAXHEALTH, 100);
    pCreature->SetUInt32Value(UNIT_FIELD_LEVEL, 60);
    pCreature->SetUInt32Value(UNIT_FIELD_FLAGS, 768);
    pCreature->SetUInt32Value(UNIT_FIELD_AURA+0, 10848);
    pCreature->SetUInt32Value(UNIT_FIELD_AURALEVELS+0, 0xEEEEEE3C);
    pCreature->SetUInt32Value(UNIT_FIELD_AURAAPPLICATIONS+0, 0xEEEEEE00);
    pCreature->SetUInt32Value(UNIT_FIELD_AURAFLAGS+0, 0x00000009);
    pCreature->SetFloatValue(UNIT_FIELD_COMBATREACH , 1.5f);
    pCreature->SetFloatValue(UNIT_FIELD_MAXDAMAGE ,  5.0f);
    pCreature->SetFloatValue(UNIT_FIELD_MINDAMAGE , 8.0f);
    pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME, 1900);
    pCreature->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME+1, 2000);
    pCreature->SetFloatValue(UNIT_FIELD_BOUNDINGRADIUS, 2.0f);
	Log::getSingleton( ).outError("AddObject at Level3.cpp line 172");
    objmgr.AddObject(pCreature);
    pCreature->AddToWorld();

    pCreature->SaveToDB();


    ss.rdbuf()->str("");
    ss2.rdbuf()->str("");
    ss3.rdbuf()->str("");
	result2 = sDatabase.Query( "SELECT MAX(ID) FROM npc_gossip" );
	if( result2 )
	{
		result3 = sDatabase.Query( "SELECT MAX(ID) FROM npc_text" );
		if( result3 )
		{
            textId = (*result3)[0].GetUInt32();
			ss3 << "INSERT INTO npc_text ( ID , TYPE_UNUSED, TEXT) VALUES ("
				<< textId+1 << ", "
				<< 0 << ", '"
				<< "It is not yet your time. I shall aid your journey back to the realm of the living... For a price." << "')";
			sDatabase.Execute( ss3.str( ).c_str( ) );
			delete result3;
			result3 = NULL;
		}

        gossipId = (*result2)[0].GetUInt32();
		ss2 << "INSERT INTO npc_gossip ( ID , NPC_GUID, GOSSIP_TYPE, TEXTID, OPTION_COUNT) VALUES ("
			<< gossipId+1 << ", "
			<< pCreature->GetGUIDLow() << ", "
			<< 1 << ", "
			<< textId+1 << ", "
			<< 1 << ")";

		sDatabase.Execute( ss2.str( ).c_str( ) );
		delete result2;
		result2 = NULL;


		result2 = sDatabase.Query( "SELECT MAX(ID) FROM npc_options" );
		if( result2 )
		{
			ss << "INSERT INTO npc_options ( `ID` , `GOSSIP_ID`, `TYPE`, `OPTION`, `NPC_TEXT_NEXTID`, `SPECIAL`) VALUES ("
				<< (*result2)[0].GetUInt32()+1 << ", "
				<< gossipId+1 << ", "
				<< 0 << ", '"
				<< "Return me to life." << "', "
				<< 0 << ", "
				<< 2 << ")";

			sDatabase.Execute( ss.str( ).c_str( ) );
			delete result2;
			result2 = NULL;
		}
    }
	
    return true;
}


bool ChatHandler::HandleSpawnTransportCommand(const char* args)
{
    GameObject* pGameObj = new GameObject();
    // uint32 guidlow, uint16 display_id, uint8 state, uint32 obj_field_entry, uint8 scale, uint16 type, uint16 faction, uint32 mapid, float x, float y, float z, float ang
    // Freewind Post Elevators
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 11898, 1, 11, 1, 1, float(-5399.188477), float(-2504.615967), float(89.021133), float(2.609266) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 11899, 1, 11, 1, 1, float(-5382.495605), float(-2489.417480), float(-40.528416), float(2.364921) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // Undercity Elevators and Doors
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20657, 1, 11, 1, 0, float(1533.879395), float(240.823593), float(-32.347244), float(3.132866) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20656, 1, 11, 1, 0, float(1553.299194), float(240.654114), float(55.395279), float(-0.008727) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 455, 1, 20655, 1, 11, 1, 0, float(1544.237183), float(240.770660), float(-40.783455), float(-0.008727) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20654, 1, 11, 1, 0, float(1595.213013), float(178.691315), float(-40.522171), float(-1.579524) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20653, 1, 11, 1, 0, float(1595.379028), float(197.704514), float(55.395279), float(1.562070) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 455, 1, 20652, 1, 11, 1, 0, float(1595.262451), float(188.642441), float(-40.783455), float(1.562070) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20651, 1, 11, 1, 0, float(1596.209961), float(302.398712), float(-40.664421), float(1.562070) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 462, 1, 20650, 1, 11, 1, 0, float(1596.038452), float(282.735748), float(55.395290), float(-1.579524) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 455, 1, 20649, 1, 11, 1, 0, float(1596.209961), float(291.797821), float(14.682331), float(-1.579524) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // The Great Lift Elevators
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 11899, 1, 11, 1, 1, float(-4670.772461), float(-1849.608398), float(-44.144260), float(-0.183260) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 11898, 1, 11, 1, 1, float(-4665.432617), float(-1827.673706), float(85.405289), float(0.061086) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // Thunderbluff Elevators
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 47297, 1, 11, 1, 1, float(-1037.266113), float(-49.235500), float(140.494644), float(3.071780) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 47296, 1, 11, 1, 1, float(-1028.043335), float(-28.356815), float(69.022560), float(2.914700) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 4171, 1, 11, 1, 1, float(-1308.377075), float(185.288116), float(68.585815), float(-0.270525) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 360, 1, 4170, 1, 11, 1, 1, float(-1286.240723), float(189.718201), float(130.079819), float(-1.073379) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // Tram
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176080, 1, 11, 1, 369, float(4.580645), float(28.209660), float(6.905265), float(1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176081, 1, 11, 1, 369, float(4.528066), float(8.435292), float(6.905265), float(1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176082, 1, 11, 1, 369, float(-45.400524), float(2492.792236), float(6.905265), float(1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176083, 1, 11, 1, 369, float(-45.400742), float(2512.148193), float(6.905265), float(1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176084, 1, 11, 1, 369, float(-45.393375), float(2472.930908), float(6.905265), float(1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3831, 1, 176085, 1, 11, 1, 369, float(4.498831), float(-11.347507), float(6.905265), float(-1.570796) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // Zeppelin Undercity -> Ogrimmar
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3031, 1, 176495, 1, 15, 1, 0, float(2068), float(289), float(97), float(-1.155328) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    pGameObj->SetUInt32Value(GAMEOBJECT_STATE,1);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    // Zeppelin Undercity -> Grom'Gol
    pGameObj = new GameObject();
    pGameObj->Create(objmgr.GenerateLowGuid(HIGHGUID_GAMEOBJECT), 3031, 1, 164871, 1, 15, 1, 0, float(2068), float(289), float(97), float(-1.155328) );
    pGameObj->SetUInt32Value(GAMEOBJECT_FLAGS,40);
    pGameObj->SetUInt32Value(GAMEOBJECT_STATE,1);
    objmgr.AddObject(pGameObj);
    pGameObj->AddToWorld();
    pGameObj->SaveToDB();

    return true;
}

bool ChatHandler::HandleEmoteCommand(const char* args)
{
    uint32 emote = atoi((char*)args);
    Player* chr = m_session->GetPlayer();
    if(chr->GetSelection() == 0)
        return false;

    Unit* target = objmgr.GetObject<Creature>(chr->GetSelection());
	if(target) target->SetUInt32Value(UNIT_NPC_EMOTESTATE,emote);

    return true;
}

bool ChatHandler::HandleNpcInfoCommand(const char* args)
{
    WorldPacket data;
	char buf[256];
	uint32 guid = m_session->GetPlayer()->GetSelection();
	uint32 factionid = 0, npcflags = 0, skinid = 0;
	Unit* target = objmgr.GetObject<Creature>(m_session->GetPlayer()->GetSelection());

	if(!target) {
		sChatHandler.FillSystemMessageData(&data, m_session, "Select something first.");
		m_session->SendPacket(&data);
		return true;
	}

	factionid = target->GetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE);
	npcflags = target->GetUInt32Value(UNIT_NPC_FLAGS);
	skinid = target->GetUInt32Value(UNIT_FIELD_DISPLAYID);

	std::stringstream ss;
    ss << "SELECT * FROM creatures WHERE id = " << target->GetGUIDLow() << '\0';

	QueryResult *result = sDatabase.Query( ss.str().c_str() );

	Field *fields = result->Fetch();

	sprintf(buf,"Player selected guid: %d. faction %d. flag %d. name_id %d. skin_id %d.",guid,factionid,npcflags,fields[8].GetUInt32(),skinid);
	sChatHandler.FillSystemMessageData(&data, m_session, buf);
	m_session->SendPacket(&data);

	return true;
}

bool ChatHandler::HandleExploreCheatCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    int flag = atoi((char*)args);

    Player *chr = getSelectedChar(m_session);
    if (chr == NULL) // Ignatich: what should NOT happen but just in case...
    {
        FillSystemMessageData(&data, m_session, "No character selected.");
        m_session->SendPacket( &data );
        return true;
    }

    char buf[256];

    // send message to user
    if (flag != 0)
    {
        sprintf((char*)buf,"%s has explored all zones now.", chr->GetName());
    }
    else
    {
        sprintf((char*)buf,"%s has no more explored zones.", chr->GetName());
    }
    FillSystemMessageData(&data, m_session, buf);
    m_session->SendPacket( &data );

    // send message to player
    if (flag != 0)
    {
        sprintf((char*)buf,"%s has explored all zones for you.",
            m_session->GetPlayer()->GetName());
    }
    else
    {
        sprintf((char*)buf,"%s has hidden all zones from you.", 
            m_session->GetPlayer()->GetName());
    }
    FillSystemMessageData(&data, m_session, buf);
    chr->GetSession()->SendPacket(&data);


    for (uint8 i=0; i<64; i++)
    {
        if (flag != 0)
        {
            m_session->GetPlayer()->SetFlag(PLAYER_EXPLORED_ZONES_1+i,0xFFFFFFFF);
        }
        else
        {
            m_session->GetPlayer()->SetFlag(PLAYER_EXPLORED_ZONES_1+i,0);
        }
    }

	return true;
}

bool ChatHandler::HandleHoverCommand(const char* args)
{
    WorldPacket data;

	data.Initialize(SMSG_MOVE_SET_HOVER);
	data << m_session->GetPlayer()->GetGUID();
	m_session->SendPacket( &data );

	WorldPacket data1;
	std::stringstream sstext;
	sstext << "Hover Enabled" << '\0';
	FillSystemMessageData(&data1, m_session, sstext.str().c_str());
    m_session->SendPacket( &data1 );

	/*
	SMSG_MOVE_SET_HOVER = 244,
	SMSG_MOVE_UNSET_HOVER = 245,
	*/

	return true;
}

bool ChatHandler::HandleLevelUpCommand(const char* args)
{
	int levels = 0;
	
	if (!*args)
        levels = 1;
	else
		levels = atoi(args);

	uint32 startlvl = m_session->GetPlayer()->GetUInt32Value(UNIT_FIELD_LEVEL);
	for(int i = startlvl; i < (startlvl+levels);i++)
	{
		uint32 curXP = m_session->GetPlayer()->GetUInt32Value(PLAYER_XP);
		uint32 nextLvlXP = m_session->GetPlayer()->GetUInt32Value(PLAYER_NEXT_LEVEL_XP);
		uint32 givexp = nextLvlXP - curXP;

		m_session->GetPlayer()->GiveXP(givexp,m_session->GetPlayer()->GetGUID());
	}

	WorldPacket data;
	std::stringstream sstext;
	sstext << "You have been leveled up to Level " << startlvl+levels << '\0';
	FillSystemMessageData(&data, m_session, sstext.str().c_str());
    m_session->SendPacket( &data );
	return true;
}

bool ChatHandler::HandleShowAreaCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    int area = atoi((char*)args);

    Player *chr = getSelectedChar(m_session);
    if (chr == NULL) // Ignatich: what should NOT happen but just in case...
    {
        FillSystemMessageData(&data, m_session, "No character selected.");
        m_session->SendPacket( &data );
        return true;
    }

    int offset = area / 32;
    uint32 val = (uint32)(1 << (area % 32));

    uint32 currFields = chr->GetUInt32Value(PLAYER_EXPLORED_ZONES_1 + offset);
    chr->SetUInt32Value(PLAYER_EXPLORED_ZONES_1 + offset, (uint32)(currFields | val));

    FillSystemMessageData(&data, m_session, "The area has been set as explored.");
    m_session->SendPacket( &data );
    return true;
}

bool ChatHandler::HandleHideAreaCommand(const char* args)
{
    WorldPacket data;

    if (!*args)
        return false;

    int area = atoi((char*)args);

    Player *chr = getSelectedChar(m_session);
    if (chr == NULL) // Ignatich: what should NOT happen but just in case...
    {
        FillSystemMessageData(&data, m_session, "No character selected.");
        m_session->SendPacket( &data );
        return true;
    }

    int offset = area / 32;
    uint32 val = (uint32)(1 << (area % 32));

    uint32 currFields = chr->GetUInt32Value(PLAYER_EXPLORED_ZONES_1 + offset);
    chr->SetUInt32Value(PLAYER_EXPLORED_ZONES_1 + offset, (uint32)(currFields ^ val));

    FillSystemMessageData(&data, m_session, "The area has been set as not explored.");
    m_session->SendPacket( &data );
    return true;
}

//DK
bool ChatHandler::HandleBanCharacterCommand(const char* args)
{
    WorldPacket data;

    if(!*args)
        return false;

    Player *chr = objmgr.GetPlayer(args);
    if (chr == NULL) 
    {
        FillSystemMessageData(&data, m_session, "There is no character with that name.");
        m_session->SendPacket( &data );
        return true;
    }

    if(chr->IsBanned())
        return false;

    chr->SetBanned();
    FillSystemMessageData(&data, m_session, "Character is banned!");
    m_session->SendPacket( &data );
    return true;

}

bool ChatHandler::HandleUnBanCharacterCommand(const char* args)
{
    WorldPacket data;

    if(!*args)
        return false;

    Player *chr = objmgr.GetPlayer(args);
    if (chr == NULL) 
    {
        FillSystemMessageData(&data, m_session, "There is no character with that name.");
        m_session->SendPacket( &data );
        return true;
    }
    
    if(!chr->IsBanned())
        return false;

    chr->UnSetBanned();
    FillSystemMessageData(&data, m_session, "Character is unbanned!");
    m_session->SendPacket( &data );
    return true;
}

bool ChatHandler::HandleGMTicketGetAllCommand(const char* args)
{
    Channel *chn = channelmgr.GetChannel(sWorld.getGmClientChannel().c_str(),m_session->GetPlayer());
        if(!chn)
            return false;

    chn->Say(m_session->GetPlayer(), "GmTicket 2", m_session->GetPlayer());
    for(std::list<GM_Ticket*>::iterator itr = objmgr.GM_TicketList.begin(); itr != objmgr.GM_TicketList.end(); itr++)
    {
        uint32 cont = 0;
        uint32 zone = 0;
        Player* plr = objmgr.GetPlayer((*itr)->guid);
        if(plr)
            if(plr->IsInWorld())
            {
                zone = plr->GetZoneId();
                cont = plr->GetMapId();
            }

        std::stringstream str;
        str << "GmTicket 0,";
        str << (*itr)->name.c_str() << ","  << (*itr)->level << ","  << (*itr)->type << ",";
        str << zone;

        chn->Say(m_session->GetPlayer(),str.str().c_str(), m_session->GetPlayer());
    }

    return true;
}

bool ChatHandler::HandleGMTicketGetByIdCommand(const char* args)
{
    if(!*args)
        return false;


    std::list<GM_Ticket*>::iterator i;
    for(i = objmgr.GM_TicketList.begin(); i != objmgr.GM_TicketList.end(); i++)
    {
        if(strcmp((*i)->name.c_str(), args) == 0)
        {
            Channel *chn = channelmgr.GetChannel(sWorld.getGmClientChannel().c_str(),m_session->GetPlayer());
            if(!chn)
                return false;

            std::stringstream str;
            str << "GmTicket 3,";
            str << (*i)->name.c_str() << "," << (*i)->message;
            chn->Say(m_session->GetPlayer(),str.str().c_str(), m_session->GetPlayer());
        }
    }
    return true;
}

bool ChatHandler::HandleGMTicketDelByIdCommand(const char* args)
{
    if(!*args)
        return false;

    WorldPacket data;

    std::list<GM_Ticket*>::iterator i;
    uint32 guid = -1;
    for(i = objmgr.GM_TicketList.begin(); i != objmgr.GM_TicketList.end(); i++)
    {
        if(strcmp((*i)->name.c_str(), args) == 0)
        {
            guid = (*i)->guid;
            break;
        }
    }
    if(guid != -1)
    {
        objmgr.remGMTicket(guid);

        std::stringstream str;
        str << "GmTicket 1," << args;

        Channel *chn = channelmgr.GetChannel(sWorld.getGmClientChannel().c_str(),m_session->GetPlayer());
        if(!chn)
            return false;

        chn->Say(m_session->GetPlayer(), str.str().c_str(), m_session->GetPlayer());


        Player* plr = objmgr.GetPlayer(guid);
        if(!plr)
            return true;
        if(!plr->IsInWorld())
            return true;

        data.Initialize(SMSG_GMTICKET_DELETETICKET);
        data << uint32(9);

        plr->GetSession()->SendPacket( &data );
    }

    return true;
}

bool ChatHandler::HandleAddSkillCommand(const char* args)
{
    WorldPacket data;
	char buf[256];
	Player* target = objmgr.GetObject<Player>(m_session->GetPlayer()->GetSelection());

	if(!target) {
		sChatHandler.FillSystemMessageData(&data, m_session, "Select A Player first.");
		m_session->SendPacket(&data);
		return true;
	}

	uint32 skillline;
	uint16 cur, max;

    char* pSkillline = strtok((char*)args, " ");
    if (!pSkillline)
        return false;

    char* pCurrent = strtok(NULL, " ");
    if (!pCurrent)
        return false;

	char* pMax = strtok(NULL, " ");
    if (!pMax)
        return false;

    skillline = (uint32)atol(pSkillline);
	cur = (uint16)atol(pCurrent);
	max = (uint16)atol(pMax);

	target->AddSkillLine(skillline,cur,max);

	sprintf(buf,"SkillLine: %u CurrentValue %u Max Value %u Added.",skillline,cur,max);
	sChatHandler.FillSystemMessageData(&data, m_session, buf);
	m_session->SendPacket(&data);

	return true;
}
