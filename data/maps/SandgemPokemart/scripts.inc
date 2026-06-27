SandgemPokemart_MapScripts::
	.byte 0


Sandgem_Pokemart_Guy::
# 4 "data/maps/SandgemPokemart/scripts.pory"
	lockall
# 5 "data/maps/SandgemPokemart/scripts.pory"
	faceplayer
# 6 "data/maps/SandgemPokemart/scripts.pory"
	message Sandgem_Pokemart_Guy_Text_0
# 8 "data/maps/SandgemPokemart/scripts.pory"
	waitmessage
# 9 "data/maps/SandgemPokemart/scripts.pory"
	pokemart Sandgem_Basic
# 10 "data/maps/SandgemPokemart/scripts.pory"
	msgbox Sandgem_Pokemart_Guy_Text_1
# 11 "data/maps/SandgemPokemart/scripts.pory"
	releaseall
	end


	.align 2
# 15 "data/maps/SandgemPokemart/scripts.pory"
Sandgem_Basic:
# 16 "data/maps/SandgemPokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data/maps/SandgemPokemart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/SandgemPokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/SandgemPokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

SandgemTownMart_Text_BuyLotsOfPotions::
# 23 "data/maps/SandgemPokemart/scripts.pory"
	lock
# 24 "data/maps/SandgemPokemart/scripts.pory"
	msgbox SandgemTownMart_Text_BuyLotsOfPotions_Text_0, MSGBOX_NPC
# 28 "data/maps/SandgemPokemart/scripts.pory"
	release
	return


SandgemTownMart_Text_TossAPokeBall::
# 32 "data/maps/SandgemPokemart/scripts.pory"
	lock
# 33 "data/maps/SandgemPokemart/scripts.pory"
	msgbox SandgemTownMart_Text_TossAPokeBall_Text_0, MSGBOX_NPC
# 36 "data/maps/SandgemPokemart/scripts.pory"
	release
	return


Sandgem_Pokemart_Guy_Text_0:
# 6 "data/maps/SandgemPokemart/scripts.pory"
	.string "Welcome!\n"
	.string "What do you need?$"

Sandgem_Pokemart_Guy_Text_1:
# 10 "data/maps/SandgemPokemart/scripts.pory"
	.string "Please come again.$"

SandgemTownMart_Text_BuyLotsOfPotions_Text_0:
# 24 "data/maps/SandgemPokemart/scripts.pory"
	.string "If a Pokémon loses all its HP,\n"
	.string "it can’t battle anymore.\p"
	.string "I’m buying lots of Potions to avoid\n"
	.string "having that happen!$"

SandgemTownMart_Text_TossAPokeBall_Text_0:
# 33 "data/maps/SandgemPokemart/scripts.pory"
	.string "If you come across a Pokémon you’ve\n"
	.string "just gotta have, toss a Poké Ball!\p"
	.string "Never leave home without one!$"
