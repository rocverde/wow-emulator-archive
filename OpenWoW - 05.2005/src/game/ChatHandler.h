//////////////////////////////////////////////////////////////////////
//  Chat Handler
//
//  Handles all messages with a chat-related opcode.
//////////////////////////////////////////////////////////////////////

// Copyright (C) 2004 Team Python
// Copyright (C) 2004, 2005 Team WSD
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

#ifndef WOWPYTHONSERVER_CHAT_H
#define WOWPYTHONSERVER_CHAT_H

#include "MsgHandler.h"

class ChatHandler;
class GameClient;
class Character;
class Unit;
class ChatHandler;

class ChatCommand
{
public:
	const char *Name;
	uint16 SecurityLevel;
	bool (ChatHandler::*Handler) (uint8* args);
	std::string Help;
	ChatCommand *ChildCommands;

	ChatCommand () {}
	~ChatCommand () {}

	void setValues (const char * nme, uint16 sl,
			bool (ChatHandler::*hnd) (uint8* args),
			std::string hlp, ChatCommand *cc)
	{
		Name = nme;
		SecurityLevel = sl;
		Handler = hnd; Help = hlp;
		ChildCommands = cc;
	};
};

class ChatHandler : public MsgHandler
{
public:
	ChatHandler() {}
	~ChatHandler() {}

	void HandleMsg( NetworkPacket & recv_data, GameClient *pClient );

	void FillMessageData (NetworkPacket *data, uint8 type, GameClient *pClient, uint8 *text );
	void SpawnCreature (GameClient *pClient, char* pName, uint32 display_id, uint32 npcFlags, uint32 faction_id, uint32 level);
	void smsg_NewWorld (GameClient *pClient, uint16 c, float x, float y, float z);
	void MovePlayer (GameClient *pClient, float x, float y, float z);

	ChatCommand *LoadHelp (bool load);

protected:

	bool hasStringAbbr(const char* s1, const char* s2);
	void SendMultilineMessage(const char *str);

	int ParseCommands(uint8* textCompare, uint16 text_length);
	bool ExecuteCommandInTable(ChatCommand *table, uint8* text);
	bool ShowHelpForCommand(ChatCommand *table, const char* cmd);

	// Level 0 commands
	bool HandleHelpCommand(uint8* args);
	bool HandleCommandsCommand(uint8* args);
	bool HandleNYICommand(uint8* args);
	bool HandleAcctCommand(uint8* args);
	bool HandleGMLoginCommand(uint8* args);
	bool HandleStartCommand(uint8* args);
	bool HandleInfoCommand(uint8* args);
	bool HandleMountCommand(uint8* args);
	bool HandleDismountCommand(uint8* args);
	bool HandleSaveCommand(uint8* args);
	bool HandleGMListCommand(uint8* args);
	bool HandleGMPassCommand(uint8* args);				//LINA

	// Level 1 commands
	bool HandleSummonCommand(uint8* args);
	bool HandleAppearCommand(uint8* args);
	bool HandleRecallCommand(uint8* args);
	bool HandleAnnounceCommand(uint8* args);
	bool HandleKickCommand(uint8* args);
	bool HandleGMOnCommand(uint8* args);
	bool HandleGMOffCommand(uint8* args);
	bool HandleGPSCommand(uint8* args);
	bool HandleSaveAllCommand(uint8* args); //LINA

	bool HandleModifyHPCommand(uint8* args);
	bool HandleModifyManaCommand(uint8* args);
	bool HandleModifyLevelCommand(uint8* args);
	bool HandleModifyGoldCommand(uint8* args);
	bool HandleModifySpeedCommand(uint8* args);
	bool HandleModifyScaleCommand(uint8* args);
	bool HandleModifyMountCommand(uint8* args);
	bool HandleModifyExpCommand(uint8* args);
	bool HandleModifyWaterSpeedCommand(uint8* args);

	// Level 2 commands
	bool HandleGUIDCommand(uint8* args);
	bool HandleNameCommand(uint8* args);
	bool HandleProgCommand(uint8* args);
	bool HandleItemMoveCommand(uint8* args);
	bool HandleSpawnCommand(uint8* args);
	bool HandleDeleteCommand(uint8* args);
	bool HandleSpellCommand(uint8* args);
	bool HandleSpawnTaxiCommand(uint8* args);
	bool HandleItemCommand(uint8* args);
	bool HandleAddMoveCommand(uint8* args);
	bool HandleRandomCommand(uint8* args);
	bool HandleRunCommand(uint8* args);
	bool HandleChangeLevelCommand(uint8* args);
	bool HandleNPCFlagCommand(uint8* args);
	bool HandleDisplayIdCommand(uint8* args);
	bool HandleFactionIdCommand(uint8* args);
	bool HandleRemoveSpellCommand(uint8* args);
	bool HandleRemoveItemCommand(uint8* args);
	bool HandleAggressiveCommand(uint8* args);

	// Level 3 commands
	bool HandleSecurityCommand(uint8* args);
	bool HandleWorldPortCommand(uint8* args);
	bool HandleAddSpiritCommand(uint8* args);
	bool HandleMoveCommand(uint8* args);
	bool HandleLearnCommand(uint8* args);
	bool HandleAnimFreqCommand(uint8* args);
	bool HandleStandStateCommand(uint8* args);
	bool HandleDieCommand(uint8* args);
	bool HandleMorphCommand(uint8* args);
	bool HandleAuraCommand(uint8* args);
	bool HandleUnBanCommand(uint8* args); //LINA
	bool HandleBanCommand(uint8* args); //LINA
	bool HandleUpdateCommand(uint8* args);
	bool HandleIsleCommand(uint8* args);//LINA


	int32 TestValue(const float Value, const float max, const float min);
	int32 TestValue(const uint32 Value, const uint32 max, const uint32 min);
	void ChangeSelectedChar(const uint16 &index, const uint32 Value, const uint32 max, const uint32 min, char * nom);
	void ChangeSelectedChar(const uint16 &index, const float Value, const float max, const float min, char * nom);
	void ChangeSelectedCharMsg(const uint16 &index, const float Value, const float max, const float min, char * nom);
	void ChangeSelectedCharMsg(const uint16 &index, const uint32 Value, const uint32 max, const uint32 min, char * nom);
	void Message(Character * pChar, char * nom, const float Value);
	void Message(Character * pChar, char * nom, const uint32 Value);
	void Message(Character * pChar, char * nom);

	Character * getCurrentCharByName(uint8 * pName);
	Character * getSelectedChar();

	Unit * getSelectedNPC();
	void ChangeSelectedNPC(const uint16 &index, const uint32 Value, const uint32 max, const uint32 min);

	void GenCreature (GameClient *pClient, uint32 StartId, uint32 EndId , uint32 StepId ); //ELECTRIX ADD
	GameClient *m_pClient;
};


#endif
