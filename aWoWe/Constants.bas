Attribute VB_Name = "Constants"
Option Explicit

'RealmServ Error Codes
    Global Const rserr_no_error = &H0
    Global Const rserr_account_closed = &H3
    Global Const rserr_bad_user = &H4
    Global Const rserr_bad_pass = &H5
    Global Const rserr_account_already_logged = &H6
    Global Const rserr_prepaid_time_used_up = &H7
    Global Const rserr_could_not_log_in_try_again_later = &H8
    Global Const rserr_bad_client_version = &H9
    
'CharCreate Error Codes
    Global Const ccerr_no_error = &H2D 'Successful account creation, client sends CMSG_CHAR_ENUM
    Global Const ccerr_error = &H2E 'Error creating character
    Global Const ccerr_creation_failed = &H2F 'Character creation failed
    Global Const ccerr_name_unavailable = &H30 'Name unavailable
    Global Const ccerr_race_or_class_disabled = &H31 'Creation of that race and/or class is currently disabled
    Global Const ccerr_pvp_team = &H32 'All characters on a PvP server must be on the same team
    Global Const ccerr_max_characters = &H33 'Maximum character count for the server exceeded

'WorldServ Error Codes
    'may be for old versions?
    'Global Const wserr_no_error = &HC
    'Global Const wserr_unknown_account = 21
    'Global Const wserr_already_connected = 13

'Equipped inventory slots (aka displayid, or inventorytype in Wowemu):
    'Left SIDE
    Global Const eqinvs_Head = 0
    Global Const eqinvs_Neck = 1
    Global Const eqinvs_Shoulders = 2
    Global Const eqinvs_Back = 14
    Global Const eqinvs_Chest = 4
    Global Const eqinvs_Shirt = 3
    Global Const eqinvs_Tabard = 18
    Global Const eqinvs_Wrists = 8
    'Right SIDE
    Global Const eqinvs_Hands = 9
    Global Const eqinvs_Waist = 5
    Global Const eqinvs_Legs = 6
    Global Const eqinvs_Feet = 7
    Global Const eqinvs_Finger_a = 10
    Global Const eqinvs_Finger_b = 11
    Global Const eqinvs_Trinket_a = 12
    Global Const eqinvs_Trinket_b = 13
    'WIELDED
    Global Const eqinvs_Mainhand = 15
    Global Const eqinvs_Offhand = 16
    Global Const eqinvs_Ranged = 17


'Realm Server Opcodes

    Global Const RS_LOGON_CHALLENGE = &H0
    Global Const RS_LOGON_PROOF = &H1
    Global Const RS_RECONNECT_CHALLENGE = &H2
    Global Const RS_RECONNECT_PROOF = &H3
    Global Const RS_UPDATESRV = &H4
    Global Const RS_REALMLIST = &H10


'World Server Opcodes

Global Const MSG_NULL_ACTION = &H0
Global Const CMSG_BOOTME = &H1
Global Const CMSG_DBLOOKUP = &H2
Global Const SMSG_DBLOOKUP = &H3
Global Const CMSG_QUERY_OBJECT_POSITION = &H4
Global Const SMSG_QUERY_OBJECT_POSITION = &H5
Global Const CMSG_QUERY_OBJECT_ROTATION = &H6
Global Const SMSG_QUERY_OBJECT_ROTATION = &H7
Global Const CMSG_WORLD_TELEPORT = &H8
Global Const CMSG_TELEPORT_TO_UNIT = &H9
Global Const CMSG_ZONE_MAP = &HA
Global Const SMSG_ZONE_MAP = &HB
Global Const CMSG_DEBUG_CHANGECELLZONE = &HC
Global Const CMSG_EMBLAZON_TABARD_OBSOLETE = &HD
Global Const CMSG_UNEMBLAZON_TABARD_OBSOLETE = &HE
Global Const CMSG_RECHARGE = &HF
Global Const CMSG_LEARN_SPELL = &H10
Global Const CMSG_CREATEMONSTER = &H11
Global Const CMSG_DESTROYMONSTER = &H12
Global Const CMSG_CREATEITEM = &H13
Global Const CMSG_CREATEGAMEOBJECT = &H14
Global Const CMSG_MAKEMONSTERATTACKME = &H15
Global Const CMSG_MAKEMONSTERATTACKGUID = &H16
Global Const CMSG_ENABLEDEBUGCOMBATLOGGING_OBSOLETE = &H17
Global Const CMSG_FORCEACTION = &H18
Global Const CMSG_FORCEACTIONONOTHER = &H19
Global Const CMSG_FORCEACTIONSHOW = &H1A
Global Const SMSG_FORCEACTIONSHOW = &H1B
Global Const SMSG_ATTACKERSTATEUPDATEDEBUGINFO_OBSOLETE = &H1C
Global Const SMSG_DEBUGINFOSPELL_OBSOLETE = &H1D
Global Const SMSG_DEBUGINFOSPELLMISS_OBSOLETE = &H1E
Global Const SMSG_DEBUG_PLAYER_RANGE_OBSOLETE = &H1F
Global Const CMSG_UNDRESSPLAYER = &H20
Global Const CMSG_BEASTMASTER = &H21
Global Const CMSG_GODMODE = &H22
Global Const SMSG_GODMODE = &H23
Global Const CMSG_CHEAT_SETMONEY = &H24
Global Const CMSG_LEVEL_CHEAT = &H25
Global Const CMSG_PET_LEVEL_CHEAT = &H26
Global Const CMSG_LEVELUP_CHEAT_OBSOLETE = &H27
Global Const CMSG_COOLDOWN_CHEAT = &H28
Global Const CMSG_USE_SKILL_CHEAT = &H29
Global Const CMSG_FLAG_QUEST = &H2A
Global Const CMSG_FLAG_QUEST_FINISH = &H2B
Global Const CMSG_CLEAR_QUEST = &H2C
Global Const CMSG_SEND_EVENT = &H2D
Global Const CMSG_DEBUG_AISTATE = &H2E
Global Const SMSG_DEBUG_AISTATE = &H2F
Global Const CMSG_DISABLE_PVP_CHEAT = &H30
Global Const CMSG_ADVANCE_SPAWN_TIME = &H31
Global Const CMSG_PVP_PORT_OBSOLETE = &H32
Global Const CMSG_AUTH_SRP6_BEGIN = &H33
Global Const CMSG_AUTH_SRP6_PROOF = &H34
Global Const CMSG_AUTH_SRP6_RECODE = &H35
Global Const CMSG_CHAR_CREATE = &H36
Global Const CMSG_CHAR_ENUM = &H37
Global Const CMSG_CHAR_DELETE = &H38
Global Const SMSG_AUTH_SRP6_RESPONSE = &H39
Global Const SMSG_CHAR_CREATE = &H3A
Global Const SMSG_CHAR_ENUM = &H3B
Global Const SMSG_CHAR_DELETE = &H3C
Global Const CMSG_PLAYER_LOGIN = &H3D
Global Const SMSG_NEW_WORLD = &H3E
Global Const SMSG_TRANSFER_PENDING = &H3F
Global Const SMSG_TRANSFER_ABORTED = &H40
Global Const SMSG_CHARACTER_LOGIN_FAILED = &H41
Global Const SMSG_LOGIN_SETTIMESPEED = &H42
Global Const SMSG_GAMETIME_UPDATE = &H43
Global Const CMSG_GAMETIME_SET = &H44
Global Const SMSG_GAMETIME_SET = &H45
Global Const CMSG_GAMESPEED_SET = &H46
Global Const SMSG_GAMESPEED_SET = &H47
Global Const CMSG_SERVERTIME = &H48
Global Const SMSG_SERVERTIME = &H49
Global Const CMSG_PLAYER_LOGOUT = &H4A
Global Const CMSG_LOGOUT_REQUEST = &H4B
Global Const SMSG_LOGOUT_RESPONSE = &H4C
Global Const SMSG_LOGOUT_COMPLETE = &H4D
Global Const CMSG_LOGOUT_CANCEL = &H4E
Global Const SMSG_LOGOUT_CANCEL_ACK = &H4F
Global Const CMSG_NAME_QUERY = &H50
Global Const SMSG_NAME_QUERY_RESPONSE = &H51
Global Const CMSG_PET_NAME_QUERY = &H52
Global Const SMSG_PET_NAME_QUERY_RESPONSE = &H53
Global Const CMSG_GUILD_QUERY = &H54
Global Const SMSG_GUILD_QUERY_RESPONSE = &H55
Global Const CMSG_ITEM_QUERY_SINGLE = &H56
Global Const CMSG_ITEM_QUERY_MULTIPLE = &H57
Global Const SMSG_ITEM_QUERY_SINGLE_RESPONSE = &H58
Global Const SMSG_ITEM_QUERY_MULTIPLE_RESPONSE = &H59
Global Const CMSG_PAGE_TEXT_QUERY = &H5A
Global Const SMSG_PAGE_TEXT_QUERY_RESPONSE = &H5B
Global Const CMSG_QUEST_QUERY = &H5C
Global Const SMSG_QUEST_QUERY_RESPONSE = &H5D
Global Const CMSG_GAMEOBJECT_QUERY = &H5E
Global Const SMSG_GAMEOBJECT_QUERY_RESPONSE = &H5F
Global Const CMSG_CREATURE_QUERY = &H60
Global Const SMSG_CREATURE_QUERY_RESPONSE = &H61
Global Const CMSG_WHO = &H62
Global Const SMSG_WHO = &H63
Global Const CMSG_WHOIS = &H64
Global Const SMSG_WHOIS = &H65
Global Const CMSG_FRIEND_LIST = &H66
Global Const SMSG_FRIEND_LIST = &H67
Global Const SMSG_FRIEND_STATUS = &H68
Global Const CMSG_ADD_FRIEND = &H69
Global Const CMSG_DEL_FRIEND = &H6A
Global Const SMSG_IGNORE_LIST = &H6B
Global Const CMSG_ADD_IGNORE = &H6C
Global Const CMSG_DEL_IGNORE = &H6D
Global Const CMSG_GROUP_INVITE = &H6E
Global Const SMSG_GROUP_INVITE = &H6F
Global Const CMSG_GROUP_CANCEL = &H70
Global Const SMSG_GROUP_CANCEL = &H71
Global Const CMSG_GROUP_ACCEPT = &H72
Global Const CMSG_GROUP_DECLINE = &H73
Global Const SMSG_GROUP_DECLINE = &H74
Global Const CMSG_GROUP_UNINVITE = &H75
Global Const CMSG_GROUP_UNINVITE_GUID = &H76
Global Const SMSG_GROUP_UNINVITE = &H77
Global Const CMSG_GROUP_SET_LEADER = &H78
Global Const SMSG_GROUP_SET_LEADER = &H79
Global Const CMSG_LOOT_METHOD = &H7A
Global Const CMSG_GROUP_DISBAND = &H7B
Global Const SMSG_GROUP_DESTROYED = &H7C
Global Const SMSG_GROUP_LIST = &H7D
Global Const SMSG_PARTY_MEMBER_STATS = &H7E
Global Const SMSG_PARTY_COMMAND_RESULT = &H7F
Global Const UMSG_UPDATE_GROUP_MEMBERS = &H80
Global Const CMSG_GUILD_CREATE = &H81
Global Const CMSG_GUILD_INVITE = &H82
Global Const SMSG_GUILD_INVITE = &H83
Global Const CMSG_GUILD_ACCEPT = &H84
Global Const CMSG_GUILD_DECLINE = &H85
Global Const SMSG_GUILD_DECLINE = &H86
Global Const CMSG_GUILD_INFO = &H87
Global Const SMSG_GUILD_INFO = &H88
Global Const CMSG_GUILD_ROSTER = &H89
Global Const SMSG_GUILD_ROSTER = &H8A
Global Const CMSG_GUILD_PROMOTE = &H8B
Global Const CMSG_GUILD_DEMOTE = &H8C
Global Const CMSG_GUILD_LEAVE = &H8D
Global Const CMSG_GUILD_REMOVE = &H8E
Global Const CMSG_GUILD_DISBAND = &H8F
Global Const CMSG_GUILD_LEADER = &H90
Global Const CMSG_GUILD_MOTD = &H91
Global Const SMSG_GUILD_EVENT = &H92
Global Const SMSG_GUILD_COMMAND_RESULT = &H93
Global Const UMSG_UPDATE_GUILD = &H94
Global Const CMSG_MESSAGECHAT = &H95
Global Const SMSG_MESSAGECHAT = &H96
Global Const CMSG_JOIN_CHANNEL = &H97
Global Const CMSG_LEAVE_CHANNEL = &H98
Global Const SMSG_CHANNEL_NOTIFY = &H99
Global Const CMSG_CHANNEL_LIST = &H9A
Global Const SMSG_CHANNEL_LIST = &H9B
Global Const CMSG_CHANNEL_PASSWORD = &H9C
Global Const CMSG_CHANNEL_SET_OWNER = &H9D
Global Const CMSG_CHANNEL_OWNER = &H9E
Global Const CMSG_CHANNEL_MODERATOR = &H9F
Global Const CMSG_CHANNEL_UNMODERATOR = &HA0
Global Const CMSG_CHANNEL_MUTE = &HA1
Global Const CMSG_CHANNEL_UNMUTE = &HA2
Global Const CMSG_CHANNEL_INVITE = &HA3
Global Const CMSG_CHANNEL_KICK = &HA4
Global Const CMSG_CHANNEL_BAN = &HA5
Global Const CMSG_CHANNEL_UNBAN = &HA6
Global Const CMSG_CHANNEL_ANNOUNCEMENTS = &HA7
Global Const CMSG_CHANNEL_MODERATE = &HA8
Global Const SMSG_UPDATE_OBJECT = &HA9
Global Const SMSG_DESTROY_OBJECT = &HAA
Global Const CMSG_USE_ITEM = &HAB
Global Const CMSG_OPEN_ITEM = &HAC
Global Const CMSG_READ_ITEM = &HAD
Global Const SMSG_READ_ITEM_OK = &HAE
Global Const SMSG_READ_ITEM_FAILED = &HAF
Global Const SMSG_ITEM_COOLDOWN = &HB0
Global Const CMSG_GAMEOBJ_USE = &HB1
Global Const CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE = &HB2
Global Const SMSG_GAMEOBJECT_CUSTOM_ANIM = &HB3
Global Const CMSG_AREATRIGGER = &HB4
Global Const MSG_MOVE_START_FORWARD = &HB5
Global Const MSG_MOVE_START_BACKWARD = &HB6
Global Const MSG_MOVE_STOP = &HB7
Global Const MSG_MOVE_START_STRAFE_LEFT = &HB8
Global Const MSG_MOVE_START_STRAFE_RIGHT = &HB9
Global Const MSG_MOVE_STOP_STRAFE = &HBA
Global Const MSG_MOVE_JUMP = &HBB
Global Const MSG_MOVE_START_TURN_LEFT = &HBC
Global Const MSG_MOVE_START_TURN_RIGHT = &HBD
Global Const MSG_MOVE_STOP_TURN = &HBE
Global Const MSG_MOVE_START_PITCH_UP = &HBF
Global Const MSG_MOVE_START_PITCH_DOWN = &HC0
Global Const MSG_MOVE_STOP_PITCH = &HC1
Global Const MSG_MOVE_SET_RUN_MODE = &HC2
Global Const MSG_MOVE_SET_WALK_MODE = &HC3
Global Const MSG_MOVE_TOGGLE_LOGGING = &HC4
Global Const MSG_MOVE_TELEPORT = &HC5
Global Const MSG_MOVE_TELEPORT_CHEAT = &HC6
Global Const MSG_MOVE_TELEPORT_ACK = &HC7
Global Const MSG_MOVE_TOGGLE_FALL_LOGGING = &HC8
Global Const MSG_MOVE_FALL_LAND = &HC9
Global Const MSG_MOVE_START_SWIM = &HCA
Global Const MSG_MOVE_STOP_SWIM = &HCB
Global Const MSG_MOVE_SET_RUN_SPEED_CHEAT = &HCC
Global Const MSG_MOVE_SET_RUN_SPEED = &HCD
Global Const MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT = &HCE
Global Const MSG_MOVE_SET_RUN_BACK_SPEED = &HCF
Global Const MSG_MOVE_SET_WALK_SPEED_CHEAT = &HD0
Global Const MSG_MOVE_SET_WALK_SPEED = &HD1
Global Const MSG_MOVE_SET_SWIM_SPEED_CHEAT = &HD2
Global Const MSG_MOVE_SET_SWIM_SPEED = &HD3
Global Const MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT = &HD4
Global Const MSG_MOVE_SET_SWIM_BACK_SPEED = &HD5
Global Const MSG_MOVE_SET_ALL_SPEED_CHEAT = &HD6
Global Const MSG_MOVE_SET_TURN_RATE_CHEAT = &HD7
Global Const MSG_MOVE_SET_TURN_RATE = &HD8
Global Const MSG_MOVE_TOGGLE_COLLISION_CHEAT = &HD9
Global Const MSG_MOVE_SET_FACING = &HDA
Global Const MSG_MOVE_SET_PITCH = &HDB
Global Const MSG_MOVE_WORLDPORT_ACK = &HDC
Global Const SMSG_MONSTER_MOVE = &HDD
Global Const SMSG_MOVE_WATER_WALK = &HDE
Global Const SMSG_MOVE_LAND_WALK = &HDF
Global Const MSG_MOVE_SET_RAW_POSITION_ACK = &HE0
Global Const CMSG_MOVE_SET_RAW_POSITION = &HE1
Global Const SMSG_FORCE_RUN_SPEED_CHANGE = &HE2
Global Const CMSG_FORCE_RUN_SPEED_CHANGE_ACK = &HE3
Global Const SMSG_FORCE_RUN_BACK_SPEED_CHANGE = &HE4
Global Const CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK = &HE5
Global Const SMSG_FORCE_SWIM_SPEED_CHANGE = &HE6
Global Const CMSG_FORCE_SWIM_SPEED_CHANGE_ACK = &HE7
Global Const SMSG_FORCE_MOVE_ROOT = &HE8
Global Const CMSG_FORCE_MOVE_ROOT_ACK = &HE9
Global Const SMSG_FORCE_MOVE_UNROOT = &HEA
Global Const CMSG_FORCE_MOVE_UNROOT_ACK = &HEB
Global Const MSG_MOVE_ROOT = &HEC
Global Const MSG_MOVE_UNROOT = &HED
Global Const MSG_MOVE_HEARTBEAT = &HEE
Global Const SMSG_MOVE_KNOCK_BACK = &HEF
Global Const CMSG_MOVE_KNOCK_BACK_ACK = &HF0
Global Const MSG_MOVE_KNOCK_BACK = &HF1
Global Const SMSG_MOVE_FEATHER_FALL = &HF2
Global Const SMSG_MOVE_NORMAL_FALL = &HF3
Global Const SMSG_MOVE_SET_HOVER = &HF4
Global Const SMSG_MOVE_UNSET_HOVER = &HF5
Global Const CMSG_MOVE_HOVER_ACK = &HF6
Global Const MSG_MOVE_HOVER = &HF7
Global Const CMSG_TRIGGER_CINEMATIC_CHEAT = &HF8
Global Const CMSG_OPENING_CINEMATIC = &HF9
Global Const SMSG_TRIGGER_CINEMATIC = &HFA
Global Const CMSG_NEXT_CINEMATIC_CAMERA = &HFB
Global Const CMSG_COMPLETE_CINEMATIC = &HFC
Global Const SMSG_TUTORIAL_FLAGS = &HFD
Global Const CMSG_TUTORIAL_FLAG = &HFE
Global Const CMSG_TUTORIAL_CLEAR = &HFF
Global Const CMSG_TUTORIAL_RESET = &H100
Global Const CMSG_STANDSTATECHANGE = &H101
Global Const CMSG_EMOTE = &H102
Global Const SMSG_EMOTE = &H103
Global Const CMSG_TEXT_EMOTE = &H104
Global Const SMSG_TEXT_EMOTE = &H105
Global Const CMSG_AUTOEQUIP_GROUND_ITEM = &H106
Global Const CMSG_AUTOSTORE_GROUND_ITEM = &H107
Global Const CMSG_AUTOSTORE_LOOT_ITEM = &H108
Global Const CMSG_STORE_LOOT_IN_SLOT = &H109
Global Const CMSG_AUTOEQUIP_ITEM = &H10A
Global Const CMSG_AUTOSTORE_BAG_ITEM = &H10B
Global Const CMSG_SWAP_ITEM = &H10C
Global Const CMSG_SWAP_INV_ITEM = &H10D
Global Const CMSG_SPLIT_ITEM = &H10E
Global Const CMSG_PICKUP_ITEM = &H10F
Global Const CMSG_DROP_ITEM = &H110
Global Const CMSG_DESTROYITEM = &H111
Global Const SMSG_INVENTORY_CHANGE_FAILURE = &H112
Global Const SMSG_OPEN_CONTAINER = &H113
Global Const CMSG_INSPECT = &H114
Global Const SMSG_INSPECT = &H115
Global Const CMSG_INITIATE_TRADE = &H116
Global Const CMSG_BEGIN_TRADE = &H117
Global Const CMSG_BUSY_TRADE = &H118
Global Const CMSG_IGNORE_TRADE = &H119
Global Const CMSG_ACCEPT_TRADE = &H11A
Global Const CMSG_UNACCEPT_TRADE = &H11B
Global Const CMSG_CANCEL_TRADE = &H11C
Global Const CMSG_SET_TRADE_ITEM = &H11D
Global Const CMSG_CLEAR_TRADE_ITEM = &H11E
Global Const CMSG_SET_TRADE_GOLD = &H11F
Global Const SMSG_TRADE_STATUS = &H120
Global Const SMSG_TRADE_STATUS_EXTENDED = &H121
Global Const SMSG_INITIALIZE_FACTIONS = &H122
Global Const SMSG_SET_FACTION_VISIBLE = &H123
Global Const SMSG_SET_FACTION_STANDING = &H124
Global Const CMSG_SET_FACTION_ATWAR = &H125
Global Const CMSG_SET_FACTION_CHEAT = &H126
Global Const SMSG_SET_PROFICIENCY = &H127
Global Const CMSG_SET_ACTION_BUTTON = &H128
Global Const SMSG_ACTION_BUTTONS = &H129
Global Const SMSG_INITIAL_SPELLS = &H12A
Global Const SMSG_LEARNED_SPELL = &H12B
Global Const SMSG_SUPERCEDED_SPELL = &H12C
Global Const CMSG_NEW_SPELL_SLOT = &H12D
Global Const CMSG_CAST_SPELL = &H12E
Global Const CMSG_CANCEL_CAST = &H12F
Global Const SMSG_CAST_RESULT = &H130
Global Const SMSG_SPELL_START = &H131
Global Const SMSG_SPELL_GO = &H132
Global Const SMSG_SPELL_FAILURE = &H133
Global Const SMSG_SPELL_COOLDOWN = &H134
Global Const SMSG_COOLDOWN_EVENT = &H135
Global Const CMSG_CANCEL_AURA = &H136
Global Const SMSG_UPDATE_AURA_DURATION = &H137
Global Const SMSG_PET_CAST_FAILED = &H138
Global Const MSG_CHANNEL_START = &H139
Global Const MSG_CHANNEL_UPDATE = &H13A
Global Const CMSG_CANCEL_CHANNELLING = &H13B
Global Const SMSG_AI_REACTION = &H13C
Global Const CMSG_SET_SELECTION = &H13D
Global Const CMSG_SET_TARGET = &H13E
Global Const CMSG_UNUSED = &H13F
Global Const CMSG_UNUSED2 = &H140
Global Const CMSG_ATTACKSWING = &H141
Global Const CMSG_ATTACKSTOP = &H142
Global Const SMSG_ATTACKSTART = &H143
Global Const SMSG_ATTACKSTOP = &H144
Global Const SMSG_ATTACKSWING_NOTINRANGE = &H145
Global Const SMSG_ATTACKSWING_BADFACING = &H146
Global Const SMSG_ATTACKSWING_NOTSTANDING = &H147
Global Const SMSG_ATTACKSWING_DEADTARGET = &H148
Global Const SMSG_ATTACKSWING_CANT_ATTACK = &H149
Global Const SMSG_ATTACKERSTATEUPDATE = &H14A
Global Const SMSG_VICTIMSTATEUPDATE_OBSOLETE = &H14B
Global Const SMSG_DAMAGE_DONE_OBSOLETE = &H14C
Global Const SMSG_DAMAGE_TAKEN_OBSOLETE = &H14D
Global Const SMSG_CANCEL_COMBAT = &H14E
Global Const SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE = &H14F
Global Const SMSG_HEALSPELL_ON_PLAYER_OBSOLETE = &H150
Global Const SMSG_HEALSPELL_ON_PLAYERS_PET_OBSOLETE = &H151
Global Const CMSG_SHEATHE_OBSOLETE = &H152
Global Const CMSG_SAVE_PLAYER = &H153
Global Const CMSG_SETDEATHBINDPOINT = &H154
Global Const SMSG_BINDPOINTUPDATE = &H155
Global Const CMSG_GETDEATHBINDZONE = &H156
Global Const SMSG_BINDZONEREPLY = &H157
Global Const SMSG_PLAYERBOUND = &H158
Global Const SMSG_DEATH_NOTIFY_OBSOLETE = &H159
Global Const CMSG_REPOP_REQUEST = &H15A
Global Const SMSG_RESURRECT_REQUEST = &H15B
Global Const CMSG_RESURRECT_RESPONSE = &H15C
Global Const CMSG_LOOT = &H15D
Global Const CMSG_LOOT_MONEY = &H15E
Global Const CMSG_LOOT_RELEASE = &H15F
Global Const SMSG_LOOT_RESPONSE = &H160
Global Const SMSG_LOOT_RELEASE_RESPONSE = &H161
Global Const SMSG_LOOT_REMOVED = &H162
Global Const SMSG_LOOT_MONEY_NOTIFY = &H163
Global Const SMSG_LOOT_ITEM_NOTIFY = &H164
Global Const SMSG_LOOT_CLEAR_MONEY = &H165
Global Const SMSG_ITEM_PUSH_RESULT = &H166
Global Const SMSG_DUEL_REQUESTED = &H167
Global Const SMSG_DUEL_OUTOFBOUNDS = &H168
Global Const SMSG_DUEL_INBOUNDS = &H169
Global Const SMSG_DUEL_COMPLETE = &H16A
Global Const SMSG_DUEL_WINNER = &H16B
Global Const CMSG_DUEL_ACCEPTED = &H16C
Global Const CMSG_DUEL_CANCELLED = &H16D
Global Const SMSG_MOUNTRESULT = &H16E
Global Const SMSG_DISMOUNTRESULT = &H16F
Global Const SMSG_PUREMOUNT_CANCELLED_OBSOLETE = &H170
Global Const CMSG_MOUNTSPECIAL_ANIM = &H171
Global Const SMSG_MOUNTSPECIAL_ANIM = &H172
Global Const SMSG_PET_TAME_FAILURE = &H173
Global Const CMSG_PET_SET_ACTION = &H174
Global Const CMSG_PET_ACTION = &H175
Global Const CMSG_PET_ABANDON = &H176
Global Const CMSG_PET_RENAME = &H177
Global Const SMSG_PET_NAME_INVALID = &H178
Global Const SMSG_PET_SPELLS = &H179
Global Const CMSG_PET_CAST_SPELL_OBSOLETE = &H17A
Global Const CMSG_GOSSIP_HELLO = &H17B
Global Const CMSG_GOSSIP_SELECT_OPTION = &H17C
Global Const SMSG_GOSSIP_MESSAGE = &H17D
Global Const SMSG_GOSSIP_COMPLETE = &H17E
Global Const CMSG_NPC_TEXT_QUERY = &H17F
Global Const SMSG_NPC_TEXT_UPDATE = &H180
Global Const SMSG_NPC_WONT_TALK = &H181
Global Const CMSG_QUESTGIVER_STATUS_QUERY = &H182
Global Const SMSG_QUESTGIVER_STATUS = &H183
Global Const CMSG_QUESTGIVER_HELLO = &H184
Global Const SMSG_QUESTGIVER_QUEST_LIST = &H185
Global Const CMSG_QUESTGIVER_QUERY_QUEST = &H186
Global Const CMSG_QUESTGIVER_QUEST_AUTOLAUNCH = &H187
Global Const SMSG_QUESTGIVER_QUEST_DETAILS = &H188
Global Const CMSG_QUESTGIVER_ACCEPT_QUEST = &H189
Global Const CMSG_QUESTGIVER_COMPLETE_QUEST = &H18A
Global Const SMSG_QUESTGIVER_REQUEST_ITEMS = &H18B
Global Const CMSG_QUESTGIVER_REQUEST_REWARD = &H18C
Global Const SMSG_QUESTGIVER_OFFER_REWARD = &H18D
Global Const CMSG_QUESTGIVER_CHOOSE_REWARD = &H18E
Global Const SMSG_QUESTGIVER_QUEST_INVALID = &H18F
Global Const CMSG_QUESTGIVER_CANCEL = &H190
Global Const SMSG_QUESTGIVER_QUEST_COMPLETE = &H191
Global Const SMSG_QUESTGIVER_QUEST_FAILED = &H192
Global Const CMSG_QUESTLOG_SWAP_QUEST = &H193
Global Const CMSG_QUESTLOG_REMOVE_QUEST = &H194
Global Const SMSG_QUESTLOG_FULL = &H195
Global Const SMSG_QUESTUPDATE_FAILED = &H196
Global Const SMSG_QUESTUPDATE_FAILEDTIMER = &H197
Global Const SMSG_QUESTUPDATE_COMPLETE = &H198
Global Const SMSG_QUESTUPDATE_ADD_KILL = &H199
Global Const SMSG_QUESTUPDATE_ADD_ITEM = &H19A
Global Const CMSG_QUEST_CONFIRM_ACCEPT = &H19B
Global Const SMSG_QUEST_CONFIRM_ACCEPT = &H19C
Global Const CMSG_PUSHQUESTTOPARTY = &H19D
Global Const CMSG_LIST_INVENTORY = &H19E
Global Const SMSG_LIST_INVENTORY = &H19F
Global Const CMSG_SELL_ITEM = &H1A0
Global Const SMSG_SELL_ITEM = &H1A1
Global Const CMSG_BUY_ITEM = &H1A2
Global Const CMSG_BUY_ITEM_IN_SLOT = &H1A3
Global Const SMSG_BUY_ITEM = &H1A4
Global Const SMSG_BUY_FAILED = &H1A5
Global Const CMSG_TAXICLEARALLNODES = &H1A6
Global Const CMSG_TAXIENABLEALLNODES = &H1A7
Global Const CMSG_TAXISHOWNODES = &H1A8
Global Const SMSG_SHOWTAXINODES = &H1A9
Global Const CMSG_TAXINODE_STATUS_QUERY = &H1AA
Global Const SMSG_TAXINODE_STATUS = &H1AB
Global Const CMSG_TAXIQUERYAVAILABLENODES = &H1AC
Global Const CMSG_ACTIVATETAXI = &H1AD
Global Const SMSG_ACTIVATETAXIREPLY = &H1AE
Global Const SMSG_NEW_TAXI_PATH = &H1AF
Global Const CMSG_TRAINER_LIST = &H1B0
Global Const SMSG_TRAINER_LIST = &H1B1
Global Const CMSG_TRAINER_BUY_SPELL = &H1B2
Global Const SMSG_TRAINER_BUY_SUCCEEDED = &H1B3
Global Const SMSG_TRAINER_BUY_FAILED = &H1B4
Global Const CMSG_BINDER_ACTIVATE = &H1B5
Global Const SMSG_PLAYERBINDERROR = &H1B6
Global Const CMSG_BANKER_ACTIVATE = &H1B7
Global Const SMSG_SHOW_BANK = &H1B8
Global Const CMSG_BUY_BANK_SLOT = &H1B9
Global Const SMSG_BUY_BANK_SLOT_RESULT = &H1BA
Global Const CMSG_PETITION_SHOWLIST = &H1BB
Global Const SMSG_PETITION_SHOWLIST = &H1BC
Global Const CMSG_PETITION_BUY = &H1BD
Global Const CMSG_PETITION_SHOW_SIGNATURES = &H1BE
Global Const SMSG_PETITION_SHOW_SIGNATURES = &H1BF
Global Const CMSG_PETITION_SIGN = &H1C0
Global Const SMSG_PETITION_SIGN_RESULTS = &H1C1
Global Const MSG_PETITION_DECLINE = &H1C2
Global Const CMSG_OFFER_PETITION = &H1C3
Global Const CMSG_TURN_IN_PETITION = &H1C4
Global Const SMSG_TURN_IN_PETITION_RESULTS = &H1C5
Global Const CMSG_PETITION_QUERY = &H1C6
Global Const SMSG_PETITION_QUERY_RESPONSE = &H1C7
Global Const SMSG_FISH_NOT_HOOKED = &H1C8
Global Const SMSG_FISH_ESCAPED = &H1C9
Global Const CMSG_BUG = &H1CA
Global Const SMSG_NOTIFICATION = &H1CB
Global Const CMSG_PLAYED_TIME = &H1CC
Global Const SMSG_PLAYED_TIME = &H1CD
Global Const CMSG_QUERY_TIME = &H1CE
Global Const SMSG_QUERY_TIME_RESPONSE = &H1CF
Global Const SMSG_LOG_XPGAIN = &H1D0
Global Const MSG_SPLIT_MONEY = &H1D1
Global Const CMSG_RECLAIM_CORPSE = &H1D2
Global Const CMSG_WRAP_ITEM = &H1D3
Global Const SMSG_LEVELUP_INFO = &H1D4
Global Const MSG_MINIMAP_PING = &H1D5
Global Const SMSG_RESISTLOG = &H1D6
Global Const SMSG_ENCHANTMENTLOG = &H1D7
Global Const CMSG_SET_SKILL_CHEAT = &H1D8
Global Const SMSG_START_MIRROR_TIMER = &H1D9
Global Const SMSG_PAUSE_MIRROR_TIMER = &H1DA
Global Const SMSG_STOP_MIRROR_TIMER = &H1DB
Global Const CMSG_PING = &H1DC
Global Const SMSG_PONG = &H1DD
Global Const SMSG_CLEAR_COOLDOWN = &H1DE
Global Const SMSG_GAMEOBJECT_PAGETEXT = &H1DF
Global Const CMSG_SETSHEATHED = &H1E0
Global Const SMSG_COOLDOWN_CHEAT = &H1E1
Global Const SMSG_SPELL_DELAYED = &H1E2
Global Const CMSG_PLAYER_MACRO = &H1E3
Global Const SMSG_PLAYER_MACRO = &H1E4
Global Const CMSG_GHOST = &H1E5
Global Const CMSG_GM_INVIS = &H1E6
Global Const CMSG_SCREENSHOT = &H1E7
Global Const MSG_GM_BIND_OTHER = &H1E8
Global Const MSG_GM_SUMMON = &H1E9
Global Const SMSG_ITEM_TIME_UPDATE = &H1EA
Global Const SMSG_ITEM_ENCHANT_TIME_UPDATE = &H1EB
Global Const SMSG_AUTH_CHALLENGE = &H1EC
Global Const CMSG_AUTH_SESSION = &H1ED
Global Const SMSG_AUTH_RESPONSE = &H1EE
Global Const MSG_GM_SHOWLABEL = &H1EF
Global Const MSG_ADD_DYNAMIC_TARGET = &H1F0
Global Const MSG_SAVE_GUILD_EMBLEM = &H1F1
Global Const MSG_TABARDVENDOR_ACTIVATE = &H1F2
Global Const SMSG_PLAY_SPELL_VISUAL = &H1F3
Global Const CMSG_ZONEUPDATE = &H1F4
Global Const SMSG_PARTYKILLLOG = &H1F5
Global Const SMSG_COMPRESSED_UPDATE_OBJECT = &H1F6
Global Const SMSG_OBSOLETE = &H1F7
Global Const SMSG_EXPLORATION_EXPERIENCE = &H1F8
Global Const CMSG_GM_SET_SECURITY_GROUP = &H1F9
Global Const CMSG_GM_NUKE = &H1FA
Global Const MSG_RANDOM_ROLL = &H1FB
Global Const SMSG_ENVIRONMENTALDAMAGELOG = &H1FC
Global Const CMSG_RWHOIS = &H1FD
Global Const SMSG_RWHOIS = &H1FE
Global Const MSG_LOOKING_FOR_GROUP = &H1FF
Global Const CMSG_SET_LOOKING_FOR_GROUP = &H200
Global Const CMSG_UNLEARN_SPELL = &H201
Global Const CMSG_UNLEARN_SKILL = &H202
Global Const SMSG_REMOVED_SPELL = &H203
Global Const CMSG_DECHARGE = &H204
Global Const CMSG_GMTICKET_CREATE = &H205
Global Const SMSG_GMTICKET_CREATE = &H206
Global Const CMSG_GMTICKET_UPDATETEXT = &H207
Global Const SMSG_GMTICKET_UPDATETEXT = &H208
Global Const SMSG_ACCOUNT_DATA_MD5 = &H209
Global Const CMSG_REQUEST_ACCOUNT_DATA = &H20A
Global Const CMSG_UPDATE_ACCOUNT_DATA = &H20B
Global Const SMSG_UPDATE_ACCOUNT_DATA = &H20C
Global Const SMSG_CLEAR_FAR_SIGHT_IMMEDIATE = &H20D
Global Const SMSG_POWERGAINLOG_OBSOLETE = &H20E
Global Const CMSG_GM_TEACH = &H20F
Global Const CMSG_GM_CREATE_ITEM_TARGET = &H210
Global Const CMSG_GMTICKET_GETTICKET = &H211
Global Const SMSG_GMTICKET_GETTICKET = &H212
Global Const CMSG_UNLEARN_TALENTS = &H213
Global Const SMSG_GAMEOBJECT_SPAWN_ANIM = &H214
Global Const SMSG_GAMEOBJECT_DESPAWN_ANIM = &H215
Global Const MSG_CORPSE_QUERY = &H216
Global Const CMSG_GMTICKET_DELETETICKET = &H217
Global Const SMSG_GMTICKET_DELETETICKET = &H218
Global Const SMSG_CHAT_WRONG_FACTION = &H219
Global Const CMSG_GMTICKET_SYSTEMSTATUS = &H21A
Global Const SMSG_GMTICKET_SYSTEMSTATUS = &H21B
Global Const CMSG_SPIRIT_HEALER_ACTIVATE = &H21C
Global Const CMSG_SET_STAT_CHEAT = &H21D
Global Const SMSG_SET_REST_START = &H21E
Global Const CMSG_SKILL_BUY_STEP = &H21F
Global Const CMSG_SKILL_BUY_RANK = &H220
Global Const CMSG_XP_CHEAT = &H221
Global Const SMSG_SPIRIT_HEALER_CONFIRM = &H222
Global Const CMSG_CHARACTER_POINT_CHEAT = &H223
Global Const SMSG_GOSSIP_POI = &H224
Global Const CMSG_CHAT_IGNORED = &H225
Global Const CMSG_GM_VISION = &H226
Global Const CMSG_SERVER_COMMAND = &H227
Global Const CMSG_GM_SILENCE = &H228
Global Const CMSG_GM_REVEALTO = &H229
Global Const CMSG_GM_RESURRECT = &H22A
Global Const CMSG_GM_SUMMONMOB = &H22B
Global Const CMSG_GM_MOVECORPSE = &H22C
Global Const CMSG_GM_FREEZE = &H22D
Global Const CMSG_GM_UBERINVIS = &H22E
Global Const CMSG_GM_REQUEST_PLAYER_INFO = &H22F
Global Const SMSG_GM_PLAYER_INFO = &H230
Global Const CMSG_GUILD_RANK = &H231
Global Const CMSG_GUILD_ADD_RANK = &H232
Global Const CMSG_GUILD_DEL_RANK = &H233
Global Const CMSG_GUILD_SET_PUBLIC_NOTE = &H234
Global Const CMSG_GUILD_SET_OFFICER_NOTE = &H235
Global Const SMSG_LOGIN_VERIFY_WORLD = &H236
Global Const CMSG_CLEAR_EXPLORATION = &H237
Global Const CMSG_SEND_MAIL = &H238
Global Const SMSG_SEND_MAIL_RESULT = &H239
Global Const CMSG_GET_MAIL_LIST = &H23A
Global Const SMSG_MAIL_LIST_RESULT = &H23B
Global Const CMSG_BATTLEFIELD_LIST = &H23C
Global Const SMSG_BATTLEFIELD_LIST = &H23D
Global Const CMSG_BATTLEFIELD_JOIN = &H23E
Global Const SMSG_BATTLEFIELD_WIN = &H23F
Global Const SMSG_BATTLEFIELD_LOSE = &H240
Global Const CMSG_TAXICLEARNODE = &H241
Global Const CMSG_TAXIENABLENODE = &H242
Global Const CMSG_ITEM_TEXT_QUERY = &H243
Global Const SMSG_ITEM_TEXT_QUERY_RESPONSE = &H244
Global Const CMSG_MAIL_TAKE_MONEY = &H245
Global Const CMSG_MAIL_TAKE_ITEM = &H246
Global Const CMSG_MAIL_MARK_AS_READ = &H247
Global Const CMSG_MAIL_RETURN_TO_SENDER = &H248
Global Const CMSG_MAIL_DELETE = &H249
Global Const CMSG_MAIL_CREATE_TEXT_ITEM = &H24A
Global Const SMSG_SPELLLOGMISS = &H24B
Global Const SMSG_SPELLLOGEXECUTE = &H24C
Global Const SMSG_DEBUGAURAPROC = &H24D
Global Const SMSG_PERIODICAURALOG = &H24E
Global Const SMSG_SPELLDAMAGESHIELD = &H24F
Global Const SMSG_SPELLNONMELEEDAMAGELOG = &H250
Global Const CMSG_LEARN_TALENT = &H251
Global Const SMSG_RESURRECT_FAILED = &H252
Global Const CMSG_ENABLE_PVP = &H253
Global Const SMSG_ZONE_UNDER_ATTACK = &H254
Global Const MSG_AUCTION_HELLO = &H255
Global Const CMSG_AUCTION_SELL_ITEM = &H256
Global Const CMSG_AUCTION_REMOVE_ITEM = &H257
Global Const CMSG_AUCTION_LIST_ITEMS = &H258
Global Const CMSG_AUCTION_LIST_OWNER_ITEMS = &H259
Global Const CMSG_AUCTION_PLACE_BID = &H25A
Global Const SMSG_AUCTION_COMMAND_RESULT = &H25B
Global Const SMSG_AUCTION_LIST_RESULT = &H25C
Global Const SMSG_AUCTION_OWNER_LIST_RESULT = &H25D
Global Const SMSG_AUCTION_BIDDER_NOTIFICATION = &H25E
Global Const SMSG_AUCTION_OWNER_NOTIFICATION = &H25F
Global Const SMSG_PROCRESIST = &H260
Global Const SMSG_STANDSTATE_CHANGE_FAILURE = &H261
Global Const SMSG_DISPEL_FAILED = &H262
Global Const SMSG_SPELLORDAMAGE_IMMUNE = &H263
Global Const CMSG_AUCTION_LIST_BIDDER_ITEMS = &H264
Global Const SMSG_AUCTION_BIDDER_LIST_RESULT = &H265
Global Const SMSG_SET_FLAT_SPELL_MODIFIER = &H266
Global Const SMSG_SET_PCT_SPELL_MODIFIER = &H267
Global Const CMSG_SET_AMMO = &H268
Global Const SMSG_CORPSE_RECLAIM_DELAY = &H269
Global Const CMSG_SET_ACTIVE_MOVER = &H26A
Global Const CMSG_PET_CANCEL_AURA = &H26B
Global Const CMSG_PLAYER_AI_CHEAT = &H26C
Global Const CMSG_CANCEL_AUTO_REPEAT_SPELL = &H26D
Global Const MSG_GM_ACCOUNT_ONLINE = &H26E
Global Const MSG_LIST_STABLED_PETS = &H26F
Global Const CMSG_STABLE_PET = &H270
Global Const CMSG_UNSTABLE_PET = &H271
Global Const CMSG_BUY_STABLE_SLOT = &H272
Global Const SMSG_STABLE_RESULT = &H273
Global Const CMSG_STABLE_REVIVE_PET = &H274
Global Const CMSG_STABLE_SWAP_PET = &H275
Global Const MSG_QUEST_PUSH_RESULT = &H276
Global Const SMSG_PLAY_MUSIC = &H277
Global Const SMSG_PLAY_OBJECT_SOUND = &H278
Global Const CMSG_REQUEST_PET_INFO = &H279
Global Const CMSG_FAR_SIGHT = &H27A
Global Const SMSG_SPELLDISPELLOG = &H27B
Global Const SMSG_DAMAGE_CALC_LOG = &H27C
Global Const CMSG_ENABLE_DAMAGE_LOG = &H27D
Global Const CMSG_GROUP_CHANGE_SUB_GROUP = &H27E
Global Const SMSG_RAID_MEMBER_STATS = &H27F
Global Const CMSG_GROUP_SWAP_SUB_GROUP = &H280
Global Const CMSG_RESET_FACTION_CHEAT = &H281
Global Const CMSG_AUTOSTORE_BANK_ITEM = &H282
Global Const CMSG_AUTOBANK_ITEM = &H283
Global Const MSG_QUERY_NEXT_MAIL_TIME = &H284
Global Const SMSG_RECEIVED_MAIL = &H285
Global Const SMSG_RAID_GROUP_ONLY = &H286
Global Const CMSG_SET_DURABILITY_CHEAT = &H287
Global Const CMSG_SET_PVP_RANK_CHEAT = &H288
Global Const CMSG_ADD_PVP_MEDAL_CHEAT = &H289
Global Const CMSG_DEL_PVP_MEDAL_CHEAT = &H28A
Global Const CMSG_SET_PVP_TITLE = &H28B
Global Const SMSG_PVP_CREDIT = &H28C
Global Const SMSG_AUCTION_REMOVED_NOTIFICATION = &H28D
Global Const CMSG_GROUP_RAID_CONVERT = &H28E
Global Const CMSG_GROUP_ASSISTANT_LEADER = &H28F
Global Const CMSG_BUYBACK_ITEM = &H290
Global Const SMSG_SERVER_MESSAGE = &H291
Global Const CMSG_GMTICKETSYSTEM_TOGGLE = &H292
Global Const CMSG_CANCEL_GROWTH_AURA = &H293
Global Const SMSG_CANCEL_AUTO_REPEAT = &H294
Global Const SMSG_STANDSTATE_CHANGE_ACK = &H295
Global Const SMSG_LOOT_ALL_PASSED = &H296
Global Const SMSG_LOOT_ROLL_WON = &H297
Global Const CMSG_LOOT_ROLL = &H298
Global Const SMSG_LOOT_START_ROLL = &H299
Global Const SMSG_LOOT_ROLL = &H29A
Global Const CMSG_LOOT_MASTER_GIVE = &H29B
Global Const SMSG_LOOT_MASTER_LIST = &H29C
Global Const SMSG_SET_FORCED_REACTIONS = &H29D
Global Const SMSG_SPELL_FAILED_OTHER = &H29E
Global Const SMSG_GAMEOBJECT_RESET_STATE = &H29F
Global Const CMSG_REPAIR_ITEM = &H2A0
Global Const SMSG_CHAT_PLAYER_NOT_FOUND = &H2A1
Global Const MSG_TALENT_WIPE_CONFIRM = &H2A2
Global Const SMSG_SUMMON_REQUEST = &H2A3
Global Const CMSG_SUMMON_RESPONSE = &H2A4
Global Const MSG_MOVE_TOGGLE_GRAVITY_CHEAT = &H2A5
Global Const SMSG_MONSTER_MOVE_TRANSPORT = &H2A6
Global Const SMSG_PET_BROKEN = &H2A7
Global Const MSG_MOVE_FEATHER_FALL = &H2A8
Global Const MSG_MOVE_WATER_WALK = &H2A9
Global Const CMSG_SERVER_BROADCAST = &H2AA
Global Const CMSG_SELF_RES = &H2AB
Global Const SMSG_FEIGN_DEATH_RESISTED = &H2AC
Global Const CMSG_RUN_SCRIPT = &H2AD
Global Const SMSG_SCRIPT_MESSAGE = &H2AE
Global Const NUM_MSG_TYPES = &H2AF



Global Const CHAT_MSG_SAY = &H0
Global Const CHAT_MSG_PARTY = &H1
Global Const CHAT_MSG_GUILD = &H2
Global Const CHAT_MSG_OFFICER = &H3
Global Const CHAT_MSG_YELL = &H4
Global Const CHAT_MSG_WHISPER = &H5
Global Const CHAT_MSG_WHISPER_INFORM = &H6
Global Const CHAT_MSG_EMOTE = &H7
Global Const CHAT_MSG_TEXT_EMOTE = &H8
Global Const CHAT_MSG_SYSTEM = &H9
Global Const CHAT_MSG_MONSTER_SAY = &HA
Global Const CHAT_MSG_MONSTER_YELL = &HB
Global Const CHAT_MSG_MONSTER_EMOTE = &HC
Global Const CHAT_MSG_CHANNEL = &HD
Global Const CHAT_MSG_CHANNEL_JOIN = &HE
Global Const CHAT_MSG_CHANNEL_LEAVE = &HF
Global Const CHAT_MSG_CHANNEL_LIST = &H10
Global Const CHAT_MSG_CHANNEL_NOTICE = &H11
Global Const CHAT_MSG_CHANNEL_NOTICE_USER = &H12
Global Const CHAT_MSG_AFK = &H13
Global Const CHAT_MSG_DND = &H14
Global Const CHAT_MSG_COMBAT_LOG = &H15
Global Const CHAT_MSG_IGNORED = &H16
Global Const CHAT_MSG_SKILL = &H17
Global Const CHAT_MSG_LOOT = &H18


Global Const FRIEND_DB_ERROR = &H0
Global Const FRIEND_LIST_FULL = &H1
Global Const FRIEND_ONLINE = &H2
Global Const FRIEND_OFFLINE = &H3
Global Const FRIEND_NOT_FOUND = &H4
Global Const FRIEND_REMOVED = &H5
Global Const FRIEND_ADDED_ONLINE = &H6
Global Const FRIEND_ADDED_OFFLINE = &H7
Global Const FRIEND_ALREADY = &H8
Global Const FRIEND_SELF = &H9
Global Const FRIEND_ENEMY = &HA
Global Const FRIEND_IGNORE_FULL = &HB
Global Const FRIEND_IGNORE_SELF = &HC
Global Const FRIEND_IGNORE_NOT_FOUND = &HD
Global Const FRIEND_IGNORE_ALREADY = &HE
Global Const FRIEND_IGNORE_ADDED = &HF
Global Const FRIEND_IGNORE_REMOVED = &H10

