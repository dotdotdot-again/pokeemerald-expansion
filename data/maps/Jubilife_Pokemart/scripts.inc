Jubilife_Pokemart_MapScripts::
	.byte 0


Jubilife_Pokemart_Guy::
# 4 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 5 "data/maps/Jubilife_Pokemart/scripts.pory"
	faceplayer
# 6 "data/maps/Jubilife_Pokemart/scripts.pory"
	message Jubilife_Pokemart_Guy_Text_0
# 7 "data/maps/Jubilife_Pokemart/scripts.pory"
	waitmessage
# 8 "data/maps/Jubilife_Pokemart/scripts.pory"
	pokemart Jubilife_Basic
# 9 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox Jubilife_Pokemart_Guy_Text_1
# 10 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	end


Jubilife_Pokemart_Woman::
# 15 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 16 "data/maps/Jubilife_Pokemart/scripts.pory"
	faceplayer
# 17 "data/maps/Jubilife_Pokemart/scripts.pory"
	message Jubilife_Pokemart_Guy_Text_0
# 18 "data/maps/Jubilife_Pokemart/scripts.pory"
	waitmessage
# 19 "data/maps/Jubilife_Pokemart/scripts.pory"
	pokemart Jubilife_Secondary
# 20 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox Jubilife_Pokemart_Guy_Text_1
# 21 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/Jubilife_Pokemart/scripts.pory"
Jubilife_Basic:
# 26 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 32 "data/maps/Jubilife_Pokemart/scripts.pory"
Jubilife_Secondary:
# 33 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 34 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

JubilifeCityMart_Text_WastedMoneyOnPokeBalls::
# 38 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 39 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox JubilifeCityMart_Text_WastedMoneyOnPokeBalls_Text_0, MSGBOX_NPC
# 43 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	return


JubilifeCityMart_Text_PackSomePotions::
# 47 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 48 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox JubilifeCityMart_Text_PackSomePotions_Text_0, MSGBOX_NPC
# 52 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	return


JubilifeCityMart_Text_JustUseARepel::
# 56 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 57 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox JubilifeCityMart_Text_JustUseARepel_Text_0, MSGBOX_NPC
# 63 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	return


Jubilife_Pokemart_Guy_Text_0:
# 6 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "How may I serve you?$"

Jubilife_Pokemart_Guy_Text_1:
# 9 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "Please come again.$"

JubilifeCityMart_Text_WastedMoneyOnPokeBalls_Text_0:
# 39 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "Aww, man.\n"
	.string "I wasted money on some Poké Balls.\p"
	.string "I should’ve lowered the HP of wild\n"
	.string "Pokémon more before throwing them.$"

JubilifeCityMart_Text_PackSomePotions_Text_0:
# 48 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "The one thing you must remember is to\n"
	.string "pack some Potions.\p"
	.string "If all your Pokémon faint, it’ll be\n"
	.string "lights out for you, too!$"

JubilifeCityMart_Text_JustUseARepel_Text_0:
# 57 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "Potions are important, but sometimes,\n"
	.string "it’s better to simply avoid battles.\p"
	.string "If you want to avoid wild Pokémon for a\n"
	.string "while, just use a Repel.\p"
	.string "After all, if you don’t battle, your\n"
	.string "Pokémon can’t lose HP.$"
