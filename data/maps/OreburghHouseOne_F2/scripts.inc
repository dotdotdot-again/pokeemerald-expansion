OreburghHouseOne_F2_MapScripts::
	.byte 0


OreburghCityNorthwestHouse2F_Text_GivingNicknamesToPokemonIsTheWayToGo::
# 4 "data/maps/OreburghHouseOne_F2/scripts.pory"
	lock
# 5 "data/maps/OreburghHouseOne_F2/scripts.pory"
	msgbox OreburghCityNorthwestHouse2F_Text_GivingNicknamesToPokemonIsTheWayToGo_Text_0, MSGBOX_NPC
# 9 "data/maps/OreburghHouseOne_F2/scripts.pory"
	release
	return


OreburghCityNorthwestHouse2F_Text_ButHeNamedOurPsyduckYellowJustBecauseOfItsColor::
# 13 "data/maps/OreburghHouseOne_F2/scripts.pory"
	lock
# 14 "data/maps/OreburghHouseOne_F2/scripts.pory"
	msgbox OreburghCityNorthwestHouse2F_Text_ButHeNamedOurPsyduckYellowJustBecauseOfItsColor_Text_0, MSGBOX_NPC
# 18 "data/maps/OreburghHouseOne_F2/scripts.pory"
	release
	return


OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike::
# 22 "data/maps/OreburghHouseOne_F2/scripts.pory"
	lock
# 23 "data/maps/OreburghHouseOne_F2/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_114_RARE_CANDY, OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_2
# 32 "data/maps/OreburghHouseOne_F2/scripts.pory"
	msgbox OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_Text_1, MSGBOX_NPC
OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_1:
# 37 "data/maps/OreburghHouseOne_F2/scripts.pory"
	release
	return

OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_2:
# 25 "data/maps/OreburghHouseOne_F2/scripts.pory"
	msgbox OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_Text_0, MSGBOX_NPC
# 27 "data/maps/OreburghHouseOne_F2/scripts.pory"
	giveitem ITEM_DUSK_BALL
# 28 "data/maps/OreburghHouseOne_F2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_RARE_CANDY
	goto OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_1


OreburghCityNorthwestHouse2F_Text_YellowDuuuck::
# 41 "data/maps/OreburghHouseOne_F2/scripts.pory"
	lock
# 42 "data/maps/OreburghHouseOne_F2/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 43 "data/maps/OreburghHouseOne_F2/scripts.pory"
	setspeaker OreburghCityNorthwestHouse2F_Text_YellowDuuuck_Text_0
# 44 "data/maps/OreburghHouseOne_F2/scripts.pory"
	msgbox OreburghCityNorthwestHouse2F_Text_YellowDuuuck_Text_1, MSGBOX_NPC
# 45 "data/maps/OreburghHouseOne_F2/scripts.pory"
	release
	return


OreburghCityNorthwestHouse2F_Text_GivingNicknamesToPokemonIsTheWayToGo_Text_0:
# 5 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "Giving nicknames to Pokémon is\n"
	.string "the way to go.\p"
	.string "It makes you feel as if they're your\n"
	.string "very own.$"

OreburghCityNorthwestHouse2F_Text_ButHeNamedOurPsyduckYellowJustBecauseOfItsColor_Text_0:
# 14 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "But he named our Psyduck “Yellow”\n"
	.string "just because of its color...\p"
	.string "I don’t understand the logic behind\n"
	.string "that at all.$"

OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_Text_0:
# 25 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "Are you catching Pokémon?\n"
	.string "Here, take this if you’d like.$"

OreburghCityNorthwestHouse2F_Text_HereTakeThisIfYoudLike_Text_1:
# 32 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "The Dusk Ball is a Poké Ball designed\n"
	.string "for use in darkness.\p"
	.string "It works better if you use it at\n"
	.string "night or in a cave.$"

OreburghCityNorthwestHouse2F_Text_YellowDuuuck_Text_0:
# 43 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "Yellow$"

OreburghCityNorthwestHouse2F_Text_YellowDuuuck_Text_1:
# 44 "data/maps/OreburghHouseOne_F2/scripts.pory"
	.string "Duuuck?$"
