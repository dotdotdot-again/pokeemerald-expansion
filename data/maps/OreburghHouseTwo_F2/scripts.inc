OreburghHouseTwo_F2_MapScripts::
# 2 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setflag FLAG_TEMP_5
# 5 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	returnqueststate QUEST_SHOW_A_PHANPY
# 6 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	switch VAR_RESULT
# 7 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	case 1, OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 9 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	case 4, OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setflag FLAG_TEMP_5
	return

OreburghHouseTwo_F2_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 10 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	clearflag FLAG_TEMP_5
	return


OreburghCityNorthHouse2F_Text_AllPokemonHaveASpecialPowerCalledAnAbility::
# 17 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	lock
# 18 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_AllPokemonHaveASpecialPowerCalledAnAbility_Text_0, MSGBOX_NPC
# 20 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	release
	return


OreburghCityNorthHouse2F_Text_Phanpy::
# 24 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	lock
# 25 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	playmoncry SPECIES_PHANPY, 0
# 26 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_Phanpy_Text_0, MSGBOX_NPC
# 27 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	release
	return


OreburghCityNorthHouse2F_Text_MyFavoritePokemonAbilityIsMyPachirisusPickup::
# 31 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	lock
# 32 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_MyFavoritePokemonAbilityIsMyPachirisusPickup_Text_0, MSGBOX_NPC
# 36 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	release
	return


OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude::
# 40 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	lockall
# 41 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	returnqueststate QUEST_SHOW_A_PHANPY
# 42 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	case 1, OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_3
# 51 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	case 2, OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_4
# 72 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	case 4, OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_5
OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_1:
# 79 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	releaseall
	return

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_3:
# 44 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setspeaker OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_0
# 45 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_1, MSGBOX_NPC
# 49 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	waitmessage
# 50 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	startquest QUEST_SHOW_A_PHANPY
	goto OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_1

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_4:
# 52 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setspeaker OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_0
# 53 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_1, MSGBOX_NPC
# 57 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	waitmessage
# 58 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	checkspecies SPECIES_PHANPY, NO_PARTY_SCREEN
# 59 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_6
	goto OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_1

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_5:
# 73 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setspeaker OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_3
# 74 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_4, MSGBOX_NPC
# 77 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	waitmessage
	goto OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_1

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_6:
# 61 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	setspeaker OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_0
# 62 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	msgbox OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_2, MSGBOX_NPC
# 69 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	giveitem ITEM_HEAVY_BALL, 5
# 70 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	completequest QUEST_SHOW_A_PHANPY
	goto OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_1


OreburghCityNorthHouse2F_Text_AllPokemonHaveASpecialPowerCalledAnAbility_Text_0:
# 18 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "All Pokémon have a special power\n"
	.string "called an ability.$"

OreburghCityNorthHouse2F_Text_Phanpy_Text_0:
# 26 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "Phan Phan$"

OreburghCityNorthHouse2F_Text_MyFavoritePokemonAbilityIsMyPachirisusPickup_Text_0:
# 32 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "My favorite Pokémon ability is my\n"
	.string "Pachirisu’s Pickup.\p"
	.string "My darling picks up a lot of dropped\n"
	.string "items without me noticing!$"

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_0:
# 44 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "Some Guy$"

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_1:
# 45 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "The view is good from the second floor,\n"
	.string "but it’s a pain going outside.\p"
	.string "If you don’t mind, how about showing me\n"
	.string "a Pokémon called Phanpy?$"

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_2:
# 62 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "Oh, that Pokémon!\n"
	.string "thats a Phanpy!\p"
	.string "It's so cute...\p"
	.string "That does it!\n"
	.string "I’ll go out and catch Pokémon, too!\p"
	.string "Thank you, my friend!\n"
	.string "This is a token of my thanks!$"

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_3:
# 73 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "That Phanpy Guy$"

OreburghCityNorthHouse2F_Text_HowAboutShowingMeAPokemonCalledGeodude_Text_4:
# 74 "data/maps/OreburghHouseTwo_F2/scripts.pory"
	.string "Hey there!\p"
	.string "Thanks again for showing me how\n"
	.string "amazing Phanpy is!$"
