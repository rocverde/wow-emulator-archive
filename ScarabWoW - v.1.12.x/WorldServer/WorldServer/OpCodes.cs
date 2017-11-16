﻿namespace WorldServer
{
    using System;

    internal enum OpCodes
    {
        CMSG_ACCEPT_TRADE = 0x11a,
        CMSG_ACTIVATETAXI = 0x1ad,
        CMSG_ACTIVATETAXI_FAR = 0x312,
        CMSG_ADD_FRIEND = 0x69,
        CMSG_ADD_IGNORE = 0x6c,
        CMSG_ADD_PVP_MEDAL_CHEAT = 0x289,
        CMSG_ADVANCE_SPAWN_TIME = 0x31,
        CMSG_AREA_SPIRIT_HEALER_QUERY = 0x2e2,
        CMSG_AREA_SPIRIT_HEALER_QUEUE = 0x2e3,
        CMSG_AREATRIGGER = 180,
        CMSG_ATTACKSTOP = 0x142,
        CMSG_ATTACKSWING = 0x141,
        CMSG_AUCTION_LIST_BIDDER_ITEMS = 0x264,
        CMSG_AUCTION_LIST_ITEMS = 600,
        CMSG_AUCTION_LIST_OWNER_ITEMS = 0x259,
        CMSG_AUCTION_PLACE_BID = 0x25a,
        CMSG_AUCTION_REMOVE_ITEM = 0x257,
        CMSG_AUCTION_SELL_ITEM = 0x256,
        CMSG_AUTH_SESSION = 0x1ed,
        CMSG_AUTH_SRP6_BEGIN = 0x33,
        CMSG_AUTH_SRP6_PROOF = 0x34,
        CMSG_AUTH_SRP6_RECODE = 0x35,
        CMSG_AUTOBANK_ITEM = 0x283,
        CMSG_AUTOEQUIP_GROUND_ITEM = 0x106,
        CMSG_AUTOEQUIP_ITEM = 0x10a,
        CMSG_AUTOSTORE_BAG_ITEM = 0x10b,
        CMSG_AUTOSTORE_BANK_ITEM = 0x282,
        CMSG_AUTOSTORE_GROUND_ITEM = 0x107,
        CMSG_AUTOSTORE_LOOT_ITEM = 0x108,
        CMSG_BANKER_ACTIVATE = 0x1b7,
        CMSG_BATTLEFIELD_JOIN = 0x23e,
        CMSG_BATTLEFIELD_LIST = 0x23c,
        CMSG_BATTLEFIELD_PORT = 0x2d5,
        CMSG_BATTLEFIELD_STATUS = 0x2d3,
        CMSG_BATTLEMASTER_HELLO = 0x2d7,
        CMSG_BATTLEMASTER_JOIN = 750,
        CMSG_BEASTMASTER = 0x21,
        CMSG_BEGIN_TRADE = 0x117,
        CMSG_BINDER_ACTIVATE = 0x1b5,
        CMSG_BOOTME = 1,
        CMSG_BUG = 0x1ca,
        CMSG_BUSY_TRADE = 280,
        CMSG_BUY_BANK_SLOT = 0x1b9,
        CMSG_BUY_ITEM = 0x1a2,
        CMSG_BUY_ITEM_IN_SLOT = 0x1a3,
        CMSG_BUY_STABLE_SLOT = 0x272,
        CMSG_BUYBACK_ITEM = 0x290,
        CMSG_CANCEL_AURA = 310,
        CMSG_CANCEL_AUTO_REPEAT_SPELL = 0x26d,
        CMSG_CANCEL_CAST = 0x12f,
        CMSG_CANCEL_CHANNELLING = 0x13b,
        CMSG_CANCEL_GROWTH_AURA = 0x29b,
        CMSG_CANCEL_TRADE = 0x11c,
        CMSG_CAST_SPELL = 0x12e,
        CMSG_CHANNEL_ANNOUNCEMENTS = 0xa7,
        CMSG_CHANNEL_BAN = 0xa5,
        CMSG_CHANNEL_INVITE = 0xa3,
        CMSG_CHANNEL_KICK = 0xa4,
        CMSG_CHANNEL_LIST = 0x9a,
        CMSG_CHANNEL_MODERATE = 0xa8,
        CMSG_CHANNEL_MODERATOR = 0x9f,
        CMSG_CHANNEL_MUTE = 0xa1,
        CMSG_CHANNEL_OWNER = 0x9e,
        CMSG_CHANNEL_PASSWORD = 0x9c,
        CMSG_CHANNEL_SET_OWNER = 0x9d,
        CMSG_CHANNEL_UNBAN = 0xa6,
        CMSG_CHANNEL_UNMODERATOR = 160,
        CMSG_CHANNEL_UNMUTE = 0xa2,
        CMSG_CHAR_CREATE = 0x36,
        CMSG_CHAR_DELETE = 0x38,
        CMSG_CHAR_ENUM = 0x37,
        CMSG_CHAR_RENAME = 0x2c7,
        CMSG_CHARACTER_POINT_CHEAT = 0x223,
        CMSG_CHAT_IGNORED = 0x225,
        CMSG_CHEAT_SETMONEY = 0x24,
        CMSG_CLEAR_EXPLORATION = 0x237,
        CMSG_CLEAR_QUEST = 0x2c,
        CMSG_CLEAR_TRADE_ITEM = 0x11e,
        CMSG_COMPLETE_CINEMATIC = 0xfc,
        CMSG_COOLDOWN_CHEAT = 40,
        CMSG_CREATEGAMEOBJECT = 20,
        CMSG_CREATEITEM = 0x13,
        CMSG_CREATEMONSTER = 0x11,
        CMSG_CREATURE_QUERY = 0x60,
        CMSG_DBLOOKUP = 2,
        CMSG_DEBUG_AISTATE = 0x2e,
        CMSG_DEBUG_CHANGECELLZONE = 12,
        CMSG_DECHARGE = 0x204,
        CMSG_DEL_FRIEND = 0x6a,
        CMSG_DEL_IGNORE = 0x6d,
        CMSG_DEL_PVP_MEDAL_CHEAT = 650,
        CMSG_DESTROYITEM = 0x111,
        CMSG_DESTROYMONSTER = 0x12,
        CMSG_DISABLE_PVP_CHEAT = 0x30,
        CMSG_DROP_ITEM = 0x110,
        CMSG_DUEL_ACCEPTED = 0x16c,
        CMSG_DUEL_CANCELLED = 0x16d,
        CMSG_EMBLAZON_TABARD_OBSOLETE = 13,
        CMSG_EMOTE = 0x102,
        CMSG_ENABLE_DAMAGE_LOG = 0x27d,
        CMSG_ENABLEDEBUGCOMBATLOGGING_OBSOLETE = 0x17,
        CMSG_FAR_SIGHT = 0x27a,
        CMSG_FIELD_WATCHED_FACTION_INACTIVE = 0x317,
        CMSG_FIELD_WATCHED_FACTION_SHOW_BAR = 0x318,
        CMSG_FLAG_QUEST = 0x2a,
        CMSG_FLAG_QUEST_FINISH = 0x2b,
        CMSG_FORCE_MOVE_ROOT_ACK = 0xe9,
        CMSG_FORCE_MOVE_UNROOT_ACK = 0xeb,
        CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK = 0xe5,
        CMSG_FORCE_RUN_SPEED_CHANGE_ACK = 0xe3,
        CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK = 0x2dd,
        CMSG_FORCE_SWIM_SPEED_CHANGE_ACK = 0xe7,
        CMSG_FORCE_TURN_RATE_CHANGE_ACK = 0x2df,
        CMSG_FORCE_WALK_SPEED_CHANGE_ACK = 0x2db,
        CMSG_FORCEACTION = 0x18,
        CMSG_FORCEACTIONONOTHER = 0x19,
        CMSG_FORCEACTIONSHOW = 0x1a,
        CMSG_FRIEND_LIST = 0x66,
        CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE = 0xb2,
        CMSG_GAMEOBJ_USE = 0xb1,
        CMSG_GAMEOBJECT_QUERY = 0x5e,
        CMSG_GAMESPEED_SET = 70,
        CMSG_GAMETIME_SET = 0x44,
        CMSG_GET_MAIL_LIST = 570,
        CMSG_GETDEATHBINDZONE = 0x156,
        CMSG_GHOST = 0x1e5,
        CMSG_GM_CREATE_ITEM_TARGET = 0x210,
        CMSG_GM_FREEZE = 0x22d,
        CMSG_GM_INVIS = 0x1e6,
        CMSG_GM_MOVECORPSE = 0x22c,
        CMSG_GM_NUKE = 0x1fa,
        CMSG_GM_REQUEST_PLAYER_INFO = 0x22f,
        CMSG_GM_RESURRECT = 0x22a,
        CMSG_GM_REVEALTO = 0x229,
        CMSG_GM_SET_SECURITY_GROUP = 0x1f9,
        CMSG_GM_SILENCE = 0x228,
        CMSG_GM_SUMMONMOB = 0x22b,
        CMSG_GM_TEACH = 0x20f,
        CMSG_GM_UBERINVIS = 0x22e,
        CMSG_GM_UNTEACH = 0x2e3,
        CMSG_GM_VISION = 550,
        CMSG_GMTICKET_CREATE = 0x205,
        CMSG_GMTICKET_DELETETICKET = 0x217,
        CMSG_GMTICKET_GETTICKET = 0x211,
        CMSG_GMTICKET_SYSTEMSTATUS = 0x21a,
        CMSG_GMTICKET_UPDATETEXT = 0x207,
        CMSG_GMTICKETSYSTEM_TOGGLE = 0x29a,
        CMSG_GODMODE = 0x22,
        CMSG_GOSSIP_HELLO = 0x17b,
        CMSG_GOSSIP_SELECT_OPTION = 380,
        CMSG_GROUP_ACCEPT = 0x72,
        CMSG_GROUP_ASSISTANT = 0x28f,
        CMSG_GROUP_CANCEL = 0x70,
        CMSG_GROUP_CHANGE_SUB_GROUP = 0x27e,
        CMSG_GROUP_DECLINE = 0x73,
        CMSG_GROUP_DISBAND = 0x7b,
        CMSG_GROUP_INVITE = 110,
        CMSG_GROUP_RAID_CONVERT = 0x28e,
        CMSG_GROUP_SET_LEADER = 120,
        CMSG_GROUP_SWAP_SUB_GROUP = 640,
        CMSG_GROUP_UNINVITE = 0x75,
        CMSG_GROUP_UNINVITE_GUID = 0x76,
        CMSG_GUILD_ACCEPT = 0x84,
        CMSG_GUILD_ADD_RANK = 0x232,
        CMSG_GUILD_CHANGEINFO = 0x2fc,
        CMSG_GUILD_CREATE = 0x81,
        CMSG_GUILD_DECLINE = 0x85,
        CMSG_GUILD_DEL_RANK = 0x233,
        CMSG_GUILD_DEMOTE = 140,
        CMSG_GUILD_DISBAND = 0x8f,
        CMSG_GUILD_INFO = 0x87,
        CMSG_GUILD_INVITE = 130,
        CMSG_GUILD_LEADER = 0x90,
        CMSG_GUILD_LEAVE = 0x8d,
        CMSG_GUILD_MOTD = 0x91,
        CMSG_GUILD_PROMOTE = 0x8b,
        CMSG_GUILD_QUERY = 0x54,
        CMSG_GUILD_RANK = 0x231,
        CMSG_GUILD_REMOVE = 0x8e,
        CMSG_GUILD_ROSTER = 0x89,
        CMSG_GUILD_SET_OFFICER_NOTE = 0x235,
        CMSG_GUILD_SET_PUBLIC_NOTE = 0x234,
        CMSG_HARDWARE_SURVEY_RESULTS = 0x2e5,
        CMSG_IGNORE_TRADE = 0x119,
        CMSG_INITIATE_TRADE = 0x116,
        CMSG_INSPECT = 0x114,
        CMSG_ITEM_NAME_QUERY = 0x2c4,
        CMSG_ITEM_QUERY_MULTIPLE = 0x57,
        CMSG_ITEM_QUERY_SINGLE = 0x56,
        CMSG_ITEM_TEXT_QUERY = 0x243,
        CMSG_JOIN_CHANNEL = 0x97,
        CMSG_LEARN_SPELL = 0x10,
        CMSG_LEARN_TALENT = 0x251,
        CMSG_LEAVE_BATTLEFIELD = 0x2e1,
        CMSG_LEAVE_CHANNEL = 0x98,
        CMSG_LEVEL_CHEAT = 0x25,
        CMSG_LEVELUP_CHEAT_OBSOLETE = 0x27,
        CMSG_LIST_INVENTORY = 0x19e,
        CMSG_LOGOUT_CANCEL = 0x4e,
        CMSG_LOGOUT_REQUEST = 0x4b,
        CMSG_LOOT = 0x15d,
        CMSG_LOOT_MASTER_GIVE = 0x2a3,
        CMSG_LOOT_METHOD = 0x7a,
        CMSG_LOOT_MONEY = 350,
        CMSG_LOOT_RELEASE = 0x15f,
        CMSG_LOOT_ROLL = 0x2a0,
        CMSG_MAIL_CREATE_TEXT_ITEM = 0x24a,
        CMSG_MAIL_DELETE = 0x249,
        CMSG_MAIL_MARK_AS_READ = 0x247,
        CMSG_MAIL_RETURN_TO_SENDER = 0x248,
        CMSG_MAIL_TAKE_ITEM = 0x246,
        CMSG_MAIL_TAKE_MONEY = 0x245,
        CMSG_MAKEMONSTERATTACKGUID = 0x16,
        CMSG_MAKEMONSTERATTACKME_OBSOLETE = 0x15,
        CMSG_MEETINGSTONE_CHEAT = 660,
        CMSG_MEETINGSTONE_INFO = 0x296,
        CMSG_MEETINGSTONE_JOIN = 0x292,
        CMSG_MEETINGSTONE_LEAVE = 0x293,
        CMSG_MESSAGECHAT = 0x95,
        CMSG_MINIGAME_MOVE = 760,
        CMSG_MOUNTSPECIAL_ANIM = 0x171,
        CMSG_MOVE_FALL_RESET = 0x2ca,
        CMSG_MOVE_FEATHER_FALL_ACK = 0x2cf,
        CMSG_MOVE_HOVER_ACK = 0xf6,
        CMSG_MOVE_KNOCK_BACK_ACK = 240,
        CMSG_MOVE_NOT_ACTIVE_MOVER = 0x2d1,
        CMSG_MOVE_SET_RAW_POSITION = 0xe1,
        CMSG_MOVE_SPLINE_DONE = 0x2c9,
        CMSG_MOVE_START_SWIM_CHEAT = 0x2d8,
        CMSG_MOVE_STOP_SWIM_CHEAT = 0x2d9,
        CMSG_MOVE_TIME_SKIPPED = 0x2ce,
        CMSG_MOVE_WATER_WALK_ACK = 720,
        CMSG_NAME_QUERY = 80,
        CMSG_NEW_SPELL_SLOT = 0x12d,
        CMSG_NEXT_CINEMATIC_CAMERA = 0xfb,
        CMSG_NPC_TEXT_QUERY = 0x17f,
        CMSG_OFFER_PETITION = 0x1c3,
        CMSG_OPEN_ITEM = 0xac,
        CMSG_OPENING_CINEMATIC = 0xf9,
        CMSG_PAGE_TEXT_QUERY = 90,
        CMSG_PET_ABANDON = 0x176,
        CMSG_PET_ACTION = 0x175,
        CMSG_PET_CANCEL_AURA = 0x26b,
        CMSG_PET_LEVEL_CHEAT = 0x26,
        CMSG_PET_NAME_QUERY = 0x52,
        CMSG_PET_RENAME = 0x177,
        CMSG_PET_SET_ACTION = 0x174,
        CMSG_PET_SPELL_AUTOCAST = 0x2f3,
        CMSG_PET_STOP_ATTACK = 0x2ea,
        CMSG_PET_UNLEARN = 0x2f0,
        CMSG_PETITION_BUY = 0x1bd,
        CMSG_PETITION_QUERY = 0x1c6,
        CMSG_PETITION_SHOW_SIGNATURES = 0x1be,
        CMSG_PETITION_SHOWLIST = 0x1bb,
        CMSG_PETITION_SIGN = 0x1c0,
        CMSG_PICKUP_ITEM = 0x10f,
        CMSG_PING = 0x1dc,
        CMSG_PLAYED_TIME = 460,
        CMSG_PLAYER_AI_CHEAT = 620,
        CMSG_PLAYER_LOGIN = 0x3d,
        CMSG_PLAYER_LOGOUT = 0x4a,
        CMSG_PLAYER_MACRO_OBSOLETE = 0x1e3,
        CMSG_PUSHQUESTTOPARTY = 0x19d,
        CMSG_PVP_PORT_OBSOLETE = 50,
        CMSG_QUERY_OBJECT_POSITION = 4,
        CMSG_QUERY_OBJECT_ROTATION = 6,
        CMSG_QUERY_TIME = 0x1ce,
        CMSG_QUEST_CONFIRM_ACCEPT = 0x19b,
        CMSG_QUEST_QUERY = 0x5c,
        CMSG_QUESTGIVER_ACCEPT_QUEST = 0x189,
        CMSG_QUESTGIVER_CANCEL = 400,
        CMSG_QUESTGIVER_CHOOSE_REWARD = 0x18e,
        CMSG_QUESTGIVER_COMPLETE_QUEST = 0x18a,
        CMSG_QUESTGIVER_HELLO = 0x184,
        CMSG_QUESTGIVER_QUERY_QUEST = 390,
        CMSG_QUESTGIVER_QUEST_AUTOLAUNCH = 0x187,
        CMSG_QUESTGIVER_REQUEST_REWARD = 0x18c,
        CMSG_QUESTGIVER_STATUS_QUERY = 0x182,
        CMSG_QUESTLOG_REMOVE_QUEST = 0x194,
        CMSG_QUESTLOG_SWAP_QUEST = 0x193,
        CMSG_READ_ITEM = 0xad,
        CMSG_RECHARGE = 15,
        CMSG_RECLAIM_CORPSE = 0x1d2,
        CMSG_REPAIR_ITEM = 680,
        CMSG_REPOP_REQUEST = 0x15a,
        CMSG_REQUEST_ACCOUNT_DATA = 0x20a,
        CMSG_REQUEST_PARTY_MEMBER_STATS = 0x27f,
        CMSG_REQUEST_PET_INFO = 0x279,
        CMSG_REQUEST_RAID_INFO = 0x2cd,
        CMSG_RESET_FACTION_CHEAT = 0x281,
        CMSG_RESURRECT_RESPONSE = 0x15c,
        CMSG_RUN_SCRIPT = 0x2b5,
        CMSG_RWHOIS = 0x1fd,
        CMSG_SAVE_PLAYER = 0x153,
        CMSG_SELF_RES = 0x2b3,
        CMSG_SELL_ITEM = 0x1a0,
        CMSG_SEND_EVENT = 0x2d,
        CMSG_SEND_MAIL = 0x238,
        CMSG_SERVER_BROADCAST = 690,
        CMSG_SERVER_COMMAND = 0x227,
        CMSG_SERVERTIME = 0x48,
        CMSG_SET_ACTION_BUTTON = 0x128,
        CMSG_SET_ACTIONBAR_TOGGLES = 0x2bf,
        CMSG_SET_ACTIVE_MOVER = 0x26a,
        CMSG_SET_AMMO = 0x268,
        CMSG_SET_DURABILITY_CHEAT = 0x287,
        CMSG_SET_EXPLORATION = 0x2be,
        CMSG_SET_FACTION_ATWAR = 0x125,
        CMSG_SET_FACTION_CHEAT = 0x126,
        CMSG_SET_LOOKING_FOR_GROUP = 0x200,
        CMSG_SET_PVP_RANK_CHEAT = 0x288,
        CMSG_SET_PVP_TITLE = 0x28b,
        CMSG_SET_SELECTION = 0x13d,
        CMSG_SET_SKILL_CHEAT = 0x1d8,
        CMSG_SET_STAT_CHEAT = 0x21d,
        CMSG_SET_TARGET_OBSOLETE = 0x13e,
        CMSG_SET_TRADE_GOLD = 0x11f,
        CMSG_SET_TRADE_ITEM = 0x11d,
        CMSG_SETDEATHBINDPOINT = 340,
        CMSG_SETSHEATHED = 480,
        CMSG_SHEATHE_OBSOLETE = 0x152,
        CMSG_SKILL_BUY_RANK = 0x220,
        CMSG_SKILL_BUY_STEP = 0x21f,
        CMSG_SPIRIT_HEALER_ACTIVATE = 540,
        CMSG_SPLIT_ITEM = 270,
        CMSG_STABLE_PET = 0x270,
        CMSG_STABLE_REVIVE_PET = 0x274,
        CMSG_STABLE_SWAP_PET = 0x275,
        CMSG_STANDSTATECHANGE = 0x101,
        CMSG_STORE_LOOT_IN_SLOT = 0x109,
        CMSG_SUMMON_RESPONSE = 0x2ac,
        CMSG_SWAP_INV_ITEM = 0x10d,
        CMSG_SWAP_ITEM = 0x10c,
        CMSG_TAXICLEARALLNODES = 0x1a6,
        CMSG_TAXICLEARNODE = 0x241,
        CMSG_TAXIENABLEALLNODES = 0x1a7,
        CMSG_TAXIENABLENODE = 0x242,
        CMSG_TAXINODE_STATUS_QUERY = 0x1aa,
        CMSG_TAXIQUERYAVAILABLENODES = 0x1ac,
        CMSG_TAXISHOWNODES = 0x1a8,
        CMSG_TELEPORT_TO_UNIT = 9,
        CMSG_TEXT_EMOTE = 260,
        CMSG_TOGGLE_CLOAK = 0x2ba,
        CMSG_TOGGLE_HELM = 0x2b9,
        CMSG_TOGGLE_PVP = 0x253,
        CMSG_TRAINER_BUY_SPELL = 0x1b2,
        CMSG_TRAINER_LIST = 0x1b0,
        CMSG_TRIGGER_CINEMATIC_CHEAT = 0xf8,
        CMSG_TURN_IN_PETITION = 0x1c4,
        CMSG_TUTORIAL_CLEAR = 0xff,
        CMSG_TUTORIAL_FLAG = 0xfe,
        CMSG_TUTORIAL_RESET = 0x100,
        CMSG_UNACCEPT_TRADE = 0x11b,
        CMSG_UNDRESSPLAYER = 0x20,
        CMSG_UNEMBLAZON_TABARD_OBSOLETE = 14,
        CMSG_UNLEARN_SKILL = 0x202,
        CMSG_UNLEARN_SPELL = 0x201,
        CMSG_UNLEARN_TALENTS = 0x213,
        CMSG_UNSTABLE_PET = 0x271,
        CMSG_UNUSED = 0x13f,
        CMSG_UNUSED2 = 320,
        CMSG_UPDATE_ACCOUNT_DATA = 0x20b,
        CMSG_USE_ITEM = 0xab,
        CMSG_USE_SKILL_CHEAT = 0x29,
        CMSG_WARDEN_DATA = 0x2e7,
        CMSG_WHO = 0x62,
        CMSG_WHOIS = 100,
        CMSG_WORLD_TELEPORT = 8,
        CMSG_WRAP_ITEM = 0x1d3,
        CMSG_XP_CHEAT = 0x221,
        CMSG_ZONE_MAP = 10,
        CMSG_ZONEUPDATE = 500,
        MSG_ADD_DYNAMIC_TARGET_OBSOLETE = 0x1f0,
        MSG_AUCTION_HELLO = 0x255,
        MSG_BATTLEGROUND_PLAYER_POSITIONS = 0x2e9,
        MSG_CHANNEL_START = 0x139,
        MSG_CHANNEL_UPDATE = 0x13a,
        MSG_CORPSE_QUERY = 0x216,
        MSG_GM_ACCOUNT_ONLINE = 0x26e,
        MSG_GM_BIND_OTHER = 0x1e8,
        MSG_GM_SHOWLABEL = 0x1ef,
        MSG_GM_SUMMON = 0x1e9,
        MSG_INSPECT_HONOR_STATS = 0x2d6,
        MSG_LIST_STABLED_PETS = 0x26f,
        MSG_LOOKING_FOR_GROUP = 0x1ff,
        MSG_MINIMAP_PING = 0x1d5,
        MSG_MOVE_FALL_LAND = 0xc9,
        MSG_MOVE_FEATHER_FALL = 0x2b0,
        MSG_MOVE_HEARTBEAT = 0xee,
        MSG_MOVE_HOVER = 0xf7,
        MSG_MOVE_JUMP = 0xbb,
        MSG_MOVE_KNOCK_BACK = 0xf1,
        MSG_MOVE_ROOT = 0xec,
        MSG_MOVE_SET_ALL_SPEED_CHEAT = 0xd6,
        MSG_MOVE_SET_FACING = 0xda,
        MSG_MOVE_SET_PITCH = 0xdb,
        MSG_MOVE_SET_RAW_POSITION_ACK = 0xe0,
        MSG_MOVE_SET_RUN_BACK_SPEED = 0xcf,
        MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT = 0xce,
        MSG_MOVE_SET_RUN_MODE = 0xc2,
        MSG_MOVE_SET_RUN_SPEED = 0xcd,
        MSG_MOVE_SET_RUN_SPEED_CHEAT = 0xcc,
        MSG_MOVE_SET_SWIM_BACK_SPEED = 0xd5,
        MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT = 0xd4,
        MSG_MOVE_SET_SWIM_SPEED = 0xd3,
        MSG_MOVE_SET_SWIM_SPEED_CHEAT = 210,
        MSG_MOVE_SET_TURN_RATE = 0xd8,
        MSG_MOVE_SET_TURN_RATE_CHEAT = 0xd7,
        MSG_MOVE_SET_WALK_MODE = 0xc3,
        MSG_MOVE_SET_WALK_SPEED = 0xd1,
        MSG_MOVE_SET_WALK_SPEED_CHEAT = 0xd0,
        MSG_MOVE_START_BACKWARD = 0xb6,
        MSG_MOVE_START_FORWARD = 0xb5,
        MSG_MOVE_START_PITCH_DOWN = 0xc0,
        MSG_MOVE_START_PITCH_UP = 0xbf,
        MSG_MOVE_START_STRAFE_LEFT = 0xb8,
        MSG_MOVE_START_STRAFE_RIGHT = 0xb9,
        MSG_MOVE_START_SWIM = 0xca,
        MSG_MOVE_START_TURN_LEFT = 0xbc,
        MSG_MOVE_START_TURN_RIGHT = 0xbd,
        MSG_MOVE_STOP = 0xb7,
        MSG_MOVE_STOP_PITCH = 0xc1,
        MSG_MOVE_STOP_STRAFE = 0xba,
        MSG_MOVE_STOP_SWIM = 0xcb,
        MSG_MOVE_STOP_TURN = 190,
        MSG_MOVE_TELEPORT = 0xc5,
        MSG_MOVE_TELEPORT_ACK = 0xc7,
        MSG_MOVE_TELEPORT_CHEAT = 0xc6,
        MSG_MOVE_TOGGLE_COLLISION_CHEAT = 0xd9,
        MSG_MOVE_TOGGLE_FALL_LOGGING = 200,
        MSG_MOVE_TOGGLE_GRAVITY_CHEAT = 0x2ad,
        MSG_MOVE_TOGGLE_LOGGING = 0xc4,
        MSG_MOVE_UNROOT = 0xed,
        MSG_MOVE_WATER_WALK = 0x2b1,
        MSG_MOVE_WORLDPORT_ACK = 220,
        MSG_NULL_ACTION = 0,
        MSG_PETITION_DECLINE = 450,
        MSG_PETITION_RENAME = 0x2c1,
        MSG_PVP_LOG_DATA = 0x2e0,
        MSG_QUERY_NEXT_MAIL_TIME = 0x284,
        MSG_QUEST_PUSH_RESULT = 630,
        MSG_RAID_ICON_TARGET = 0x321,
        MSG_RAID_READY_CHECK = 0x322,
        MSG_RANDOM_ROLL = 0x1fb,
        MSG_SAVE_GUILD_EMBLEM = 0x1f1,
        MSG_SPLIT_MONEY = 0x1d1,
        MSG_TABARDVENDOR_ACTIVATE = 0x1f2,
        MSG_TALENT_WIPE_CONFIRM = 0x2aa,
        SMSG_ACCOUNT_DATA_MD5 = 0x209,
        SMSG_ACTION_BUTTONS = 0x129,
        SMSG_ACTIVATETAXIREPLY = 430,
        SMSG_ADDON_INFO = 0x2ef,
        SMSG_AI_REACTION = 0x13c,
        SMSG_AREA_SPIRIT_HEALER_TIME = 740,
        SMSG_AREA_TRIGGER_MESSAGE = 0x2b8,
        SMSG_ATTACKERSTATEUPDATE = 330,
        SMSG_ATTACKERSTATEUPDATEDEBUGINFO_OBSOLETE = 0x1c,
        SMSG_ATTACKSTART = 0x143,
        SMSG_ATTACKSTOP = 0x144,
        SMSG_ATTACKSWING_BADFACING = 0x146,
        SMSG_ATTACKSWING_CANT_ATTACK = 0x149,
        SMSG_ATTACKSWING_DEADTARGET = 0x148,
        SMSG_ATTACKSWING_NOTINRANGE = 0x145,
        SMSG_ATTACKSWING_NOTSTANDING = 0x147,
        SMSG_AUCTION_BIDDER_LIST_RESULT = 0x265,
        SMSG_AUCTION_BIDDER_NOTIFICATION = 0x25e,
        SMSG_AUCTION_COMMAND_RESULT = 0x25b,
        SMSG_AUCTION_LIST_RESULT = 0x25c,
        SMSG_AUCTION_OWNER_LIST_RESULT = 0x25d,
        SMSG_AUCTION_OWNER_NOTIFICATION = 0x25f,
        SMSG_AUCTION_REMOVED_NOTIFICATION = 0x28d,
        SMSG_AUTH_CHALLENGE = 0x1ec,
        SMSG_AUTH_RESPONSE = 0x1ee,
        SMSG_AUTH_SRP6_RESPONSE = 0x39,
        SMSG_BATTLEFIELD_LIST = 0x23d,
        SMSG_BATTLEFIELD_LOSE = 0x240,
        SMSG_BATTLEFIELD_STATUS = 0x2d4,
        SMSG_BATTLEFIELD_WIN = 0x23f,
        SMSG_BATTLEGROUND_PLAYER_JOINED = 0x2ec,
        SMSG_BATTLEGROUND_PLAYER_LEFT = 0x2ed,
        SMSG_BINDER_CONFIRM = 0x2eb,
        SMSG_BINDPOINTUPDATE = 0x155,
        SMSG_BINDZONEREPLY = 0x157,
        SMSG_BUY_BANK_SLOT_RESULT = 0x1ba,
        SMSG_BUY_FAILED = 0x1a5,
        SMSG_BUY_ITEM = 420,
        SMSG_CANCEL_AUTO_REPEAT = 0x29c,
        SMSG_CANCEL_COMBAT = 0x14e,
        SMSG_CAST_RESULT = 0x130,
        SMSG_CHANNEL_LIST = 0x9b,
        SMSG_CHANNEL_NOTIFY = 0x99,
        SMSG_CHAR_CREATE = 0x3a,
        SMSG_CHAR_DELETE = 60,
        SMSG_CHAR_ENUM = 0x3b,
        SMSG_CHAR_RENAME = 0x2c8,
        SMSG_CHARACTER_LOGIN_FAILED = 0x41,
        SMSG_CHAT_PLAYER_NOT_FOUND = 0x2a9,
        SMSG_CHAT_WRONG_FACTION = 0x219,
        SMSG_CLEAR_COOLDOWN = 0x1de,
        SMSG_CLEAR_FAR_SIGHT_IMMEDIATE = 0x20d,
        SMSG_COMPRESSED_MOVE = 0x2fb,
        SMSG_COMPRESSED_UPDATE_OBJECT = 0x1f6,
        SMSG_COOLDOWN_CHEAT = 0x1e1,
        SMSG_COOLDOWN_EVENT = 0x135,
        SMSG_CORPSE_RECLAIM_DELAY = 0x269,
        SMSG_CREATURE_QUERY_RESPONSE = 0x61,
        SMSG_DAMAGE_CALC_LOG = 0x27c,
        SMSG_DAMAGE_DONE_OBSOLETE = 0x14c,
        SMSG_DAMAGE_TAKEN_OBSOLETE = 0x14d,
        SMSG_DBLOOKUP = 3,
        SMSG_DEATH_NOTIFY_OBSOLETE = 0x159,
        SMSG_DEBUG_AISTATE = 0x2f,
        SMSG_DEBUG_PLAYER_RANGE_OBSOLETE = 0x1f,
        SMSG_DEBUGAURAPROC = 0x24d,
        SMSG_DEBUGINFOSPELL_OBSOLETE = 0x1d,
        SMSG_DEBUGINFOSPELLMISS_OBSOLETE = 30,
        SMSG_DESTROY_OBJECT = 170,
        SMSG_DISMOUNTRESULT = 0x16f,
        SMSG_DISPEL_FAILED = 610,
        SMSG_DUEL_COMPLETE = 0x16a,
        SMSG_DUEL_COUNTDOWN = 0x2b7,
        SMSG_DUEL_INBOUNDS = 0x169,
        SMSG_DUEL_OUTOFBOUNDS = 360,
        SMSG_DUEL_REQUESTED = 0x167,
        SMSG_DUEL_WINNER = 0x16b,
        SMSG_DURABILITY_DAMAGE_DEATH = 0x2bd,
        SMSG_EMOTE = 0x103,
        SMSG_ENCHANTMENTLOG = 0x1d7,
        SMSG_ENVIRONMENTALDAMAGELOG = 0x1fc,
        SMSG_EXPLORATION_EXPERIENCE = 0x1f8,
        SMSG_FEIGN_DEATH_RESISTED = 0x2b4,
        SMSG_FISH_ESCAPED = 0x1c9,
        SMSG_FISH_NOT_HOOKED = 0x1c8,
        SMSG_FORCE_MOVE_ROOT = 0xe8,
        SMSG_FORCE_MOVE_UNROOT = 0xea,
        SMSG_FORCE_RUN_BACK_SPEED_CHANGE = 0xe4,
        SMSG_FORCE_RUN_SPEED_CHANGE = 0xe2,
        SMSG_FORCE_SWIM_BACK_SPEED_CHANGE = 0x2dc,
        SMSG_FORCE_SWIM_SPEED_CHANGE = 230,
        SMSG_FORCE_TURN_RATE_CHANGE = 0x2de,
        SMSG_FORCE_WALK_SPEED_CHANGE = 730,
        SMSG_FORCEACTIONSHOW = 0x1b,
        SMSG_FRIEND_LIST = 0x67,
        SMSG_FRIEND_STATUS = 0x68,
        SMSG_GAMEOBJECT_CUSTOM_ANIM = 0xb3,
        SMSG_GAMEOBJECT_DESPAWN_ANIM = 0x215,
        SMSG_GAMEOBJECT_PAGETEXT = 0x1df,
        SMSG_GAMEOBJECT_QUERY_RESPONSE = 0x5f,
        SMSG_GAMEOBJECT_RESET_STATE = 0x2a7,
        SMSG_GAMEOBJECT_SPAWN_ANIM = 0x214,
        SMSG_GAMESPEED_SET = 0x47,
        SMSG_GAMETIME_SET = 0x45,
        SMSG_GAMETIME_UPDATE = 0x43,
        SMSG_GM_PLAYER_INFO = 560,
        SMSG_GMTICKET_CREATE = 0x206,
        SMSG_GMTICKET_DELETETICKET = 0x218,
        SMSG_GMTICKET_GETTICKET = 530,
        SMSG_GMTICKET_SYSTEMSTATUS = 0x21b,
        SMSG_GMTICKET_UPDATETEXT = 520,
        SMSG_GODMODE = 0x23,
        SMSG_GOSSIP_COMPLETE = 0x17e,
        SMSG_GOSSIP_MESSAGE = 0x17d,
        SMSG_GOSSIP_POI = 0x224,
        SMSG_GROUP_CANCEL = 0x71,
        SMSG_GROUP_DECLINE = 0x74,
        SMSG_GROUP_DESTROYED = 0x7c,
        SMSG_GROUP_INVITE = 0x6f,
        SMSG_GROUP_JOINED_BATTLEGROUND = 0x2e8,
        SMSG_GROUP_LIST = 0x7d,
        SMSG_GROUP_SET_LEADER = 0x79,
        SMSG_GROUP_UNINVITE = 0x77,
        SMSG_GUILD_COMMAND_RESULT = 0x93,
        SMSG_GUILD_DECLINE = 0x86,
        SMSG_GUILD_EVENT = 0x92,
        SMSG_GUILD_INFO = 0x88,
        SMSG_GUILD_INVITE = 0x83,
        SMSG_GUILD_QUERY_RESPONSE = 0x55,
        SMSG_GUILD_ROSTER = 0x8a,
        SMSG_HARDWARE_SURVEY_REQUEST = 740,
        SMSG_HEALSPELL_ON_PLAYER_OBSOLETE = 0x150,
        SMSG_HEALSPELL_ON_PLAYERS_PET_OBSOLETE = 0x151,
        SMSG_IGNORE_LIST = 0x6b,
        SMSG_INIT_WORLD_STATES = 0x2c2,
        SMSG_INITIAL_SPELLS = 0x12a,
        SMSG_INITIALIZE_FACTIONS = 290,
        SMSG_INSPECT = 0x115,
        SMSG_INSTANCE_SAVE_CREATED = 0x2cb,
        SMSG_INVALID_PROMOTION_CODE = 0x1e7,
        SMSG_INVENTORY_CHANGE_FAILURE = 0x112,
        SMSG_ITEM_COOLDOWN = 0xb0,
        SMSG_ITEM_ENCHANT_TIME_UPDATE = 0x1eb,
        SMSG_ITEM_NAME_QUERY_RESPONSE = 0x2c5,
        SMSG_ITEM_PUSH_RESULT = 0x166,
        SMSG_ITEM_QUERY_MULTIPLE_RESPONSE = 0x59,
        SMSG_ITEM_QUERY_SINGLE_RESPONSE = 0x58,
        SMSG_ITEM_TEXT_QUERY_RESPONSE = 580,
        SMSG_ITEM_TIME_UPDATE = 490,
        SMSG_LEARNED_SPELL = 0x12b,
        SMSG_LEVELUP_INFO = 0x1d4,
        SMSG_LIST_INVENTORY = 0x19f,
        SMSG_LOG_XPGAIN = 0x1d0,
        SMSG_LOGIN_SETTIMESPEED = 0x42,
        SMSG_LOGIN_VERIFY_WORLD = 0x236,
        SMSG_LOGOUT_CANCEL_ACK = 0x4f,
        SMSG_LOGOUT_COMPLETE = 0x4d,
        SMSG_LOGOUT_RESPONSE = 0x4c,
        SMSG_LOOT_ALL_PASSED = 670,
        SMSG_LOOT_CLEAR_MONEY = 0x165,
        SMSG_LOOT_ITEM_NOTIFY = 0x164,
        SMSG_LOOT_MASTER_LIST = 0x2a4,
        SMSG_LOOT_MONEY_NOTIFY = 0x163,
        SMSG_LOOT_RELEASE_RESPONSE = 0x161,
        SMSG_LOOT_REMOVED = 0x162,
        SMSG_LOOT_RESPONSE = 0x160,
        SMSG_LOOT_ROLL = 0x2a2,
        SMSG_LOOT_ROLL_WON = 0x29f,
        SMSG_LOOT_START_ROLL = 0x2a1,
        SMSG_MAIL_LIST_RESULT = 0x23b,
        SMSG_MEETINGSTONE_COMPLETE = 0x297,
        SMSG_MEETINGSTONE_IN_PROGRESS = 0x298,
        SMSG_MEETINGSTONE_JOINFAILED = 0x2bb,
        SMSG_MEETINGSTONE_MEMBER_ADDED = 0x299,
        SMSG_MEETINGSTONE_SETQUEUE = 0x295,
        SMSG_MESSAGECHAT = 150,
        SMSG_MINIGAME_MOVE_FAILED = 0x2f9,
        SMSG_MINIGAME_SETUP = 0x2f6,
        SMSG_MINIGAME_STATE = 0x2f7,
        SMSG_MONSTER_MOVE = 0xdd,
        SMSG_MONSTER_MOVE_TRANSPORT = 0x2ae,
        SMSG_MOUNTRESULT = 0x16e,
        SMSG_MOUNTSPECIAL_ANIM = 370,
        SMSG_MOVE_FEATHER_FALL = 0xf2,
        SMSG_MOVE_KNOCK_BACK = 0xef,
        SMSG_MOVE_LAND_WALK = 0xdf,
        SMSG_MOVE_NORMAL_FALL = 0xf3,
        SMSG_MOVE_SET_HOVER = 0xf4,
        SMSG_MOVE_UNSET_HOVER = 0xf5,
        SMSG_MOVE_WATER_WALK = 0xde,
        SMSG_NAME_QUERY_RESPONSE = 0x51,
        SMSG_NEW_TAXI_PATH = 0x1af,
        SMSG_NEW_WORLD = 0x3e,
        SMSG_NOTIFICATION = 0x1cb,
        SMSG_NPC_TEXT_UPDATE = 0x180,
        SMSG_NPC_WONT_TALK = 0x181,
        SMSG_OBSOLETE = 0x1f7,
        SMSG_OPEN_CONTAINER = 0x113,
        SMSG_OUTDOORPVP_NOTIFY = 0x33b,
        SMSG_PAGE_TEXT_QUERY_RESPONSE = 0x5b,
        SMSG_PARTY_COMMAND_RESULT = 0x7f,
        SMSG_PARTY_MEMBER_STATS = 0x7e,
        SMSG_PARTY_MEMBER_STATS_FULL = 0x2f2,
        SMSG_PARTYKILLLOG = 0x1f5,
        SMSG_PAUSE_MIRROR_TIMER = 0x1da,
        SMSG_PERIODICAURALOG = 590,
        SMSG_PET_ACTION_FEEDBACK = 710,
        SMSG_PET_BROKEN = 0x2af,
        SMSG_PET_CAST_FAILED = 0x138,
        SMSG_PET_MODE = 0x17a,
        SMSG_PET_NAME_INVALID = 0x178,
        SMSG_PET_NAME_QUERY_RESPONSE = 0x53,
        SMSG_PET_SPELLS = 0x179,
        SMSG_PET_TAME_FAILURE = 0x173,
        SMSG_PET_UNLEARN_CONFIRM = 0x2f1,
        SMSG_PETITION_QUERY_RESPONSE = 0x1c7,
        SMSG_PETITION_SHOW_SIGNATURES = 0x1bf,
        SMSG_PETITION_SHOWLIST = 0x1bc,
        SMSG_PETITION_SIGN_RESULTS = 0x1c1,
        SMSG_PLAY_MUSIC = 0x277,
        SMSG_PLAY_OBJECT_SOUND = 0x278,
        SMSG_PLAY_SOUND = 0x2d2,
        SMSG_PLAY_SPELL_VISUAL = 0x1f3,
        SMSG_PLAY_TIME_WARNING = 0x2f5,
        SMSG_PLAYED_TIME = 0x1cd,
        SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE = 0x14f,
        SMSG_PLAYER_MACRO_OBSOLETE = 0x1e4,
        SMSG_PLAYER_SKINNED = 700,
        SMSG_PLAYERBINDERROR = 0x1b6,
        SMSG_PLAYERBOUND = 0x158,
        SMSG_PONG = 0x1dd,
        SMSG_POWERGAINLOG_OBSOLETE = 0x20e,
        SMSG_PROCRESIST = 0x260,
        SMSG_PUREMOUNT_CANCELLED_OBSOLETE = 0x170,
        SMSG_PVP_CREDIT = 0x28c,
        SMSG_QUERY_OBJECT_POSITION = 5,
        SMSG_QUERY_OBJECT_ROTATION = 7,
        SMSG_QUERY_TIME_RESPONSE = 0x1cf,
        SMSG_QUEST_CONFIRM_ACCEPT = 0x19c,
        SMSG_QUEST_QUERY_RESPONSE = 0x5d,
        SMSG_QUESTGIVER_OFFER_REWARD = 0x18d,
        SMSG_QUESTGIVER_QUEST_COMPLETE = 0x191,
        SMSG_QUESTGIVER_QUEST_DETAILS = 0x188,
        SMSG_QUESTGIVER_QUEST_FAILED = 0x192,
        SMSG_QUESTGIVER_QUEST_INVALID = 0x18f,
        SMSG_QUESTGIVER_QUEST_LIST = 0x185,
        SMSG_QUESTGIVER_REQUEST_ITEMS = 0x18b,
        SMSG_QUESTGIVER_STATUS = 0x183,
        SMSG_QUESTLOG_FULL = 0x195,
        SMSG_QUESTUPDATE_ADD_ITEM = 410,
        SMSG_QUESTUPDATE_ADD_KILL = 0x199,
        SMSG_QUESTUPDATE_COMPLETE = 0x198,
        SMSG_QUESTUPDATE_FAILED = 0x196,
        SMSG_QUESTUPDATE_FAILEDTIMER = 0x197,
        SMSG_RAID_GROUP_ONLY = 0x286,
        SMSG_RAID_INSTANCE_INFO = 0x2cc,
        SMSG_READ_ITEM_FAILED = 0xaf,
        SMSG_READ_ITEM_OK = 0xae,
        SMSG_RECEIVED_MAIL = 0x285,
        SMSG_REMOVED_SPELL = 0x203,
        SMSG_RESISTLOG = 470,
        SMSG_RESURRECT_FAILED = 0x252,
        SMSG_RESURRECT_REQUEST = 0x15b,
        SMSG_RWHOIS = 510,
        SMSG_SCRIPT_MESSAGE = 0x2b6,
        SMSG_SELL_ITEM = 0x1a1,
        SMSG_SEND_MAIL_RESULT = 0x239,
        SMSG_SERVER_MESSAGE = 0x291,
        SMSG_SERVERTIME = 0x49,
        SMSG_SET_FACTION_STANDING = 0x124,
        SMSG_SET_FACTION_VISIBLE = 0x123,
        SMSG_SET_FLAT_SPELL_MODIFIER = 0x266,
        SMSG_SET_FORCED_REACTIONS = 0x2a5,
        SMSG_SET_PCT_SPELL_MODIFIER = 0x267,
        SMSG_SET_PROFICIENCY = 0x127,
        SMSG_SET_REST_START = 0x21e,
        SMSG_SHOW_BANK = 440,
        SMSG_SHOWTAXINODES = 0x1a9,
        SMSG_SPELL_COOLDOWN = 0x134,
        SMSG_SPELL_DELAYED = 0x1e2,
        SMSG_SPELL_FAILED_OTHER = 0x2a6,
        SMSG_SPELL_FAILURE = 0x133,
        SMSG_SPELL_GO = 0x132,
        SMSG_SPELL_START = 0x131,
        SMSG_SPELLDAMAGESHIELD = 0x24f,
        SMSG_SPELLDISPELLOG = 0x27b,
        SMSG_SPELLLOGEXECUTE = 0x24c,
        SMSG_SPELLLOGMISS = 0x24b,
        SMSG_SPELLNONMELEEDAMAGELOG = 0x250,
        SMSG_SPELLORDAMAGE_IMMUNE = 0x263,
        SMSG_SPIRIT_HEALER_CONFIRM = 0x222,
        SMSG_STABLE_RESULT = 0x273,
        SMSG_STANDSTATE_CHANGE_ACK = 0x29d,
        SMSG_STANDSTATE_CHANGE_FAILURE = 0x261,
        SMSG_START_MIRROR_TIMER = 0x1d9,
        SMSG_STOP_MIRROR_TIMER = 0x1db,
        SMSG_SUMMON_REQUEST = 0x2ab,
        SMSG_SUPERCEDED_SPELL = 300,
        SMSG_TAXINODE_STATUS = 0x1ab,
        SMSG_TEXT_EMOTE = 0x105,
        SMSG_TRADE_STATUS = 0x120,
        SMSG_TRADE_STATUS_EXTENDED = 0x121,
        SMSG_TRAINER_BUY_FAILED = 0x1b4,
        SMSG_TRAINER_BUY_SUCCEEDED = 0x1b3,
        SMSG_TRAINER_LIST = 0x1b1,
        SMSG_TRANSFER_ABORTED = 0x40,
        SMSG_TRANSFER_PENDING = 0x3f,
        SMSG_TRIGGER_CINEMATIC = 250,
        SMSG_TURN_IN_PETITION_RESULTS = 0x1c5,
        SMSG_TUTORIAL_FLAGS = 0xfd,
        SMSG_UNKNOWN_INFO = 0x2fe,
        SMSG_UPDATE_ACCOUNT_DATA = 0x20c,
        SMSG_UPDATE_AURA_DURATION = 0x137,
        SMSG_UPDATE_OBJECT = 0xa9,
        SMSG_UPDATE_WORLD_STATE = 0x2c3,
        SMSG_VICTIMSTATEUPDATE_OBSOLETE = 0x14b,
        SMSG_WARDEN_DATA = 0x2e6,
        SMSG_WEATHER = 0x2f4,
        SMSG_WHO = 0x63,
        SMSG_WHOIS = 0x65,
        SMSG_ZONE_MAP = 11,
        SMSG_ZONE_UNDER_ATTACK = 0x254,
        UMSG_DELETE_GUILD_CHARTER = 0x2c0,
        UMSG_UPDATE_GROUP_MEMBERS = 0x80,
        UMSG_UPDATE_GUILD = 0x94
    }
}

