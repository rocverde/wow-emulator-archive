SET FOREIGN_KEY_CHECKS=0;
#----------------------------
# Table structure for creatures_mov
#----------------------------
CREATE TABLE `creatures_mov` (
  `id` bigint(20) NOT NULL auto_increment,
  `creatureId` bigint(20) NOT NULL default '0',
  `X` float NOT NULL default '0',
  `Y` float NOT NULL default '0',
  `Z` float NOT NULL default '0',
  PRIMARY KEY  (`id`)
) TYPE=MyISAM;
#----------------------------
# No records for table creatures_mov
#----------------------------


