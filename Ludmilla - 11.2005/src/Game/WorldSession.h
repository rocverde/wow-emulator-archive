//******************************************************************************
#ifndef __WORLDSESSION_H
#define __WORLDSESSION_H
//==============================================================================
#include "Server/WS/InterThreadPair.h"
#include "Server/WS/InterThreadQueue.h"
//==============================================================================
class Player;
class WorldPacket;
class WorldSocket;
class WorldSession;
class QuestPacketHandler;
//------------------------------------------------------------------------------
struct OpcodeHandler
{
    uint16 opcode;
    uint16 status;
    void (WorldSession::*handler)(WorldPacket& recvPacket);
};

enum SessionStatus
{
    STATUS_AUTHED = 0,
    STATUS_LOGGEDIN
};
//------------------------------------------------------------------------------
class WorldSession
{
public:
	WorldSession(uint32 id, WorldSocket *sock);
	~WorldSession();

	CInterThreadQueue<WorldPacket*> output;
	CInterThreadPair<WorldSession, WorldSocket> socket;

    void SendPacket(WorldPacket* packet);

    uint32 GetSecurity() const { return _security; }
    uint32 GetAccountId() const { return _accountId; }
    Player* GetPlayer() { return _player; }
    void SetSecurity(uint32 security) { _security = security; }
    void SetSocket(WorldSocket *sock);
	bool IsSocket() const { return _socket!=0; }
    void SetPlayer(Player *plr) { _player = plr; }

    void LogoutRequest(time_t requestTime)
    {
        _logoutTime = requestTime;
    }

    bool ShouldLogOut(time_t currTime) const
    {
        return (_logoutTime > 0 && currTime >= _logoutTime + 20);
    }

    void LogoutPlayer();

    void QueuePacket(WorldPacket& packet);
    bool Update(uint32 diff);

	void SystemMessage (char *format, ...);
	void SendFriendList();

protected:
	void SendProficiency (uint8 b1, uint8 b2=0, uint8 b3=0, uint8 b4=0, uint8 b5=0);

    /// Login screen opcodes (PlayerHandler.cpp):
    void HandleCharEnumOpcode(WorldPacket& recvPacket);
    void HandleCharDeleteOpcode(WorldPacket& recvPacket);
    void HandleCharCreateOpcode(WorldPacket& recvPacket);
    void HandlePlayerLoginOpcode(WorldPacket& recvPacket);

    /// Authentification and misc opcodes (MiscHandler.cpp):
    void HandlePingOpcode(WorldPacket& recvPacket);
    void HandleAuthSessionOpcode(WorldPacket& recvPacket);
    void HandleRepopRequestOpcode(WorldPacket& recvPacket);
    void HandleAutostoreLootItemOpcode(WorldPacket& recvPacket);
    void HandleLootMoneyOpcode(WorldPacket& recvPacket);
    void HandleLootOpcode(WorldPacket& recvPacket);
    void HandleLootReleaseOpcode(WorldPacket& recvPacket);
    void HandleWhoOpcode(WorldPacket& recvPacket);
    void HandleLogoutRequestOpcode(WorldPacket& recvPacket);
    void HandlePlayerLogoutOpcode(WorldPacket& recvPacket);
    void HandleLogoutCancelOpcode(WorldPacket& recvPacket);

    void HandleGMTicketGetTicketOpcode(WorldPacket& recvPacket);
    void HandleGMTicketCreateOpcode(WorldPacket& recvPacket);
    void HandleGMTicketSystemStatusOpcode(WorldPacket& recvPacket);
	void HandleGMTicketDeleteOpcode(WorldPacket& recvPacket);  
  	void HandleGMTicketTextUpdateOpcode(WorldPacket& recvPacket); 

    void HandleZoneUpdateOpcode(WorldPacket& recvPacket);
    void HandleSetTargetOpcode(WorldPacket& recvPacket);
    void HandleSetSelectionOpcode(WorldPacket& recvPacket);
    void HandleStandStateChangeOpcode(WorldPacket& recvPacket);

    void HandleFriendListOpcode(WorldPacket& recvPacket);
    void HandleAddFriendOpcode(WorldPacket& recvPacket);
    void HandleDelFriendOpcode(WorldPacket& recvPacket);
    void HandleAddIgnoreOpcode(WorldPacket& recvPacket);
    void HandleDelIgnoreOpcode(WorldPacket& recvPacket);  

    void HandleBugOpcode(WorldPacket& recvPacket);
	void HandleEnablePVPOpcode(WorldPacket& recvPacket);

    void HandleSetActionButton(WorldPacket& recvPacket);

	void HandlePetActionOpcode(WorldPacket& recvPacket);

    // void HandleJoinChannelOpcode(WorldPacket& recvPacket);
    // void HandleLeaveChannelOpcode(WorldPacket& recvPacket);
	void HandleUpdateAccountDataOpcode (WorldPacket & recvPacket);
	void HandleMeetingStoneInfo(WorldPacket& recPacket);

    /// Opcode implemented in QueryHandler.cpp:
    void HandleNameQueryOpcode(WorldPacket& recvPacket);
    /// Opcode implemented in QueryHandler.cpp:
    void HandleQueryTimeOpcode(WorldPacket& recvPacket);
    /// Opcode implemented in QueryHandler.cpp:
    void HandleCreatureQueryOpcode(WorldPacket& recvPacket);
    /// Opcode implemented in QueryHandler.cpp:
    void HandleGameObjectQueryOpcode(WorldPacket& recvPacket);
	void HandleGameObjectUseOpcode(WorldPacket& recPacket);

    /// Opcode implemented in MovementHandler.cpp
    void HandleMoveHeartbeatOpcode(WorldPacket& recvPacket);
    /// Opcode implemented in MovementHandler.cpp
    void HandleMoveWorldportAckOpcode(WorldPacket& recvPacket);
    /// Opcode implemented in MovementHandler.cpp
    void HandleMovementOpcodes(WorldPacket& recvPacket);
	void HandleMovementFall(WorldPacket& recvPacket);
	void HandleSetActiveMoverOpcode(WorldPacket &recv_data);

    /// Opcodes implemented in GroupHandler.cpp:
    void HandleGroupInviteOpcode(WorldPacket& recvPacket);
    void HandleGroupCancelOpcode(WorldPacket& recvPacket);
    void HandleGroupAcceptOpcode(WorldPacket& recvPacket);
    void HandleGroupDeclineOpcode(WorldPacket& recvPacket);
    void HandleGroupUninviteOpcode(WorldPacket& recvPacket);
    void HandleGroupUninviteGuildOpcode(WorldPacket& recvPacket);
    void HandleGroupSetLeaderOpcode(WorldPacket& recvPacket);
    void HandleGroupDisbandOpcode(WorldPacket& recvPacket);
    void HandleLootMethodOpcode(WorldPacket& recvPacket);

    /// Taxi opcodes (TaxiHandler.cpp)
    void HandleTaxiNodeStatusQueryOpcode(WorldPacket& recvPacket);
    void HandleTaxiQueryAviableNodesOpcode(WorldPacket& recvPacket);
    void HandleActivateTaxiOpcode(WorldPacket& recvPacket);

    /// NPC opcodes (NPCHandler.cpp)
    void HandleTabardVendorActivateOpcode(WorldPacket& recvPacket);
    void HandleBankerActivateOpcode(WorldPacket& recvPacket);
    void HandleTrainerListOpcode(WorldPacket& recvPacket);
    void HandleTrainerBuySpellOpcode(WorldPacket& recvPacket);
    void HandlePetitionShowListOpcode(WorldPacket& recvPacket);
    void HandleGossipHelloOpcode(WorldPacket& recvPacket);
    void HandleGossipSelectOptionOpcode(WorldPacket& recvPacket);
    void HandleSpiritHealerActivateOpcode(WorldPacket& recvPacket);
    void HandleNpcTextQueryOpcode(WorldPacket& recvPacket);
    void HandleBinderActivateOpcode(WorldPacket& recvPacket);
	void HandleLearnTalentOpcode(WorldPacket& recvPacket);

	// Auction House opcodes
	void HandleAuctionHelloOpcode(WorldPacket& recvPacket);
	void HandleAuctionListItems( WorldPacket & recv_data );
	void HandleAuctionListBidderItems( WorldPacket & recv_data );
	void HandleAuctionSellItem( WorldPacket & recv_data );
	void HandleAuctionListOwnerItems( WorldPacket & recv_data );
	void HandleAuctionPlaceBid( WorldPacket & recv_data );

	// Mail opcodes
	void HandleGetMail( WorldPacket & recv_data );
	void HandleSendMail( WorldPacket & recv_data );
	void HandleTakeMoney( WorldPacket & recv_data );
	void HandleTakeItem( WorldPacket & recv_data );
	void HandleMarkAsRead( WorldPacket & recv_data );
	void HandleReturnToSender( WorldPacket & recv_data );
	void HandleMailDelete( WorldPacket & recv_data );
	void HandleItemTextQuery( WorldPacket & recv_data );
	void HandleMailCreateTextItem( WorldPacket & recv_data );

    /// Item opcodes (ItemHandler.cpp)
    void HandleSwapInvItemOpcode(WorldPacket& recvPacket);
    void HandleDestroyItemOpcode(WorldPacket& recvPacket);
    void HandleAutoEquipItemOpcode(WorldPacket& recvPacket);
    void HandleItemQuerySingleOpcode(WorldPacket& recvPacket);
    void HandleSellItemOpcode(WorldPacket& recvPacket);
    void HandleBuyItemInSlotOpcode(WorldPacket& recvPacket);
    void HandleBuyItemOpcode(WorldPacket& recvPacket);
	void HandleBuybackItemOpcode(WorldPacket& recvPacket);
    void HandleListInventoryOpcode(WorldPacket& recvPacket);
    void HandleSetAmmoOpcode(WorldPacket& recvPacket);
	void HandleSetSheathed(WorldPacket& recvPacket);
    void HandleReadItem( WorldPacket & recv_data );
	void HandleAutostoreBagItem( WorldPacket & recv_data );
	void HandleSwapItem( WorldPacket & recv_data );

    /// Combat opcodes (CombatHandler.cpp)
    void HandleAttackSwingOpcode(WorldPacket& recvPacket);
    void HandleAttackStopOpcode(WorldPacket& recvPacket);

    /// Spell opcodes (SpellHandler.cpp)
    void HandleUseItemOpcode(WorldPacket& recvPacket);
    void HandleCastSpellOpcode(WorldPacket& recvPacket);
    void HandleCancelCastOpcode(WorldPacket& recvPacket);
    void HandleCancelAuraOpcode(WorldPacket& recvPacket);
	void HandleCancelChannellingOpcode(WorldPacket& recvPacket);
	void HandleCancelAutorepeatSpellOpcode(WorldPacket& recvPacket);

    /// Skill opcodes (SkillHandler.spp)
    //void HandleSkillLevelUpOpcode(WorldPacket& recvPacket);

    /// Quest opcodes (QuestHandler.cpp)
    void HandleQuestgiverStatusQueryOpcode(WorldPacket& recvPacket);
    void HandleQuestgiverHelloOpcode(WorldPacket& recvPacket);
    void HandleQuestgiverAcceptQuestOpcode(WorldPacket& recvPacket);
    void HandleQuestgiverChooseRewardOpcode(WorldPacket& recvPacket);
    void HandleQuestgiverRequestRewardOpcode(WorldPacket& recvPacket);
    void HandleQuestQueryOpcode(WorldPacket& recvPacket);
    void HandleQuestgiverQuestQueryOpcode(WorldPacket& recvPacket);

    void HandleQuestgiverCancel(WorldPacket& recvPacket);
    void HandleQuestLogSwapQuest(WorldPacket& recvPacket);
    void HandleQuestLogRemoveQuest(WorldPacket& recvPacket);
    void HandleQuestConfirmAccept(WorldPacket& recvPacket);
    void HandleQuestComplete(WorldPacket& recvPacket);
    void HandleQuestAutoLaunch(WorldPacket& recvPacket);

    /// Chat opcodes (Chat.cpp)
    void HandleMessagechatOpcode(WorldPacket& recvPacket);
    void HandleTextEmoteOpcode(WorldPacket& recvPacket);
    void HandleAreatriggerOpcode(WorldPacket& recvPacket);

    /// Corpse opcodes (Corpse.cpp)
    void HandleCorpseReclaimOpcode( WorldPacket& recvPacket );
    void HandleCorpseQueryOpcode( WorldPacket& recvPacket );
	void HandleResurrectResponseOpcode(WorldPacket& recvPacket);

	/// Channel Opcodes (ChannelHandler.cpp)
	void HandleChannelJoin(WorldPacket& recvPacket);
	void HandleChannelLeave(WorldPacket& recvPacket);
	void HandleChannelList(WorldPacket& recvPacket);
	void HandleChannelPassword(WorldPacket& recvPacket);
	void HandleChannelSetOwner(WorldPacket& recvPacket);
	void HandleChannelOwner(WorldPacket& recvPacket);
	void HandleChannelModerator(WorldPacket& recvPacket);
	void HandleChannelUnmoderator(WorldPacket& recvPacket);
	void HandleChannelMute(WorldPacket& recvPacket);
	void HandleChannelUnmute(WorldPacket& recvPacket);
	void HandleChannelInvite(WorldPacket& recvPacket);
	void HandleChannelKick(WorldPacket& recvPacket);
	void HandleChannelBan(WorldPacket& recvPacket);
	void HandleChannelUnban(WorldPacket& recvPacket);
	void HandleChannelAnnounce(WorldPacket& recvPacket);
	void HandleChannelModerate(WorldPacket& recvPacket);

	// Tutorials
	void HandleTutorialFlag ( WorldPacket & recv_data );
	void HandleTutorialClear( WorldPacket & recv_data );
	void HandleTutorialReset( WorldPacket & recv_data );
	
	// Cinematic
	void HandleCompleteCinema( WorldPacket & recv_data );
	void HandleNextCinematicCamera(WorldPacket& recvPacket);

	// Battlefield
	void HandleBattlefieldStatusOpcode(WorldPacket &recv_data);

	// Misc
	void HandleMoveTimeSkippedOpcode(WorldPacket &recv_data);
	void HandlePageQueryOpcode(WorldPacket& recvPacket);
	void HandleEnablePvP(WorldPacket& recvPacket);

	// Root - Unroot
	void HandleMooveRootAck(WorldPacket& recvPacket);
	void HandleMooveUnRootAck(WorldPacket& recvPacket);

    //! Returns handlers table
    OpcodeHandler* _GetOpcodeHandlerTable() const;

private:
    Player *_player;
    WorldSocket *_socket;

    uint32 _security; // 0 - normal, >= 1 - GM
    uint32 _accountId;

    time_t _logoutTime; // time we received a logout request -- wait 20 seconds, and quit

    ZThread::LockedQueue<WorldPacket*,ZThread::FastMutex> _recvQueue;
};
//==============================================================================
#endif
//******************************************************************************
