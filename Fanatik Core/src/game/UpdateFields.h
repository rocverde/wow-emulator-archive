/*
 * Copyright (C) 2005,2006,2007 MaNGOS <http://www.mangosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "Common.h"

#ifndef _UPDATEFIELDS_AUTO_H
#define _UPDATEFIELDS_AUTO_H

enum EObjectFields
{
    OBJECT_FIELD_GUID                             = 0x0000,
    OBJECT_FIELD_TYPE                             = 0x0002,
    OBJECT_FIELD_ENTRY                            = 0x0003,
    OBJECT_FIELD_SCALE_X                          = 0x0004,
    OBJECT_FIELD_PADDING                          = 0x0005,
    OBJECT_END                                    = OBJECT_FIELD_PADDING + 1,
};

enum EItemFields
{
    ITEM_FIELD_OWNER                              = OBJECT_END + 0x0000,
    ITEM_FIELD_CONTAINED                          = OBJECT_END + 0x0002,
    ITEM_FIELD_CREATOR                            = OBJECT_END + 0x0004,
    ITEM_FIELD_GIFTCREATOR                        = OBJECT_END + 0x0006,
    ITEM_FIELD_STACK_COUNT                        = OBJECT_END + 0x0008,
    ITEM_FIELD_DURATION                           = OBJECT_END + 0x0009,
    ITEM_FIELD_SPELL_CHARGES                      = OBJECT_END + 0x000A,
    ITEM_FIELD_FLAGS                              = OBJECT_END + 0x000F,
    ITEM_FIELD_ENCHANTMENT                        = OBJECT_END + 0x0010,
    ITEM_FIELD_PROPERTY_SEED                      = OBJECT_END + 0x0025+12, //22 //55
    ITEM_FIELD_RANDOM_PROPERTIES_ID               = OBJECT_END + 0x0026+12,
    ITEM_FIELD_ITEM_TEXT_ID                       = OBJECT_END + 0x0027+12,
    ITEM_FIELD_DURABILITY                         = OBJECT_END + 0x0028+12,
    ITEM_FIELD_MAXDURABILITY                      = OBJECT_END + 0x0029+12,
    ITEM_END                                      = ITEM_FIELD_MAXDURABILITY + 1,

};

enum EContainerFields
{
    CONTAINER_FIELD_NUM_SLOTS                     = ITEM_END + 0x0000,
    CONTAINER_ALIGN_PAD                           = ITEM_END + 0x0001,
    CONTAINER_FIELD_SLOT_1                        = ITEM_END + 0x0002,
    CONTAINER_END                                 = CONTAINER_FIELD_SLOT_1 + 56,
};

enum EUnitFields
{
    UNIT_FIELD_CHARM                              = OBJECT_END + 0x0000,
    UNIT_FIELD_SUMMON                             = OBJECT_END + 0x0002,
    UNIT_FIELD_CHARMEDBY                          = OBJECT_END + 0x0004,
    UNIT_FIELD_SUMMONEDBY                         = OBJECT_END + 0x0006,
    UNIT_FIELD_CREATEDBY                          = OBJECT_END + 0x0008,
    UNIT_FIELD_TARGET                             = OBJECT_END + 0x000A,
    UNIT_FIELD_PERSUADED                          = OBJECT_END + 0x000C,
    UNIT_FIELD_CHANNEL_OBJECT                     = OBJECT_END + 0x000E,
    UNIT_FIELD_HEALTH                             = OBJECT_END + 0x0010,
    UNIT_FIELD_POWER1                             = OBJECT_END + 0x0011,
    UNIT_FIELD_POWER2                             = OBJECT_END + 0x0012,
    UNIT_FIELD_POWER3                             = OBJECT_END + 0x0013,
    UNIT_FIELD_POWER4                             = OBJECT_END + 0x0014,
    UNIT_FIELD_POWER5                             = OBJECT_END + 0x0015,
    UNIT_FIELD_MAXHEALTH                          = OBJECT_END + 0x0016,
    UNIT_FIELD_MAXPOWER1                          = OBJECT_END + 0x0017,
    UNIT_FIELD_MAXPOWER2                          = OBJECT_END + 0x0018,
    UNIT_FIELD_MAXPOWER3                          = OBJECT_END + 0x0019,
    UNIT_FIELD_MAXPOWER4                          = OBJECT_END + 0x001A,
    UNIT_FIELD_MAXPOWER5                          = OBJECT_END + 0x001B,
    UNIT_FIELD_LEVEL                              = OBJECT_END + 0x001C,
    UNIT_FIELD_FACTIONTEMPLATE                    = OBJECT_END + 0x001D,
    UNIT_FIELD_BYTES_0                            = OBJECT_END + 0x001E,
    UNIT_VIRTUAL_ITEM_SLOT_DISPLAY                = OBJECT_END + 0x001F,
    UNIT_VIRTUAL_ITEM_INFO                        = OBJECT_END + 0x0022,
    UNIT_FIELD_FLAGS                              = OBJECT_END + 0x0028,
    /*
	UNIT_FIELD_AURA                               = OBJECT_END + 0x0029,
    UNIT_FIELD_AURAFLAGS                          = OBJECT_END + 0x0059,
    UNIT_FIELD_AURALEVELS                         = OBJECT_END + 0x005F,
    UNIT_FIELD_AURAAPPLICATIONS                   = OBJECT_END + 0x006B,
    UNIT_FIELD_AURASTATE                          = OBJECT_END + 0x0077,
    UNIT_FIELD_BASEATTACKTIME                     = OBJECT_END + 0x0078,
    UNIT_FIELD_RANGEDATTACKTIME                   = OBJECT_END + 0x007A,
    UNIT_FIELD_BOUNDINGRADIUS                     = OBJECT_END + 0x007B,
    UNIT_FIELD_COMBATREACH                        = OBJECT_END + 0x007C,
    UNIT_FIELD_DISPLAYID                          = OBJECT_END + 0x007D,
    UNIT_FIELD_NATIVEDISPLAYID                    = OBJECT_END + 0x007E,
    UNIT_FIELD_MOUNTDISPLAYID                     = OBJECT_END + 0x007F,
    UNIT_FIELD_MINDAMAGE                          = OBJECT_END + 0x0080,
    UNIT_FIELD_MAXDAMAGE                          = OBJECT_END + 0x0081,
    UNIT_FIELD_MINOFFHANDDAMAGE                   = OBJECT_END + 0x0082,
    UNIT_FIELD_MAXOFFHANDDAMAGE                   = OBJECT_END + 0x0083,
    UNIT_FIELD_BYTES_1                            = OBJECT_END + 0x0084,
    UNIT_FIELD_PETNUMBER                          = OBJECT_END + 0x0085,
    UNIT_FIELD_PET_NAME_TIMESTAMP                 = OBJECT_END + 0x0086,
    UNIT_FIELD_PETEXPERIENCE                      = OBJECT_END + 0x0087,
    UNIT_FIELD_PETNEXTLEVELEXP                    = OBJECT_END + 0x0088,
    UNIT_DYNAMIC_FLAGS                            = OBJECT_END + 0x0089,
    UNIT_CHANNEL_SPELL                            = OBJECT_END + 0x008A,
    UNIT_MOD_CAST_SPEED                           = OBJECT_END + 0x008B,
    UNIT_CREATED_BY_SPELL                         = OBJECT_END + 0x008C,
    UNIT_NPC_FLAGS                                = OBJECT_END + 0x008D,
    UNIT_NPC_EMOTESTATE                           = OBJECT_END + 0x008E,
    UNIT_TRAINING_POINTS                          = OBJECT_END + 0x008F,
    UNIT_FIELD_STR                              = OBJECT_END + 0x0090,
    UNIT_FIELD_AGILITY                              = OBJECT_END + 0x0091,
    UNIT_FIELD_STAMINA                              = OBJECT_END + 0x0092,
    UNIT_FIELD_IQ                              = OBJECT_END + 0x0093,
    UNIT_FIELD_SPIRIT                              = OBJECT_END + 0x0094,
    UNIT_FIELD_RESISTANCES                        = OBJECT_END + 0x0095,
    UNIT_FIELD_BASE_MANA                          = OBJECT_END + 0x009C,
    UNIT_FIELD_BASE_HEALTH                        = OBJECT_END + 0x009D,
    UNIT_FIELD_BYTES_2                            = OBJECT_END + 0x009E,
    UNIT_FIELD_ATTACK_POWER                       = OBJECT_END + 0x009F,
    UNIT_FIELD_ATTACK_POWER_MODS                  = OBJECT_END + 0x00A0,
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER            = OBJECT_END + 0x00A1,
    UNIT_FIELD_RANGED_ATTACK_POWER                = OBJECT_END + 0x00A2,
    UNIT_FIELD_RANGED_ATTACK_POWER_MODS           = OBJECT_END + 0x00A3,
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER     = OBJECT_END + 0x00A4,
    UNIT_FIELD_MINRANGEDDAMAGE                    = OBJECT_END + 0x00A5,
    UNIT_FIELD_MAXRANGEDDAMAGE                    = OBJECT_END + 0x00A6,
    UNIT_FIELD_POWER_COST_MODIFIER                = OBJECT_END + 0x00A7,
    UNIT_FIELD_POWER_COST_MULTIPLIER              = OBJECT_END + 0x00AE,
    UNIT_FIELD_PADDING                            = OBJECT_END + 0x00B5,
    UNIT_END                                      = UNIT_FIELD_PADDING + 1,
	*/
	UNIT_FIELD_FLAGS_2                        = 0x29 + OBJECT_END,
    UNIT_FIELD_AURA                           = 0x2A + OBJECT_END,

    UNIT_FIELD_AURAFLAGS                      = 0x62 + OBJECT_END,//= 0x59 + OBJECT_END,
    UNIT_FIELD_AURALEVELS                     = 0x69 + OBJECT_END,
    UNIT_FIELD_AURAAPPLICATIONS               = 0x77 + OBJECT_END,
    UNIT_FIELD_AURASTATE                      = 0x85 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_BASEATTACKTIME                 = 0x86 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_OFFHANDATTACKTIME              = 0x87 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RANGEDATTACKTIME               = 0x88 + OBJECT_END,
    UNIT_FIELD_BOUNDINGRADIUS                 = 0x89 + OBJECT_END,
    UNIT_FIELD_COMBATREACH                    = 0x8A + OBJECT_END,
    UNIT_FIELD_DISPLAYID                      = 0x8B + OBJECT_END,
    UNIT_FIELD_NATIVEDISPLAYID                = 0x8C + OBJECT_END,
    UNIT_FIELD_MOUNTDISPLAYID                 = 0x8D + OBJECT_END,
    UNIT_FIELD_MINDAMAGE                      = 0x8E + OBJECT_END,
    UNIT_FIELD_MAXDAMAGE                      = 0x8F + OBJECT_END,
    UNIT_FIELD_MINOFFHANDDAMAGE               = 0x90 + OBJECT_END,
    UNIT_FIELD_MAXOFFHANDDAMAGE               = 0x91 + OBJECT_END,
    UNIT_FIELD_BYTES_1                        = 0x92 + OBJECT_END,
    UNIT_FIELD_PETNUMBER                      = 0x93 + OBJECT_END,
    UNIT_FIELD_PET_NAME_TIMESTAMP             = 0x94 + OBJECT_END,
    UNIT_FIELD_PETEXPERIENCE                  = 0x95 + OBJECT_END,
    UNIT_FIELD_PETNEXTLEVELEXP                = 0x96 + OBJECT_END,
    UNIT_DYNAMIC_FLAGS                        = 0x97 + OBJECT_END,
    UNIT_CHANNEL_SPELL                        = 0x98 + OBJECT_END,
    UNIT_MOD_CAST_SPEED                       = 0x99 + OBJECT_END,
    UNIT_CREATED_BY_SPELL                     = 0x9A + OBJECT_END,
    UNIT_NPC_FLAGS                            = 0x9B + OBJECT_END,
    UNIT_NPC_EMOTESTATE                       = 0x9C + OBJECT_END,
    UNIT_TRAINING_POINTS                      = 0x9D + OBJECT_END,

                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_STATS                          = 0x9E + OBJECT_END,
    UNIT_FIELD_STR                            = UNIT_FIELD_STATS,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_AGILITY                        = 0x9F + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_STAMINA                        = 0xA0 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_IQ                             = 0xA1 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_SPIRIT                         = 0xA2 + OBJECT_END,

	UNIT_FIELD_POSSTAT0                       = 0xA3 + OBJECT_END,
	UNIT_FIELD_POSSTAT1                       = 0xA4 + OBJECT_END,
	UNIT_FIELD_POSSTAT2                       = 0xA5 + OBJECT_END,
	UNIT_FIELD_POSSTAT3                       = 0xA6 + OBJECT_END,
	UNIT_FIELD_POSSTAT4                       = 0xA7 + OBJECT_END,

	UNIT_FIELD_NEGSTAT0                       = 0xA8 + OBJECT_END,
	UNIT_FIELD_NEGSTAT1                       = 0xA9 + OBJECT_END,
	UNIT_FIELD_NEGSTAT2                       = 0xAA + OBJECT_END,
	UNIT_FIELD_NEGSTAT3                       = 0xAB + OBJECT_END,
	UNIT_FIELD_NEGSTAT4                       = 0xAC + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES                    = 0xAD + OBJECT_END,
    UNIT_FIELD_ARMOR                          = UNIT_FIELD_RESISTANCES,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_01                 = 0xAE + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_02                 = 0xAF + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_03                 = 0xB0 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_04                 = 0xB1 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_05                 = 0xB2 + OBJECT_END,
                                                            // used at server in float format but send to client in uint32 format
    UNIT_FIELD_RESISTANCES_06                 = 0xB3 + OBJECT_END,
    
	UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE     = 0xB4 + OBJECT_END,
	UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE     = 0xBB + OBJECT_END,

    UNIT_FIELD_BASE_MANA                      = 0xC2 + OBJECT_END,
    UNIT_FIELD_BASE_HEALTH                    = 0xC3 + OBJECT_END,
    UNIT_FIELD_BYTES_2                        = 0xC4 + OBJECT_END,
    UNIT_FIELD_ATTACK_POWER                   = 0xC5 + OBJECT_END,
    UNIT_FIELD_ATTACK_POWER_MODS              = 0xC6 + OBJECT_END,
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER        = 0xC7 + OBJECT_END,
    UNIT_FIELD_RANGED_ATTACK_POWER            = 0xC8 + OBJECT_END,
    UNIT_FIELD_RANGED_ATTACK_POWER_MODS       = 0xC9 + OBJECT_END,
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER = 0xCA + OBJECT_END,
    UNIT_FIELD_MINRANGEDDAMAGE                = 0xCB + OBJECT_END,
    UNIT_FIELD_MAXRANGEDDAMAGE                = 0xCC + OBJECT_END,
    UNIT_FIELD_POWER_COST_MODIFIER            = 0xCD + OBJECT_END,
    UNIT_FIELD_POWER_COST_MULTIPLIER          = 0xD4 + OBJECT_END,
    UNIT_FIELD_PADDING                        = 0xDB + OBJECT_END,
    UNIT_END                                  = 0xDC + OBJECT_END,
};

enum EPlayerFields
{
    PLAYER_DUEL_ARBITER                           = UNIT_END + 0x0000,
    PLAYER_FLAGS                                  = UNIT_END + 0x0002,
    PLAYER_GUILDID                                = UNIT_END + 0x0003,
    PLAYER_GUILDRANK                              = UNIT_END + 0x0004,
    PLAYER_BYTES                                  = UNIT_END + 0x0005,
    PLAYER_BYTES_2                                = UNIT_END + 0x0006,
    PLAYER_BYTES_3                                = UNIT_END + 0x0007,
    PLAYER_DUEL_TEAM                              = UNIT_END + 0x0008,
    PLAYER_GUILD_TIMESTAMP                        = UNIT_END + 0x0009,
    PLAYER_QUEST_LOG_1_1                          = UNIT_END + 0x000A,
    PLAYER_QUEST_LOG_1_2                          = UNIT_END + 0x000B,
    PLAYER_QUEST_LOG_2_1                          = UNIT_END + 0x000D,
    PLAYER_QUEST_LOG_2_2                          = UNIT_END + 0x000E,
    PLAYER_QUEST_LOG_3_1                          = UNIT_END + 0x0010,
    PLAYER_QUEST_LOG_3_2                          = UNIT_END + 0x0011,
    PLAYER_QUEST_LOG_4_1                          = UNIT_END + 0x0013,
    PLAYER_QUEST_LOG_4_2                          = UNIT_END + 0x0014,
    PLAYER_QUEST_LOG_5_1                          = UNIT_END + 0x0016,
    PLAYER_QUEST_LOG_5_2                          = UNIT_END + 0x0017,
    PLAYER_QUEST_LOG_6_1                          = UNIT_END + 0x0019,
    PLAYER_QUEST_LOG_6_2                          = UNIT_END + 0x001A,
    PLAYER_QUEST_LOG_7_1                          = UNIT_END + 0x001C,
    PLAYER_QUEST_LOG_7_2                          = UNIT_END + 0x001D,
    PLAYER_QUEST_LOG_8_1                          = UNIT_END + 0x001F,
    PLAYER_QUEST_LOG_8_2                          = UNIT_END + 0x0020,
    PLAYER_QUEST_LOG_9_1                          = UNIT_END + 0x0022,
    PLAYER_QUEST_LOG_9_2                          = UNIT_END + 0x0023,
    PLAYER_QUEST_LOG_10_1                         = UNIT_END + 0x0025,
    PLAYER_QUEST_LOG_10_2                         = UNIT_END + 0x0026,
    PLAYER_QUEST_LOG_11_1                         = UNIT_END + 0x0028,
    PLAYER_QUEST_LOG_11_2                         = UNIT_END + 0x0029,
    PLAYER_QUEST_LOG_12_1                         = UNIT_END + 0x002B,
    PLAYER_QUEST_LOG_12_2                         = UNIT_END + 0x002C,
    PLAYER_QUEST_LOG_13_1                         = UNIT_END + 0x002E,
    PLAYER_QUEST_LOG_13_2                         = UNIT_END + 0x002F,
    PLAYER_QUEST_LOG_14_1                         = UNIT_END + 0x0031,
    PLAYER_QUEST_LOG_14_2                         = UNIT_END + 0x0032,
    PLAYER_QUEST_LOG_15_1                         = UNIT_END + 0x0034,
    PLAYER_QUEST_LOG_15_2                         = UNIT_END + 0x0035,
    PLAYER_QUEST_LOG_16_1                         = UNIT_END + 0x0037,
    PLAYER_QUEST_LOG_16_2                         = UNIT_END + 0x0038,
    PLAYER_QUEST_LOG_17_1                         = UNIT_END + 0x003A,
    PLAYER_QUEST_LOG_17_2                         = UNIT_END + 0x003B,
    PLAYER_QUEST_LOG_18_1                         = UNIT_END + 0x003D,
    PLAYER_QUEST_LOG_18_2                         = UNIT_END + 0x003E,
    PLAYER_QUEST_LOG_19_1                         = UNIT_END + 0x0040,
    PLAYER_QUEST_LOG_19_2                         = UNIT_END + 0x0041,
    PLAYER_QUEST_LOG_20_1                         = UNIT_END + 0x0043,
    PLAYER_QUEST_LOG_20_2                         = UNIT_END + 0x0044,
    
	/*
	PLAYER_VISIBLE_ITEM_1_CREATOR                 = UNIT_END + 0x0046,
    PLAYER_VISIBLE_ITEM_1_0                       = UNIT_END + 0x0048,
    PLAYER_VISIBLE_ITEM_1_PROPERTIES              = UNIT_END + 0x0050,
    PLAYER_VISIBLE_ITEM_1_PAD                     = UNIT_END + 0x0051,
    PLAYER_VISIBLE_ITEM_2_CREATOR                 = UNIT_END + 0x0052,
    PLAYER_VISIBLE_ITEM_2_0                       = UNIT_END + 0x0054,
    PLAYER_VISIBLE_ITEM_2_PROPERTIES              = UNIT_END + 0x005C,
    PLAYER_VISIBLE_ITEM_2_PAD                     = UNIT_END + 0x005D,
    PLAYER_VISIBLE_ITEM_3_CREATOR                 = UNIT_END + 0x005E,
    PLAYER_VISIBLE_ITEM_3_0                       = UNIT_END + 0x0060,
    PLAYER_VISIBLE_ITEM_3_PROPERTIES              = UNIT_END + 0x0068,
    PLAYER_VISIBLE_ITEM_3_PAD                     = UNIT_END + 0x0069,
    PLAYER_VISIBLE_ITEM_4_CREATOR                 = UNIT_END + 0x006A,
    PLAYER_VISIBLE_ITEM_4_0                       = UNIT_END + 0x006C,
    PLAYER_VISIBLE_ITEM_4_PROPERTIES              = UNIT_END + 0x0074,
    PLAYER_VISIBLE_ITEM_4_PAD                     = UNIT_END + 0x0075,
    PLAYER_VISIBLE_ITEM_5_CREATOR                 = UNIT_END + 0x0076,
    PLAYER_VISIBLE_ITEM_5_0                       = UNIT_END + 0x0078,
    PLAYER_VISIBLE_ITEM_5_PROPERTIES              = UNIT_END + 0x0080,
    PLAYER_VISIBLE_ITEM_5_PAD                     = UNIT_END + 0x0081,
    PLAYER_VISIBLE_ITEM_6_CREATOR                 = UNIT_END + 0x0082,
    PLAYER_VISIBLE_ITEM_6_0                       = UNIT_END + 0x0084,
    PLAYER_VISIBLE_ITEM_6_PROPERTIES              = UNIT_END + 0x008C,
    PLAYER_VISIBLE_ITEM_6_PAD                     = UNIT_END + 0x008D,
    PLAYER_VISIBLE_ITEM_7_CREATOR                 = UNIT_END + 0x008E,
    PLAYER_VISIBLE_ITEM_7_0                       = UNIT_END + 0x0090,
    PLAYER_VISIBLE_ITEM_7_PROPERTIES              = UNIT_END + 0x0098,
    PLAYER_VISIBLE_ITEM_7_PAD                     = UNIT_END + 0x0099,
    PLAYER_VISIBLE_ITEM_8_CREATOR                 = UNIT_END + 0x009A,
    PLAYER_VISIBLE_ITEM_8_0                       = UNIT_END + 0x009C,
    PLAYER_VISIBLE_ITEM_8_PROPERTIES              = UNIT_END + 0x00A4,
    PLAYER_VISIBLE_ITEM_8_PAD                     = UNIT_END + 0x00A5,
    PLAYER_VISIBLE_ITEM_9_CREATOR                 = UNIT_END + 0x00A6,
    PLAYER_VISIBLE_ITEM_9_0                       = UNIT_END + 0x00A8,
    PLAYER_VISIBLE_ITEM_9_PROPERTIES              = UNIT_END + 0x00B0,
    PLAYER_VISIBLE_ITEM_9_PAD                     = UNIT_END + 0x00B1,
    PLAYER_VISIBLE_ITEM_10_CREATOR                = UNIT_END + 0x00B2,
    PLAYER_VISIBLE_ITEM_10_0                      = UNIT_END + 0x00B4,
    PLAYER_VISIBLE_ITEM_10_PROPERTIES             = UNIT_END + 0x00BC,
    PLAYER_VISIBLE_ITEM_10_PAD                    = UNIT_END + 0x00BD,
    PLAYER_VISIBLE_ITEM_11_CREATOR                = UNIT_END + 0x00BE,
    PLAYER_VISIBLE_ITEM_11_0                      = UNIT_END + 0x00C0,
    PLAYER_VISIBLE_ITEM_11_PROPERTIES             = UNIT_END + 0x00C8,
    PLAYER_VISIBLE_ITEM_11_PAD                    = UNIT_END + 0x00C9,
    PLAYER_VISIBLE_ITEM_12_CREATOR                = UNIT_END + 0x00CA,
    PLAYER_VISIBLE_ITEM_12_0                      = UNIT_END + 0x00CC,
    PLAYER_VISIBLE_ITEM_12_PROPERTIES             = UNIT_END + 0x00D4,
    PLAYER_VISIBLE_ITEM_12_PAD                    = UNIT_END + 0x00D5,
    PLAYER_VISIBLE_ITEM_13_CREATOR                = UNIT_END + 0x00D6,
    PLAYER_VISIBLE_ITEM_13_0                      = UNIT_END + 0x00D8,
    PLAYER_VISIBLE_ITEM_13_PROPERTIES             = UNIT_END + 0x00E0,
    PLAYER_VISIBLE_ITEM_13_PAD                    = UNIT_END + 0x00E1,
    PLAYER_VISIBLE_ITEM_14_CREATOR                = UNIT_END + 0x00E2,
    PLAYER_VISIBLE_ITEM_14_0                      = UNIT_END + 0x00E4,
    PLAYER_VISIBLE_ITEM_14_PROPERTIES             = UNIT_END + 0x00EC,
    PLAYER_VISIBLE_ITEM_14_PAD                    = UNIT_END + 0x00ED,
    PLAYER_VISIBLE_ITEM_15_CREATOR                = UNIT_END + 0x00EE,
    PLAYER_VISIBLE_ITEM_15_0                      = UNIT_END + 0x00F0,
    PLAYER_VISIBLE_ITEM_15_PROPERTIES             = UNIT_END + 0x00F8,
    PLAYER_VISIBLE_ITEM_15_PAD                    = UNIT_END + 0x00F9,
    PLAYER_VISIBLE_ITEM_16_CREATOR                = UNIT_END + 0x00FA,
    PLAYER_VISIBLE_ITEM_16_0                      = UNIT_END + 0x00FC,
    PLAYER_VISIBLE_ITEM_16_PROPERTIES             = UNIT_END + 0x0104,
    PLAYER_VISIBLE_ITEM_16_PAD                    = UNIT_END + 0x0105,
    PLAYER_VISIBLE_ITEM_17_CREATOR                = UNIT_END + 0x0106,
    PLAYER_VISIBLE_ITEM_17_0                      = UNIT_END + 0x0108,
    PLAYER_VISIBLE_ITEM_17_PROPERTIES             = UNIT_END + 0x0110,
    PLAYER_VISIBLE_ITEM_17_PAD                    = UNIT_END + 0x0111,
    PLAYER_VISIBLE_ITEM_18_CREATOR                = UNIT_END + 0x0112,
    PLAYER_VISIBLE_ITEM_18_0                      = UNIT_END + 0x0114,
    PLAYER_VISIBLE_ITEM_18_PROPERTIES             = UNIT_END + 0x011C,
    PLAYER_VISIBLE_ITEM_18_PAD                    = UNIT_END + 0x011D,
    PLAYER_VISIBLE_ITEM_19_CREATOR                = UNIT_END + 0x011E,
    PLAYER_VISIBLE_ITEM_19_0                      = UNIT_END + 0x0120,
    PLAYER_VISIBLE_ITEM_19_PROPERTIES             = UNIT_END + 0x0128,
    PLAYER_VISIBLE_ITEM_19_PAD                    = UNIT_END + 0x0129,
    PLAYER_FIELD_INV_SLOT_HEAD                    = UNIT_END + 0x012A,
    PLAYER_FIELD_PACK_SLOT_1                      = UNIT_END + 0x0158,
    PLAYER_FIELD_BANK_SLOT_1                      = UNIT_END + 0x0178,
    PLAYER_FIELD_BANKBAG_SLOT_1                   = UNIT_END + 0x01A8,
    PLAYER_FIELD_VENDORBUYBACK_SLOT_1             = UNIT_END + 0x01B4,
    PLAYER_FIELD_KEYRING_SLOT_1                   = UNIT_END + 0x01CC,
    PLAYER_FARSIGHT                               = UNIT_END + 0x020C,
    PLAYER_FIELD_COMBO_TARGET                     = UNIT_END + 0x020E,
    PLAYER_XP                                     = UNIT_END + 0x0210,
    PLAYER_NEXT_LEVEL_XP                          = UNIT_END + 0x0211,
    PLAYER_SKILL_INFO_1_1                         = UNIT_END + 0x0212,
    PLAYER_CHARACTER_POINTS1                      = UNIT_END + 0x0392,
    PLAYER_CHARACTER_POINTS2                      = UNIT_END + 0x0393,
    PLAYER_TRACK_CREATURES                        = UNIT_END + 0x0394,
    PLAYER_TRACK_RESOURCES                        = UNIT_END + 0x0395,
    PLAYER_BLOCK_PERCENTAGE                       = UNIT_END + 0x0396,
    PLAYER_DODGE_PERCENTAGE                       = UNIT_END + 0x0397,
    PLAYER_PARRY_PERCENTAGE                       = UNIT_END + 0x0398,
    PLAYER_CRIT_PERCENTAGE                        = UNIT_END + 0x0399,
    PLAYER_RANGED_CRIT_PERCENTAGE                 = UNIT_END + 0x039A,
    PLAYER_EXPLORED_ZONES_1                       = UNIT_END + 0x039B,
    PLAYER_REST_STATE_EXPERIENCE                  = UNIT_END + 0x03DB,
    PLAYER_FIELD_COINAGE                          = UNIT_END + 0x03DC,
    PLAYER_FIELD_POSSTAT0                         = UNIT_END + 0x03DD,
    PLAYER_FIELD_POSSTAT1                         = UNIT_END + 0x03DE,
    PLAYER_FIELD_POSSTAT2                         = UNIT_END + 0x03DF,
    PLAYER_FIELD_POSSTAT3                         = UNIT_END + 0x03E0,
    PLAYER_FIELD_POSSTAT4                         = UNIT_END + 0x03E1,
    PLAYER_FIELD_NEGSTAT0                         = UNIT_END + 0x03E2,
    PLAYER_FIELD_NEGSTAT1                         = UNIT_END + 0x03E3,
    PLAYER_FIELD_NEGSTAT2                         = UNIT_END + 0x03E4,
    PLAYER_FIELD_NEGSTAT3                         = UNIT_END + 0x03E5,
    PLAYER_FIELD_NEGSTAT4                         = UNIT_END + 0x03E6,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE       = UNIT_END + 0x03E7,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE       = UNIT_END + 0x03EE,
    PLAYER_FIELD_MOD_DAMAGE_DONE_POS              = UNIT_END + 0x03F5,
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG              = UNIT_END + 0x03FC,
    PLAYER_FIELD_MOD_DAMAGE_DONE_PCT              = UNIT_END + 0x0403,
    PLAYER_FIELD_BYTES                            = UNIT_END + 0x040A,
    PLAYER_AMMO_ID                                = UNIT_END + 0x040B,
    PLAYER_SELF_RES_SPELL                         = UNIT_END + 0x040C,
    PLAYER_FIELD_PVP_MEDALS                       = UNIT_END + 0x040D,
    PLAYER_FIELD_BUYBACK_PRICE_1                  = UNIT_END + 0x040E,
    PLAYER_FIELD_BUYBACK_TIMESTAMP_1              = UNIT_END + 0x041A,
    PLAYER_FIELD_SESSION_KILLS                    = UNIT_END + 0x0426,
    PLAYER_FIELD_YESTERDAY_KILLS                  = UNIT_END + 0x0427,
    PLAYER_FIELD_LAST_WEEK_KILLS                  = UNIT_END + 0x0428,
    PLAYER_FIELD_THIS_WEEK_KILLS                  = UNIT_END + 0x0429,
    PLAYER_FIELD_THIS_WEEK_CONTRIBUTION           = UNIT_END + 0x042A,
    PLAYER_FIELD_LIFETIME_HONORABLE_KILLS         = UNIT_END + 0x042B,
    PLAYER_FIELD_LIFETIME_DISHONORABLE_KILLS      = UNIT_END + 0x042C,
    PLAYER_FIELD_YESTERDAY_CONTRIBUTION           = UNIT_END + 0x042D,
    PLAYER_FIELD_LAST_WEEK_CONTRIBUTION           = UNIT_END + 0x042E,
    PLAYER_FIELD_LAST_WEEK_RANK                   = UNIT_END + 0x042F,
    PLAYER_FIELD_BYTES2                           = UNIT_END + 0x0430,
    PLAYER_FIELD_WATCHED_FACTION_INDEX            = UNIT_END + 0x0431,
    PLAYER_FIELD_COMBAT_RATING_1                  = UNIT_END + 0x0432,
    PLAYER_END                                    = PLAYER_FIELD_COMBAT_RATING_1 + 20,
*/
	PLAYER_QUEST_LOG_21_1                     = 0x46 + UNIT_END,
    PLAYER_QUEST_LOG_21_2                     = 0x47 + UNIT_END,
	PLAYER_QUEST_LOG_22_1                     = 0x49 + UNIT_END,
    PLAYER_QUEST_LOG_22_2                     = 0x4A + UNIT_END,
	PLAYER_QUEST_LOG_23_1                     = 0x4C + UNIT_END,
    PLAYER_QUEST_LOG_23_2                     = 0x4D + UNIT_END,
	PLAYER_QUEST_LOG_24_1                     = 0x4F + UNIT_END,
    PLAYER_QUEST_LOG_24_2                     = 0x50 + UNIT_END,
    PLAYER_QUEST_LOG_25_1                     = 0x52 + UNIT_END,
    PLAYER_QUEST_LOG_25_2                     = 0x53 + UNIT_END,

                                                            //260
    PLAYER_VISIBLE_ITEM_1_CREATOR             = 0x55 + UNIT_END,
    PLAYER_VISIBLE_ITEM_1_0                   = 0x57 + UNIT_END,
    PLAYER_VISIBLE_ITEM_1_PROPERTIES          = 0x63 + UNIT_END,
                                                            //271
    PLAYER_VISIBLE_ITEM_1_PAD                 = 0x64 + UNIT_END,

                                                            //272
    PLAYER_VISIBLE_ITEM_2_CREATOR             = 0x65 + UNIT_END,
    PLAYER_VISIBLE_ITEM_2_0                   = 0x67 + UNIT_END,
    PLAYER_VISIBLE_ITEM_2_PROPERTIES          = 0x73 + UNIT_END,
                                                            //283
    PLAYER_VISIBLE_ITEM_2_PAD                 = 0x74 + UNIT_END,

                                                            //284
    PLAYER_VISIBLE_ITEM_3_CREATOR             = 0x75 + UNIT_END,
    PLAYER_VISIBLE_ITEM_3_0                   = 0x77 + UNIT_END,
    PLAYER_VISIBLE_ITEM_3_PROPERTIES          = 0x83 + UNIT_END,
                                                            //295
    PLAYER_VISIBLE_ITEM_3_PAD                 = 0x84 + UNIT_END,

                                                            //296
    PLAYER_VISIBLE_ITEM_4_CREATOR             = 0x85 + UNIT_END,
    PLAYER_VISIBLE_ITEM_4_0                   = 0x87 + UNIT_END,
    PLAYER_VISIBLE_ITEM_4_PROPERTIES          = 0x93 + UNIT_END,
                                                            //307
    PLAYER_VISIBLE_ITEM_4_PAD                 = 0x94 + UNIT_END,

                                                            //308
    PLAYER_VISIBLE_ITEM_5_CREATOR             = 0x95 + UNIT_END,
    PLAYER_VISIBLE_ITEM_5_0                   = 0x97 + UNIT_END,
    PLAYER_VISIBLE_ITEM_5_PROPERTIES          = 0xA3 + UNIT_END,
                                                            //319
    PLAYER_VISIBLE_ITEM_5_PAD                 = 0xA4 + UNIT_END,

                                                            //320
    PLAYER_VISIBLE_ITEM_6_CREATOR             = 0xA5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_6_0                   = 0xA7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_6_PROPERTIES          = 0xB3 + UNIT_END,
                                                            //331
    PLAYER_VISIBLE_ITEM_6_PAD                 = 0xB4 + UNIT_END,

                                                            //332
    PLAYER_VISIBLE_ITEM_7_CREATOR             = 0xB5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_7_0                   = 0xB7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_7_PROPERTIES          = 0xC3 + UNIT_END,
                                                            //343
    PLAYER_VISIBLE_ITEM_7_PAD                 = 0xC4 + UNIT_END,

                                                            //344
    PLAYER_VISIBLE_ITEM_8_CREATOR             = 0xC5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_8_0                   = 0xC7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_8_PROPERTIES          = 0xD3 + UNIT_END,
                                                            //355
    PLAYER_VISIBLE_ITEM_8_PAD                 = 0xD4 + UNIT_END,

                                                            //356
    PLAYER_VISIBLE_ITEM_9_CREATOR             = 0xD5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_9_0                   = 0xD7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_9_PROPERTIES          = 0xE3 + UNIT_END,
                                                            //367
    PLAYER_VISIBLE_ITEM_9_PAD                 = 0xD4 + UNIT_END,

                                                            //368
    PLAYER_VISIBLE_ITEM_10_CREATOR            = 0xE5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_10_0                  = 0xE7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_10_PROPERTIES         = 0xF3 + UNIT_END,
                                                            //379
    PLAYER_VISIBLE_ITEM_10_PAD                = 0xF4 + UNIT_END,

                                                            //380
    PLAYER_VISIBLE_ITEM_11_CREATOR            = 0xF5 + UNIT_END,
    PLAYER_VISIBLE_ITEM_11_0                  = 0xF7 + UNIT_END,
    PLAYER_VISIBLE_ITEM_11_PROPERTIES         = 0x103 + UNIT_END,
                                                            //391
    PLAYER_VISIBLE_ITEM_11_PAD                = 0x104 + UNIT_END,

                                                            //392
    PLAYER_VISIBLE_ITEM_12_CREATOR            = 0x105 + UNIT_END,
    PLAYER_VISIBLE_ITEM_12_0                  = 0x107 + UNIT_END,
    PLAYER_VISIBLE_ITEM_12_PROPERTIES         = 0x113 + UNIT_END,
                                                            //403
    PLAYER_VISIBLE_ITEM_12_PAD                = 0x114 + UNIT_END,

                                                            //404
    PLAYER_VISIBLE_ITEM_13_CREATOR            = 0x115 + UNIT_END,
    PLAYER_VISIBLE_ITEM_13_0                  = 0x117 + UNIT_END,
    PLAYER_VISIBLE_ITEM_13_PROPERTIES         = 0x123 + UNIT_END,
                                                            //415
    PLAYER_VISIBLE_ITEM_13_PAD                = 0x124 + UNIT_END,

                                                            //416
    PLAYER_VISIBLE_ITEM_14_CREATOR            = 0x125 + UNIT_END,
    PLAYER_VISIBLE_ITEM_14_0                  = 0x127 + UNIT_END,
    PLAYER_VISIBLE_ITEM_14_PROPERTIES         = 0x133 + UNIT_END,
                                                            //427
    PLAYER_VISIBLE_ITEM_14_PAD                = 0x134 + UNIT_END,

                                                            //428
    PLAYER_VISIBLE_ITEM_15_CREATOR            = 0x135 + UNIT_END,
    PLAYER_VISIBLE_ITEM_15_0                  = 0x137 + UNIT_END,
    PLAYER_VISIBLE_ITEM_15_PROPERTIES         = 0x143 + UNIT_END,
                                                            //439
    PLAYER_VISIBLE_ITEM_15_PAD                = 0x144 + UNIT_END,

                                                            //440
    PLAYER_VISIBLE_ITEM_16_CREATOR            = 0x145 + UNIT_END,
    PLAYER_VISIBLE_ITEM_16_0                  = 0x147 + UNIT_END,
    PLAYER_VISIBLE_ITEM_16_PROPERTIES         = 0x153 + UNIT_END,
                                                            //451
    PLAYER_VISIBLE_ITEM_16_PAD                = 0x154 + UNIT_END,

                                                            //452
    PLAYER_VISIBLE_ITEM_17_CREATOR            = 0x155 + UNIT_END,
    PLAYER_VISIBLE_ITEM_17_0                  = 0x157 + UNIT_END,
    PLAYER_VISIBLE_ITEM_17_PROPERTIES         = 0x163 + UNIT_END,
                                                            //463
    PLAYER_VISIBLE_ITEM_17_PAD                = 0x164 + UNIT_END,

                                                            //464
    PLAYER_VISIBLE_ITEM_18_CREATOR            = 0x165 + UNIT_END,
    //466 ranged
    PLAYER_VISIBLE_ITEM_18_0                  = 0x167 + UNIT_END,
    PLAYER_VISIBLE_ITEM_18_PROPERTIES         = 0x173 + UNIT_END,
                                                            //475
    PLAYER_VISIBLE_ITEM_18_PAD                = 0x174 + UNIT_END,

                                                            //476
    PLAYER_VISIBLE_ITEM_19_CREATOR            = 0x175 + UNIT_END,
    PLAYER_VISIBLE_ITEM_19_0                  = 0x177 + UNIT_END,
    PLAYER_VISIBLE_ITEM_19_PROPERTIES         = 0x183 + UNIT_END,
                                                            //487
    PLAYER_VISIBLE_ITEM_19_PAD                = 0x184 + UNIT_END,

	PLAYER_CHOSEN_TITLE                       = 0x185 + UNIT_END,

    PLAYER_FIELD_INV_SLOT_HEAD                = 0x186 + UNIT_END,

    PLAYER_FIELD_PACK_SLOT_1                  = 0x1B4 + UNIT_END,
    PLAYER_FIELD_PACK_SLOT_2                  = 0x1B5 + UNIT_END,

    PLAYER_FIELD_BANK_SLOT_1                  = 0x1D4 + UNIT_END,
    PLAYER_FIELD_BANKBAG_SLOT_1               = 0x20C + UNIT_END,
    PLAYER_FIELD_VENDORBUYBACK_SLOT_1         = 0x21A + UNIT_END,
    PLAYER_FIELD_KEYRING_SLOT_1               = 0x232 + UNIT_END,
    PLAYER_FARSIGHT                           = 0x272 + UNIT_END,
    PLAYER_FIELD_COMBO_TARGET                 = 0x274 + UNIT_END,
    PLAYER__FIELD_KNOWN_TITLES                = 0x276 + UNIT_END,
    PLAYER_XP                                 = 0x278 + UNIT_END,
    PLAYER_NEXT_LEVEL_XP                      = 0x279 + UNIT_END,
    PLAYER_SKILL_INFO_START                   = 0x27A + UNIT_END,
	PLAYER_SKILL_INFO_1_1                     = 0x27A + UNIT_END,

    PLAYER_CHARACTER_POINTS1                   = 0x3FA + UNIT_END,
    PLAYER_CHARACTER_POINTS2                   = 0x3FB + UNIT_END,
    PLAYER_TRACK_CREATURES                     = 0x3FC + UNIT_END,
    PLAYER_TRACK_RESOURCES                     = 0x3FD + UNIT_END,
    PLAYER_BLOCK_PERCENTAGE                    = 0x3FE + UNIT_END,
    PLAYER_DODGE_PERCENTAGE                    = 0x3FF + UNIT_END,
    PLAYER_PARRY_PERCENTAGE                    = 0x400 + UNIT_END,
    PLAYER_CRIT_PERCENTAGE                     = 0x401 + UNIT_END,
    PLAYER_RANGED_CRIT_PERCENTAGE              = 0x402 + UNIT_END,
	PLAYER_OFFHAND_CRIT_PERCENTAGE             = 0x403 + UNIT_END,
	PLAYER_SPELL_CRIT_PERCENTAGE1              = 0x404 + UNIT_END,
	PLAYER_EXPLORED_ZONES_1                    = 0x40B + UNIT_END,
    PLAYER_REST_STATE_EXPERIENCE               = 0x44B + UNIT_END,
    PLAYER_FIELD_COINAGE                       = 0x44C + UNIT_END,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_POSSTAT0                      = UNIT_FIELD_POSSTAT0,
    PLAYER_FIELD_POSSTAT1                      = UNIT_FIELD_POSSTAT1,
    PLAYER_FIELD_POSSTAT2                      = UNIT_FIELD_POSSTAT2,
    PLAYER_FIELD_POSSTAT3                      = UNIT_FIELD_POSSTAT3,
    PLAYER_FIELD_POSSTAT4                      = UNIT_FIELD_POSSTAT4,
    PLAYER_FIELD_NEGSTAT0                      = UNIT_FIELD_NEGSTAT0,
    PLAYER_FIELD_NEGSTAT1                      = UNIT_FIELD_NEGSTAT1,
    PLAYER_FIELD_NEGSTAT2                      = UNIT_FIELD_NEGSTAT2,
    PLAYER_FIELD_NEGSTAT3                      = UNIT_FIELD_NEGSTAT3,
    PLAYER_FIELD_NEGSTAT4                      = UNIT_FIELD_NEGSTAT4,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE    = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_01 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 1,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_02 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 2,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_03 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 3,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_04 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 4,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_05 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 5,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_06 = UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE + 6,
                                                            // used at server in float format but send to client in uint32 format
    
															
	PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE    = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_01 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 1,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_02 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 2,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_03 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 3,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_04 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 4,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_05 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 5,
                                                            // used at server in float format but send to client in uint32 format
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_06 = UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE + 6,
                                                            //float 1.0
    
	
	PLAYER_FIELD_MOD_DAMAGE_DONE_POS          = 0x44D + UNIT_END,
                                                            //float 1.0
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG          = 0x454 + UNIT_END,
                                                            //float 1.0
    PLAYER_FIELD_MOD_DAMAGE_DONE_PCT          = 0x45B + UNIT_END,
    PLAYER_FIELD_MOD_HEALING_DONE_POS         = 0x462 + UNIT_END,
	PLAYER_FIELD_MOD_TARGET_RESISTANCE        = 0x463 + UNIT_END,


    PLAYER_FIELD_BYTES                        = 0x464 + UNIT_END,
    PLAYER_AMMO_ID                            = 0x465 + UNIT_END,
    PLAYER_SELF_RES_SPELL                     = 0x466 + UNIT_END,
    PLAYER_FIELD_PVP_MEDALS                   = 0x467 + UNIT_END,
    PLAYER_FIELD_BUYBACK_PRICE_1              = 0x468 + UNIT_END,
    PLAYER_FIELD_BUYBACK_TIMESTAMP_1          = 0x474 + UNIT_END,
    
	PLAYER_FIELD_KILLS                        = UNIT_END + 0x0480,     // bytes<1>
    PLAYER_FIELD_TODAY_CONTRIBUTION           = UNIT_END + 0x0481,     // uint32<1>
	PLAYER_FIELD_SESSION_KILLS                = 0x480 + UNIT_END+1,
    PLAYER_FIELD_YESTERDAY_KILLS              = 0x481 + UNIT_END+1,
    //PLAYER_FIELD_LAST_WEEK_KILLS              = 0x499 + UNIT_END,
    //PLAYER_FIELD_THIS_WEEK_KILLS              = 0x49A + UNIT_END,
   // PLAYER_FIELD_THIS_WEEK_CONTRIBUTION       = 0x49B + UNIT_END,
    PLAYER_FIELD_LIFETIME_HONORABLE_KILLS     = 0x482 + UNIT_END+1,
   // PLAYER_FIELD_LIFETIME_DISHONORABLE_KILLS  = 0x49D + UNIT_END,
   // PLAYER_FIELD_YESTERDAY_CONTRIBUTION       = 0x49E + UNIT_END,
   // PLAYER_FIELD_LAST_WEEK_CONTRIBUTION       = 0x49F + UNIT_END,
   // PLAYER_FIELD_LAST_WEEK_RANK               = 0x49A + UNIT_END,
    


	PLAYER_FIELD_HONOR_BAR                    = 0x483 + UNIT_END+1,
    PLAYER_FIELD_BYTES2                       = 0x483 + UNIT_END+1,
    PLAYER_FIELD_WATCHED_FACTION_INDEX        = 0x484 + UNIT_END+1,
    PLAYER_FIELD_COMBAT_RATING_1              = 0x485 + UNIT_END+1,
	PLAYER_FIELD_ARENA_TEAM_INFO_1_1          = 0x49C + UNIT_END+1,
	PLAYER_FIELD_HONOR_CURRENCY               = 0x4A5 + UNIT_END+1,
    PLAYER_FIELD_ARENA_CURRENCY               = 0x4A6 + UNIT_END+1,
	PLAYER_FIELD_MOD_MANA_REGEN               = 0x4A7 + UNIT_END+1,
	PLAYER_FIELD_MOD_MANA_REGEN_INTERRUPT     = 0x4A8 + UNIT_END+1,
	PLAYER_FIELD_MAX_LEVEL                    = 0x4A9 + UNIT_END+1,
	PLAYER_FIELD_PADDING                      = 0x4AA + UNIT_END+1,
    PLAYER_END                                = 0x4AB + UNIT_END+1,
};

enum EGameObjectFields
{
    OBJECT_FIELD_CREATED_BY                       = OBJECT_END + 0x0000,
    GAMEOBJECT_DISPLAYID                          = OBJECT_END + 0x0002,
    GAMEOBJECT_FLAGS                              = OBJECT_END + 0x0003,
    GAMEOBJECT_ROTATION                           = OBJECT_END + 0x0004,
    GAMEOBJECT_STATE                              = OBJECT_END + 0x0008,
    GAMEOBJECT_POS_X                              = OBJECT_END + 0x0009,
    GAMEOBJECT_POS_Y                              = OBJECT_END + 0x000A,
    GAMEOBJECT_POS_Z                              = OBJECT_END + 0x000B,
    GAMEOBJECT_FACING                             = OBJECT_END + 0x000C,
    GAMEOBJECT_DYN_FLAGS                          = OBJECT_END + 0x000D,
    GAMEOBJECT_FACTION                            = OBJECT_END + 0x000E,
    GAMEOBJECT_TYPE_ID                            = OBJECT_END + 0x000F,
    GAMEOBJECT_LEVEL                              = OBJECT_END + 0x0010,
    GAMEOBJECT_ARTKIT                             = OBJECT_END + 0x0011,
    GAMEOBJECT_ANIMPROGRESS                       = OBJECT_END + 0x0012,
    GAMEOBJECT_PADDING                            = OBJECT_END + 0x0013,
    GAMEOBJECT_END                                = GAMEOBJECT_PADDING + 1,
};

enum EDynamicObjectFields
{
    DYNAMICOBJECT_CASTER                          = OBJECT_END + 0x0000,
    DYNAMICOBJECT_BYTES                           = OBJECT_END + 0x0002,
    DYNAMICOBJECT_SPELLID                         = OBJECT_END + 0x0003,
    DYNAMICOBJECT_RADIUS                          = OBJECT_END + 0x0004,
    DYNAMICOBJECT_POS_X                           = OBJECT_END + 0x0005,
    DYNAMICOBJECT_POS_Y                           = OBJECT_END + 0x0006,
    DYNAMICOBJECT_POS_Z                           = OBJECT_END + 0x0007,
    DYNAMICOBJECT_FACING                          = OBJECT_END + 0x0008,
    DYNAMICOBJECT_PAD                             = OBJECT_END + 0x0009,
    DYNAMICOBJECT_END                             = DYNAMICOBJECT_PAD + 1,
};

enum ECorpseFields
{
    CORPSE_FIELD_OWNER                            = OBJECT_END + 0x0000,
    CORPSE_FIELD_FACING                           = OBJECT_END + 0x0002,
    CORPSE_FIELD_POS_X                            = OBJECT_END + 0x0003,
    CORPSE_FIELD_POS_Y                            = OBJECT_END + 0x0004,
    CORPSE_FIELD_POS_Z                            = OBJECT_END + 0x0005,
    CORPSE_FIELD_DISPLAY_ID                       = OBJECT_END + 0x0006,
    CORPSE_FIELD_ITEM                             = OBJECT_END + 0x0007,
    CORPSE_FIELD_BYTES_1                          = OBJECT_END + 0x001A,
    CORPSE_FIELD_BYTES_2                          = OBJECT_END + 0x001B,
    CORPSE_FIELD_GUILD                            = OBJECT_END + 0x001C,
    CORPSE_FIELD_FLAGS                            = OBJECT_END + 0x001D,
    CORPSE_FIELD_DYNAMIC_FLAGS                    = OBJECT_END + 0x001E,
    CORPSE_FIELD_PAD                              = OBJECT_END + 0x001F,
    CORPSE_END                                    = CORPSE_FIELD_PAD + 1,
};
#endif
