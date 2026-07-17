OreburghPokemart_MapScripts::
	.byte 0


Oreburgh_Pokemart_Guy::
# 4 "data/maps/OreburghPokemart/scripts.pory"
	lock
# 5 "data/maps/OreburghPokemart/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghPokemart/scripts.pory"
	message Oreburgh_Pokemart_Guy_Text_0
# 7 "data/maps/OreburghPokemart/scripts.pory"
	waitmessage
# 8 "data/maps/OreburghPokemart/scripts.pory"
	pokemart Oreburg_Basic
# 9 "data/maps/OreburghPokemart/scripts.pory"
	msgbox Oreburgh_Pokemart_Guy_Text_1
# 10 "data/maps/OreburghPokemart/scripts.pory"
	release
	end


Oreburgh_Pokemart_Woman::
# 15 "data/maps/OreburghPokemart/scripts.pory"
	lock
# 16 "data/maps/OreburghPokemart/scripts.pory"
	faceplayer
# 17 "data/maps/OreburghPokemart/scripts.pory"
	message Oreburgh_Pokemart_Guy_Text_0
# 18 "data/maps/OreburghPokemart/scripts.pory"
	waitmessage
# 19 "data/maps/OreburghPokemart/scripts.pory"
	pokemart Oreburg_Secondary
# 20 "data/maps/OreburghPokemart/scripts.pory"
	msgbox Oreburgh_Pokemart_Guy_Text_1
# 21 "data/maps/OreburghPokemart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/OreburghPokemart/scripts.pory"
Oreburg_Basic:
# 26 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 32 "data/maps/OreburghPokemart/scripts.pory"
Oreburg_Secondary:
# 33 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 34 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_NET_BALL
# 35 "data/maps/OreburghPokemart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

OreburghCityMart_Text_MoreBadgesMoreItems::
# 39 "data/maps/OreburghPokemart/scripts.pory"
	lock
# 40 "data/maps/OreburghPokemart/scripts.pory"
	msgbox OreburghCityMart_Text_MoreBadgesMoreItems_Text_0, MSGBOX_NPC
# 44 "data/maps/OreburghPokemart/scripts.pory"
	release
	return


OreburghCityMart_Text_TwoStaffOfferDifferentMerchandise::
# 48 "data/maps/OreburghPokemart/scripts.pory"
	lock
# 49 "data/maps/OreburghPokemart/scripts.pory"
	msgbox OreburghCityMart_Text_TwoStaffOfferDifferentMerchandise_Text_0, MSGBOX_NPC
# 53 "data/maps/OreburghPokemart/scripts.pory"
	release
	return


Oreburgh_Pokemart_Guy_Text_0:
# 6 "data/maps/OreburghPokemart/scripts.pory"
	.string "How may I serve you?$"

Oreburgh_Pokemart_Guy_Text_1:
# 9 "data/maps/OreburghPokemart/scripts.pory"
	.string "Please come again.$"

OreburghCityMart_Text_MoreBadgesMoreItems_Text_0:
# 40 "data/maps/OreburghPokemart/scripts.pory"
	.string "The Badges that Pokémon Gyms give you\n"
	.string "are a measure of a Trainer’s worth.\p"
	.string "By getting more Badges, you get to\n"
	.string "buy more items in Poké Marts.$"

OreburghCityMart_Text_TwoStaffOfferDifferentMerchandise_Text_0:
# 49 "data/maps/OreburghPokemart/scripts.pory"
	.string "The Poké Mart is staffed by a lady and\n"
	.string "a young fellow.\p"
	.string "They offer different kinds of\n"
	.string "merchandise. Did you know?$"
