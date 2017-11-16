#pragma once

#ifndef _SPELLS_H
#define _SPELLS_H

#include "../Shared/Database/DBCStores.h"
#include "../Shared/Namespace.h"

typedef enum {
	SCHOOL_HOLY = 1,
	SCHOOL_FIRE = 2,
	SCHOOL_SHADOW = 6
} SpellSchool;

typedef enum {
	EFFECT_NONE = 0,
	EFFECT_INSTAKILL = 1,
	EFFECT_SCHOOL_DAMAGE = 2,
	EFFECT_DUMMY = 3,
	EFFECT_PORTAL_TELEPORT = 4,
	EFFECT_TELEPORT_UNITS = 5,
	EFFECT_APPLY_AURA = 6,
	EFFECT_ENVIRONMENTAL_DAMAGE = 7,
	EFFECT_POWER_DRAIN = 8,
	EFFECT_HEALTH_LEECH = 9,
	EFFECT_HEAL = 10,
	EFFECT_BIND = 11,
	EFFECT_PORTAL = 12,
	EFFECT_RITUAL_BASE = 13,
	EFFECT_RITUAL_SPECIALIZE = 14,
	EFFECT_RITUAL_ACTIVATE_PORTAL = 15,
	EFFECT_QUEST_COMPLETE = 16,
	EFFECT_WEAPON_DAMAGE_ADD_NOSCHOOL = 17,
	EFFECT_RESURRECT = 18,
	EFFECT_EXTRA_ATTACKS = 19,
	EFFECT_DODGE = 20,
	EFFECT_EVADE = 21,
	EFFECT_PARRY = 22,
	EFFECT_BLOCK = 23,
	EFFECT_CREATE_ITEM = 24,
	EFFECT_WEAPON = 25,
	EFFECT_DEFENSE = 26,
	EFFECT_PERSISTENT_AREA_AURA = 27,
	EFFECT_SUMMON = 28,
	EFFECT_LEAP = 29,
	EFFECT_ENERGIZE = 30,
	EFFECT_WEAPON_DMG_PERCENT = 31,
	EFFECT_TRIGGER_MISSILE = 32,
	EFFECT_OPEN_LOCK = 33,
	EFFECT_APPLY_AREA_AURA = 35,
	EFFECT_LEARN_SPELL = 36,
	EFFECT_SPELL_DEFENSE = 37,
	EFFECT_DISPEL = 38,
	EFFECT_LANGUAGE = 39,
	EFFECT_DUAL_WIELD = 40,
	EFFECT_SUMMON_WILD = 41,
	EFFECT_SUMMON_GUARDIAN = 42,
	EFFECT_SKILL_STEP = 44,
	EFFECT_SPAWN = 46,
	EFFECT_SPELL_CAST_UI = 47,
	EFFECT_STEALTH = 48,
	EFFECT_DETECT = 49,
	EFFECT_SUMMON_OBJECT = 50,
	EFFECT_FORCE_CRITICAL_HIT = 51,
	EFFECT_GUARANTEE_HIT = 52,
	EFFECT_ENCHANT_ITEM_PERMANENT = 53,
	EFFECT_ENCHANT_ITEM_TEMPORARY = 54,
	EFFECT_TAME_CREATURE = 55,
	EFFECT_SUMMON_PET = 56,
	EFFECT_LEARN_PET_SPELL = 57,
	EFFECT_WEAPON_DAMAGE_ADD = 58,
	EFFECT_OPEN_LOCK_ITEM = 59,
	EFFECT_PROFICIENCY = 60,
	EFFECT_SEND_EVENT = 61,
	EFFECT_POWER_BURN = 62,
	EFFECT_THREAT = 63,
	EFFECT_TRIGGER_SPELL = 64,
	EFFECT_HEALTH_FUNNEL = 65,
	EFFECT_POWER_FUNNEL = 66,
	EFFECT_HEAL_MAX_HEALTH = 67,
	EFFECT_INTERRUPT_CAST = 68,
	EFFECT_DISTRACT = 69,
	EFFECT_PULL = 70,
	EFFECT_PICKPOCKET = 71,
	EFFECT_ADD_FARSIGHT = 72,
	EFFECT_SUMMON_POSSESSED = 73,
	EFFECT_SUMMON_TOTEM = 74,
	EFFECT_HEAL_MECHANICAL = 75,
	EFFECT_SUMMON_OBJECT_WILD = 76,
	EFFECT_SCRIPT_EFFECT = 77,
	EFFECT_ATTACK = 78,
	EFFECT_SANCTUARY = 79,
	EFFECT_ADD_COMBO_POINTS = 80,
	EFFECT_CREATE_HOUSE = 81,
	EFFECT_BIND_SIGHT = 82,
	EFFECT_DUEL = 83,
	EFFECT_STUCK = 84,
	EFFECT_SUMMON_PLAYER = 85,
	EFFECT_ACTIVATE_OBJECT = 86,
	EFFECT_SUMMON_TOTEM_SLOT1 = 87,
	EFFECT_SUMMON_TOTEM_SLOT2 = 88,
	EFFECT_SUMMON_TOTEM_SLOT3 = 89,
	EFFECT_SUMMON_TOTEM_SLOT4 = 90,
	EFFECT_THREAT_ALL = 91,
	EFFECT_ENCHANT_HELD_ITEM = 92,
	EFFECT_SUMMON_PHANTASM = 93,
	EFFECT_SELF_RESURRECT = 94,
	EFFECT_SKINNING = 95,
	EFFECT_CHARGE = 96,
	EFFECT_SUMMON_CRITTER = 97,
	EFFECT_KNOCK_BACK = 98,
	EFFECT_DISENCHANT = 99,
	EFFECT_INEBRIATE = 100,
	EFFECT_FEED_PET = 101,
	EFFECT_DISMISS_PET = 102,
	EFFECT_REPUTATION = 103,
	EFFECT_SUMMON_OBJECT_SLOT1 = 104,
	EFFECT_SUMMON_OBJECT_SLOT2 = 105,
	EFFECT_SUMMON_OBJECT_SLOT3 = 106,
	EFFECT_SUMMON_OBJECT_SLOT4 = 107,
	EFFECT_DISPEL_MECHANIC = 108,
	EFFECT_SUMMON_DEAD_PET = 109,
	EFFECT_DESTROY_ALL_TOTEMS = 110,
	EFFECT_DURABILITY_DAMAGE = 111,
	EFFECT_SUMMON_DEMON = 112,
	EFFECT_RESURRECT_FLAT = 113,
	EFFECT_ATTACK_ME = 114,
	EFFECT_DURABILITY_DMG_PERCENT = 115,
	EFFECT_SKIN_PLAYER_CORPSE = 116,
	EFFECT_SPIRIT_HEAL = 117
} SpellEffect;

typedef enum {
	EFF_TARGET_NONE					= 0,
	EFF_TARGET_SELF					= 1,
	EFF_TARGET_PET					= 5,
	EFF_TARGET_SINGLE_ENEMY			= 6,
	EFF_TARGET_ALL_ENEMY_IN_AREA			= 15,
	EFF_TARGET_ALL_ENEMY_IN_AREA_INSTANT	= 16,
	EFF_TARGET_ALL_PARTY_AROUND_CASTER		= 20,
	EFF_TARGET_SINGLE_FRIEND				= 21,
	EFF_TARGET_ALL_ENEMIES_AROUND_CASTER	= 22,
	EFF_TARGET_GAMEOBJECT					= 23,
	EFF_TARGET_IN_FRONT_OF_CASTER			= 24,
	EFF_TARGET_DUEL							= 25,//Dont know the real name!!!
	EFF_TARGET_GAMEOBJECT_ITEM				= 26,
	EFF_TARGET_ALL_ENEMY_IN_AREA_CHANNELED	= 28,
	EFF_TARGET_MINION						= 32,
	EFF_TARGET_SINGLE_PARTY					= 35,
	EFF_TARGET_TOTEM_EARTH					= 41,
	EFF_TARGET_TOTEM_WATER					= 42,
	EFF_TARGET_TOTEM_AIR					= 43,
	EFF_TARGET_TOTEM_FIRE					= 44,
	EFF_TARGET_CHAIN						= 45,
	EFF_TARGET_RITUAL						= 47,
	EFF_TARGET_CURRENT_SELECTION			= 53
} SpellEffectTarget;

typedef map<uint32, SpellEntry *> SpellLookupTable;
extern SpellLookupTable spell_defs;

bool AbilityRequiresComboPoints (uint32 sp);	// check if spell requires combo points
bool RequiresCasterBehindTarget (uint32 sp);	// check if spell requires attacker behind the target

#endif
