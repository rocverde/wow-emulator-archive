CREATE TABLE `quests` (
  `questId` bigint(20) unsigned NOT NULL auto_increment,
  `zoneId` bigint(20) unsigned NOT NULL default '0',
  `title` longtext,
  `details` longtext,
  `objectives` longtext,
  `completedText` longtext,
  `incompleteText` longtext,
  `targetGuid` bigint(20) unsigned NOT NULL default '0',
  `questItemId1` bigint(20) unsigned NOT NULL default '0',
  `questItemId2` bigint(20) unsigned NOT NULL default '0',
  `questItemId3` bigint(20) unsigned NOT NULL default '0',
  `questItemId4` bigint(20) unsigned NOT NULL default '0',
  `questItemCount1` bigint(20) unsigned NOT NULL default '0',
  `questItemCount2` bigint(20) unsigned NOT NULL default '0',
  `questItemCount3` bigint(20) unsigned NOT NULL default '0',
  `questItemCount4` bigint(20) unsigned NOT NULL default '0',
  `questMobId1` bigint(20) unsigned NOT NULL default '0',
  `questMobId2` bigint(20) unsigned NOT NULL default '0',
  `questMobId3` bigint(20) unsigned NOT NULL default '0',
  `questMobId4` bigint(20) unsigned NOT NULL default '0',
  `questMobCount1` bigint(20) unsigned NOT NULL default '0',
  `questMobCount2` bigint(20) unsigned NOT NULL default '0',
  `questMobCount3` bigint(20) unsigned NOT NULL default '0',
  `questMobCount4` bigint(20) unsigned NOT NULL default '0',
  `numChoiceRewards` int(5) unsigned NOT NULL default '0',
  `choiceItemId1` bigint(20) unsigned NOT NULL default '0',
  `choiceItemId2` bigint(20) unsigned NOT NULL default '0',
  `choiceItemId3` bigint(20) unsigned NOT NULL default '0',
  `choiceItemId4` bigint(20) unsigned NOT NULL default '0',
  `choiceItemId5` bigint(20) unsigned NOT NULL default '0',
  `choiceItemCount1` bigint(20) unsigned NOT NULL default '0',
  `choiceItemCount2` bigint(20) unsigned NOT NULL default '0',
  `choiceItemCount3` bigint(20) unsigned NOT NULL default '0',
  `choiceItemCount4` bigint(20) unsigned NOT NULL default '0',
  `choiceItemCount5` bigint(20) unsigned NOT NULL default '0',
  `numItemRewards` int(5) unsigned NOT NULL default '0',
  `rewardItemId1` bigint(20) unsigned NOT NULL default '0',
  `rewardItemId2` bigint(20) unsigned NOT NULL default '0',
  `rewardItemId3` bigint(20) unsigned NOT NULL default '0',
  `rewardItemId4` bigint(20) unsigned NOT NULL default '0',
  `rewardItemId5` bigint(20) unsigned NOT NULL default '0',
  `rewardItemCount1` bigint(20) unsigned NOT NULL default '0',
  `rewardItemCount2` bigint(20) unsigned NOT NULL default '0',
  `rewardItemCount3` bigint(20) unsigned NOT NULL default '0',
  `rewardItemCount4` bigint(20) unsigned NOT NULL default '0',
  `rewardItemCount5` bigint(20) unsigned NOT NULL default '0',
  `rewardGold` bigint(20) unsigned NOT NULL default '0',
  `questXp` bigint(20) unsigned NOT NULL default '0',
  `originalGuid` bigint(20) unsigned NOT NULL default '0',
  `requiredLevel` bigint(20) unsigned NOT NULL default '0',
  `previousQuest` bigint(20) unsigned NOT NULL default '0',
  PRIMARY KEY  (`questId`)
) TYPE=MyISAM COMMENT='InnoDB free: 18432 kB';
