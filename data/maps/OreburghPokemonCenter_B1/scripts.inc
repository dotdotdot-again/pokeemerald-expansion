OreburghPokemonCenter_B1_MapScripts::
	.byte 0


reburghPokemonCenter_B1_WelcomeTemp::
# 4 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 5 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 6 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox reburghPokemonCenter_B1_WelcomeTemp_Text_0, MSGBOX_NPC
# 10 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


OreburghPokemonCenter_B1_Snake::
# 15 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 16 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	showmoneybox 0, 0, 0
# 17 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox OreburghPokemonCenter_B1_Snake_Text_0, MSGBOX_YESNO
# 19 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OreburghPokemonCenter_B1_Snake_2
OreburghPokemonCenter_B1_Snake_1:
# 55 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	hidemoneybox
# 56 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return

OreburghPokemonCenter_B1_Snake_2:
# 20 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	checkmoney 100, 1
# 21 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OreburghPokemonCenter_B1_Snake_4
# 51 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	hidemoneybox
# 52 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox OreburghPokemonCenter_B1_Snake_Text_2, MSGBOX_SIGN
	goto OreburghPokemonCenter_B1_Snake_1

OreburghPokemonCenter_B1_Snake_4:
# 22 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	removemoney 100, 0
# 23 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	playse SE_SHOP
# 24 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	updatemoneybox
# 25 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitse
# 26 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	hidemoneybox
# 27 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	setvar VAR_TEMP_5, 0
# 28 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 29 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	playbgm MUS_NONE, FALSE
# 30 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	special StartSnake
# 31 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitstate
# 32 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	savebgm MUS_DUMMY
# 33 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	fadedefaultbgm
OreburghPokemonCenter_B1_Snake_8:
# 35 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 0
	goto_if_eq OreburghPokemonCenter_B1_Snake_11
# 38 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	addvar VAR_PLAYER_POINTS, 1
# 39 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	addvar VAR_TEMP_5, 1
# 40 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	compare VAR_TEMP_5, GAME_CORNER_VAR_WINNINGS
	goto_if_eq OreburghPokemonCenter_B1_Snake_13
	goto OreburghPokemonCenter_B1_Snake_8

OreburghPokemonCenter_B1_Snake_7:
# 44 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	buffernumberstring STR_VAR_2, GAME_CORNER_VAR_WINNINGS
# 45 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 46 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox OreburghPokemonCenter_B1_Snake_Text_1, MSGBOX_NPC
# 48 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
	goto OreburghPokemonCenter_B1_Snake_1

OreburghPokemonCenter_B1_Snake_11:
	goto OreburghPokemonCenter_B1_Snake_7

OreburghPokemonCenter_B1_Snake_13:
	goto OreburghPokemonCenter_B1_Snake_7


OreburghPokemonCenter_B1_OtherGame::
# 60 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 61 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox OreburghPokemonCenter_B1_OtherGame_Text_0
# 62 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


kidPlayingOre::
# 66 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 67 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	applymovement 3, kidPlayingOre_Movement_0
# 68 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitmovement
# 69 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox kidPlayingOre_Text_0
# 75 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitmessage
# 76 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	applymovement 3, kidPlayingOre_Movement_1
# 77 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitmovement
# 78 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


Mom_B1_Ore::
# 83 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 84 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox Mom_B1_Ore_Text_0, MSGBOX_NPC
# 88 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


GuyPlayingOre::
# 92 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 93 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox GuyPlayingOre_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	waitmessage
# 98 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


Ore_b1_meow::
# 102 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	lock
# 103 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 104 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	msgbox Ore_b1_meow_Text_0, MSGBOX_NPC
# 105 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	release
	return


# 67 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
kidPlayingOre_Movement_0:
# 67 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	face_player
	step_end

# 76 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
kidPlayingOre_Movement_1:
# 76 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	face_up
	step_end

reburghPokemonCenter_B1_WelcomeTemp_Text_0:
# 6 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "Hello and welcome to the game hub\n"
	.string "you have {STR_VAR_1} points.\p"
	.string "you'll be able to buy stuff from me with\n"
	.string "points in a later version of the game.$"

OreburghPokemonCenter_B1_Snake_Text_0:
# 17 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "It's an Onix arcade machine that costs\n"
	.string "100 to per play, do you wanna play?$"

OreburghPokemonCenter_B1_Snake_Text_1:
# 46 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "You got {STR_VAR_2}\n"
	.string "You now have {STR_VAR_1} points$"

OreburghPokemonCenter_B1_Snake_Text_2:
# 52 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "You don't seem to have enough.$"

OreburghPokemonCenter_B1_OtherGame_Text_0:
# 61 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "Its another arcade game$"

kidPlayingOre_Text_0:
# 69 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "This Onix game is so fun!\p"
	.string "You should give it a try on the\n"
	.string "machine next to mine!\p"
	.string "It'd say you should also try the\n"
	.string "Block stacking game but it think my\l"
	.string "dad's gonna be trying that one for\lawhile.$"

Mom_B1_Ore_Text_0:
# 84 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "My kid really does take after is\n"
	.string "father doesn't it?\p"
	.string "though it seems he got his gaming skills\n"
	.string "from his mother.$"

GuyPlayingOre_Text_0:
# 93 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "Ugh! Ragh! Agh\n"
	.string "This game is impossble!\p"
	.string "How did my kid make it look\n"
	.string "so easy earlier!$"

Ore_b1_meow_Text_0:
# 104 "data/maps/OreburghPokemonCenter_B1/scripts.pory"
	.string "Meeeow!$"
