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

#ifndef WOWSERVER_GROUP_H
#define WOWSERVER_GROUP_H

typedef struct
{
	std::string name;
	uint64 guid;
} MemberSlot;

#define MAXGROUPSIZE 5

#include "Chat.h"
#include "Raid.h"

class Group
{
public:
	Group();
	~Group();

	void Create(const uint64 &guid, const char * name);

	void AddMember(uint64 guid, const char* name);
	uint32 RemoveMember(const uint64 &guid);
	void ChangeLeader(const uint64 &guid);

	bool IsFull() const { return m_count == MAXGROUPSIZE; }

	void SendUpdate();
	void Disband();

	const uint64& GetLeaderGUID() const { return m_leaderGuid; }
	//const char* GetLeaderName() const { return m_leaderName.c_str(); }

	void SetLootMethod(uint32 method) { m_lootMethod = method; }
	void SetLooterGuid(const uint64 &guid) { m_looterGuid = guid; }

	uint32 GetLootMethod() const { return m_lootMethod; }
	const uint64 & GetLooterGuid() const { return m_looterGuid; }

	uint32 GetMembersCount() const { return m_count; }
	const uint64& GetMemberGUID(uint32 i) const { ASSERT(i < m_count); return m_members[i].guid; }

	// GroupCheck for DeadUpdate
	bool GroupCheck(uint64 guid);

	// party chat implementation
	void BroadcastToGroup(WorldSession *session, std::string msg);

	void ConvertToRaid();

protected:

	MemberSlot m_members[MAXGROUPSIZE];

	uint64 m_leaderGuid;
	std::string m_leaderName;

	uint32 m_count;
	uint16 m_grouptype;

	uint32 m_lootMethod;
	uint64 m_looterGuid;
};

#endif
