Oreburgh_Small_House_MapScripts::
	.byte 0


OreburghCityWestHouse_Text_YouKnowHowPokemonHaveDifferentNaturesLikeWeHavePersonalities::
# 4 "data/maps/Oreburgh_Small_House/scripts.pory"
	lock
# 5 "data/maps/Oreburgh_Small_House/scripts.pory"
	msgbox OreburghCityWestHouse_Text_YouKnowHowPokemonHaveDifferentNaturesLikeWeHavePersonalities_Text_0, MSGBOX_NPC
# 9 "data/maps/Oreburgh_Small_House/scripts.pory"
	release
	return


OreburghCityWestHouse_Text_HaveYouEverSeenOrHeardAboutDifferentlyColoredPokemon::
# 13 "data/maps/Oreburgh_Small_House/scripts.pory"
	lock
# 14 "data/maps/Oreburgh_Small_House/scripts.pory"
	msgbox OreburghCityWestHouse_Text_HaveYouEverSeenOrHeardAboutDifferentlyColoredPokemon_Text_0, MSGBOX_NPC
# 26 "data/maps/Oreburgh_Small_House/scripts.pory"
	release
	return


OreburghCityWestHouse_Text_Geo::
# 30 "data/maps/Oreburgh_Small_House/scripts.pory"
	lock
# 31 "data/maps/Oreburgh_Small_House/scripts.pory"
	playmoncry SPECIES_GEODUDE, 0
# 32 "data/maps/Oreburgh_Small_House/scripts.pory"
	msgbox OreburghCityWestHouse_Text_Geo_Text_0, MSGBOX_NPC
# 33 "data/maps/Oreburgh_Small_House/scripts.pory"
	release
	return


OreburghCityWestHouse_Text_YouKnowHowPokemonHaveDifferentNaturesLikeWeHavePersonalities_Text_0:
# 5 "data/maps/Oreburgh_Small_House/scripts.pory"
	.string "You know how Pokémon have different\n"
	.string "natures like we have personalities?\p"
	.string "I don’t think it’s surprising to see\n"
	.string "Pokémon have different forms.$"

OreburghCityWestHouse_Text_HaveYouEverSeenOrHeardAboutDifferentlyColoredPokemon_Text_0:
# 14 "data/maps/Oreburgh_Small_House/scripts.pory"
	.string "Have you ever seen or heard about\n"
	.string "Pokémon with different forms?\p"
	.string "For instance, a regular Geodude is\n"
	.string "a Rock and Ground type, correct?\p"
	.string "Well, in the Alola region it's a\n"
	.string "Rock and Electric type!\p"
	.string "Alolan Geodudes have also been found\n"
	.string "in Mt. Coronet recently!\p"
	.string "My friend told me it's due to the\n"
	.string "Mountains special magnetic field\l"
	.string "or something like that.\n"
	.string "It's that cool!$"

OreburghCityWestHouse_Text_Geo_Text_0:
# 32 "data/maps/Oreburgh_Small_House/scripts.pory"
	.string "Geo!!!$"
