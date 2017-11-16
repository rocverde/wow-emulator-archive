SET FOREIGN_KEY_CHECKS=0;
#----------------------------
# Table structure for taxinodes
#----------------------------
CREATE TABLE `taxinodes` (
  `ID` tinyint(3) unsigned NOT NULL auto_increment,
  `continent` tinyint(3) unsigned NOT NULL default '0',
  `x` float default NULL,
  `y` float default NULL,
  `z` float default NULL,
  `name` varchar(255) default NULL,
  `flags` mediumint(11) unsigned default NULL,
  `mount` smallint(5) unsigned NOT NULL default '0',
  PRIMARY KEY  (`ID`)
) TYPE=MyISAM COMMENT='InnoDB free: 11264 kB; InnoDB free: 18432 kB';
#----------------------------
# Records for table taxinodes
#----------------------------


insert  into taxinodes values 
(46, 0, '-986.43', '-547.86', '-3.86', 'Southshore Ferry| Hillsbrad', 983070, 1147), 
(35, 1, '1320.07', '-4649.2', '21.57', 'Durotar| Orgrimmar & Grom\'Gol to Undercity Zeppelins', 65538, 0), 
(48, 1, '5068.4', '-337.22', '367.41', 'Bloodvenom River| Felwood', 983054, 0), 
(49, 1, '7793', '-2407.73', '488.84', 'Nighthaven| Moonglade', 983042, 479), 
(55, 1, '-3147.39', '-2842.18', '34.61', 'Brackenwall VIllage| Dustwallow Marsh', 196610, 0), 
(37, 1, '139.24', '1325.82', '193.5', 'Nijel\'s Point| Desolace', 65538, 479), 
(47, 0, '-12418.8', '235.43', '1.12', 'Stranglethorn| Grom\'Gol to Orgrimmar Zeppelin', 65538, 0), 
(1, 0, '-8888.98', '-0.54', '94.39', 'Northshire Abbey', 7274526, 1147), 
(2, 0, '-8840.56', '489.7', '109.61', 'Stormwind| Elwynn', 983054, 1147), 
(3, 0, '16391.8', '16341.2', '69.44', 'Programmer Isle', 983070, 0), 
(4, 0, '-10628.9', '1036.68', '34.06', 'Sentinel Hill| Westfall', 983054, 1147), 
(5, 0, '-9429.1', '-2231.4', '68.65', 'Lakeshire| Redridge', 983054, 1147), 
(6, 0, '-4821.78', '-1155.44', '502.21', 'Ironforge| Dun Morogh', 983054, 1147), 
(7, 0, '-3792.26', '-783.29', '9.06', 'Menethil Harbor| Wetlands', 983054, 1147), 
(8, 0, '-5421.91', '-2930.01', '347.25', 'Thelsamar| Loch Modan', 983054, 1147), 
(9, 0, '-14271.8', '299.87', '31.09', 'Booty Bay| Stranglethorn', 7274526, 0), 
(10, 0, '478.86', '1536.59', '131.32', 'Sepulcher| Silverpine', 7274526, 1566), 
(11, 0, '1568.62', '267.97', '-43.1', 'Undercity| Tirisfal', 983070, 1566), 
(12, 0, '-10515.5', '-1261.65', '41.34', 'Darkshire| Duskwood', 983054, 1147), 
(13, 0, '-0.11', '-860.12', '58.82', 'Tarren Mill| Hillsbrad', 7274526, 1566), 
(14, 0, '-711.48', '-515.48', '26.11', 'Southshore| Hillsbrad', 983054, 1147), 
(15, 0, '2253.4', '-5344.9', '83.38', 'Eastern Plaguelands', 7274526, 0), 
(16, 0, '-1240.53', '-2515.11', '22.16', 'Refuge Pointe| Arathi', 65538, 1147), 
(17, 0, '-920.24', '-3496.76', '70.48', 'Hammerfall| Arathi', 65538, 1566), 
(18, 0, '-14444.3', '509.62', '26.2', 'Booty Bay| Stranglethorn', 65538, 1566), 
(19, 0, '-14473', '464.15', '36.43', 'Booty Bay| Stranglethorn', 65538, 1147), 
(21, 0, '-6633.38', '-2184.3', '244.14', 'Kargath| Badlands', 65538, 1566), 
(22, 1, '-1197.21', '29.71', '176.95', 'Thunder Bluff| Mulgore', 65538, 295), 
(23, 1, '1677.59', '-4315.71', '61.17', 'Orgrimmar| Durotar', 65538, 295), 
(25, 1, '-441.8', '-2596.08', '96.06', 'Crossroads| The Barrens', 65538, 295), 
(26, 1, '6341.38', '557.68', '16.29', 'Auberdine| Darkshore', 983054, 479), 
(27, 1, '8643.59', '841.05', '23.3', 'Rut\'theran Village| Teldrassil', 65538, 479), 
(28, 1, '2827.34', '-289.24', '107.16', 'Astranaar| Ashenvale', 65538, 479), 
(29, 1, '966.57', '1040.32', '104.27', 'Sun Rock Retreat| Stonetalon Mountains', 65538, 295), 
(31, 1, '-4491.78', '-775.85', '-39.5', 'Thalanaar| Thousand Needles', 65538, 479), 
(32, 1, '-3825.37', '-4516.58', '10.44', 'Theramore| Dustwallow Marsh', 65538, 479), 
(33, 1, '2681.13', '1461.68', '232.88', 'Stonetalon Peak| Stonetalon Mountains', 65538, 479), 
(36, 0, '0', '0', '0', 'TEST', 7274526, 479), 
(56, 0, '-10457.8', '-3278.59', '21.36', 'Stonard| Swamp of Sorrows', 65538, 1566), 
(57, 1, '8701.51', '991.37', '14.21', 'FIshing Village| Teldrassil', 65538, 0), 
(40, 1, '-7048.89', '-3780.36', '10.19', 'Gadgetzan| Tanaris', 983070, 295), 
(45, 0, '-11112.3', '-3435.74', '79.09', 'Nethergarde Keep| Blasted Lands', 983070, 1147), 
(38, 1, '-1767.64', '3263.89', '4.94', 'Shadowprey Village| Desolace', 65538, 295), 
(41, 1, '-4373.8', '3338.65', '12.27', 'Feathermoon| Feralas', 983070, 479), 
(42, 1, '-4419.86', '199.31', '25.06', 'Camp Mojache| Feralas', 983070, 295), 
(43, 0, '283.74', '-2002.76', '194.74', 'Aerie Peak| The Hinterlands', 983054, 1147), 
(20, 0, '-12414.2', '146.29', '3.28', 'Grom\'gol| Stranglethorn', 65538, 1566), 
(30, 1, '-5407.71', '-2414.3', '90.32', 'Freewind Post| Thousand Needles', 65538, 295), 
(51, 0, '0', '0', '0', 'Rut\'theran to Auberdine Boat', 983042, 0), 
(52, 1, '6799.24', '-4742.44', '701.5', 'Everlook| Winterspring', 983042, 479), 
(53, 1, '6813.06', '-4611.12', '710.67', 'Everlook| Winterspring', 983042, 295), 
(58, 1, '3374.71', '996.97', '5.19', 'Coast of Ashenvale', 196610, 0), 
(39, 1, '-7223.97', '-3734.59', '8.39', 'Gadgetzan| Tanaris', 983070, 479), 
(44, 1, '3661.52', '-4390.38', '113.05', 'Valormok| Azshara', 983054, 295), 
(50, 0, '0', '0', '0', 'Menethil to Theramore Boat Path', 983042, 0), 
(24, 0, '-6666', '-2222.3', '278.6', 'Generic| World target for Zeppelin Paths', 65536, 0), 
(34, 1, '-1965.17', '-5824.29', '-1.06', 'The Barrens| Ratchet to Booty Bay Boat', 65538, 0), 
(54, 1, '-4203.87', '3284', '-12.86', 'Feralas| Feathermoon Stronghold - Boat', 65538, 0);

