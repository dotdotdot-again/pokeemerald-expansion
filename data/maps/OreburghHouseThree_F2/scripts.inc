OreburghHouseThree_F2_MapScripts::
	.byte 0


OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis::
# 4 "data/maps/OreburghHouseThree_F2/scripts.pory"
	lock
# 5 "data/maps/OreburghHouseThree_F2/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_114_PROTEIN, OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_2
# 21 "data/maps/OreburghHouseThree_F2/scripts.pory"
	msgbox OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_Text_1, MSGBOX_NPC
OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_1:
# 27 "data/maps/OreburghHouseThree_F2/scripts.pory"
	release
	return

OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_2:
# 7 "data/maps/OreburghHouseThree_F2/scripts.pory"
	msgbox OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_Text_0, MSGBOX_NPC
# 11 "data/maps/OreburghHouseThree_F2/scripts.pory"
	waitmessage
# 12 "data/maps/OreburghHouseThree_F2/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 13 "data/maps/OreburghHouseThree_F2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_PROTEIN
# 14 "data/maps/OreburghHouseThree_F2/scripts.pory"
	msgbox OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_Text_1, MSGBOX_NPC
	goto OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_1


OreburghCityEastHouse2F_Text_TheOreburghMineIsOperatedWithTheUtmostCare::
# 31 "data/maps/OreburghHouseThree_F2/scripts.pory"
	lock
# 32 "data/maps/OreburghHouseThree_F2/scripts.pory"
	msgbox OreburghCityEastHouse2F_Text_TheOreburghMineIsOperatedWithTheUtmostCare_Text_0, MSGBOX_NPC
# 36 "data/maps/OreburghHouseThree_F2/scripts.pory"
	release
	return


OreburghCityEastHouse2F_Text_CoalIsCarriedOutOfTheOreburghMineOnAFullyAutomatedSystem::
# 40 "data/maps/OreburghHouseThree_F2/scripts.pory"
	lock
# 41 "data/maps/OreburghHouseThree_F2/scripts.pory"
	msgbox OreburghCityEastHouse2F_Text_CoalIsCarriedOutOfTheOreburghMineOnAFullyAutomatedSystem_Text_0, MSGBOX_NPC
# 45 "data/maps/OreburghHouseThree_F2/scripts.pory"
	release
	return


OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_Text_0:
# 7 "data/maps/OreburghHouseThree_F2/scripts.pory"
	.string "Wow... Your Pokémon’s eyes are\n"
	.string "twinkling brightly!\p"
	.string "Seeing that makes me happy!\n"
	.string "Here, I want you to have this!\p$"

OreburghCityEastHouse2F_Text_HereIWantYouToHaveThis_Text_1:
# 14 "data/maps/OreburghHouseThree_F2/scripts.pory"
	.string "You know how Pokémon stay inside\n"
	.string "their Poké Balls?\p"
	.string "I try to think about what would be\n"
	.string "the best Poké Balls for them.$"

OreburghCityEastHouse2F_Text_TheOreburghMineIsOperatedWithTheUtmostCare_Text_0:
# 32 "data/maps/OreburghHouseThree_F2/scripts.pory"
	.string "The Oreburgh Mine is operated\n"
	.string "with the utmost care.\p"
	.string "We avoid causing any damage to\n"
	.string "the natural habitats of Pokémon.$"

OreburghCityEastHouse2F_Text_CoalIsCarriedOutOfTheOreburghMineOnAFullyAutomatedSystem_Text_0:
# 41 "data/maps/OreburghHouseThree_F2/scripts.pory"
	.string "Coal is carried out of Oreburgh Mine on\n"
	.string "a fully automated system.\p"
	.string "Machines do all the work automatically.\n"
	.string "So, it’s all very easy.$"
