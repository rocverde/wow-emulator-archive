
CREATE TABLE `spirithealers` (
  `X` float default NULL,
  `Y` float default NULL,
  `Z` float default NULL,
  `F` float default NULL,
  `name_id` int(8) default NULL,
  `zoneId` int(16) default NULL,
  `mapId` int(16) default NULL,
  `faction_id` int(32) unsigned default NULL
) TYPE=MyISAM;

#----------------------------
# Records for table spirithealers
#----------------------------


insert  into spirithealers values 
('-10779.2', '-1194.16', '35.2092', '0', 6491, 10, 0, 0), 
('-10608.6', '1125.87', '37.3139', '0', 6491, 40, 0, 0), 
('-9392.03', '-2021.59', '58.2747', '0', 6491, 44, 0, 0), 
('-9340.1', '164.063', '61.5395', '0', 6491, 12, 0, 0), 
('-8946.23', '-183.477', '79.8481', '0', 6491, 12, 0, 0), 
('-5685.62', '-513.817', '396.274', '0', 6491, 1, 0, 0), 
('-5350.1', '-2890.96', '341.854', '0', 6491, 38, 0, 0), 
('-3296.98', '-2430.8', '18.4835', '0', 6491, 11, 0, 0), 
('-2176.47', '-336.678', '-6.02402', '0', 6491, 215, 1, 0), 
('-637.768', '-4300.84', '40.9094', '0', 6491, 14, 1, 0), 
('-590.535', '-2516.93', '91.8409', '0', 6491, 17, 1, 0), 
('241.866', '-4791.44', '10.3538', '0', 6491, 14, 1, 0), 
('2349.71', '484.75', '33.3554', '0', 6491, 85, 1, 0), 
('9683.94', '953.23', '1291.72', '0', 6491, 141, 1, 1), 
('10391.9', '826.415', '1317.6', '0', 6491, 141, 1, 1), 
('-3518.63', '-4318.48', '7.82679', '0', 6491, 15, 1, 0);

