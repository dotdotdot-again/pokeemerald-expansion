PlayerHouseF2_MapScripts::
# 5 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTest
# 2 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/PlayerHouseF2/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, trigger_test
	.2byte 0

PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/PlayerHouseF2/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameTest
	.2byte 0


trigger_test::
# 12 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, trigger_test_Movement_0
# 13 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
	return


OnTransitionTest::
# 20 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameTest::
# 26 "data/maps/PlayerHouseF2/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 0
	goto_if_eq EveryFrameTest_1
# 44 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameTest_1:
# 28 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 29 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 30 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 38 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 39 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 40 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
# 41 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksRight::
# 49 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 50 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 51 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_WARP_IN
# 52 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 53 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 54 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 55 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 56 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 57 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_1
# 59 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 60 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 69 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 71 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_2
# 73 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 74 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 75 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 76 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 77 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 79 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 80 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 81 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 82 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_3
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_5
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 87 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_4
# 93 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_6
# 95 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 96 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 97 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 98 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 99 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 100 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 101 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryEnters::
# 105 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 106 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 107 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker BarryEnters_Text_0
# 108 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryEnters_Text_1
# 109 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 110 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 111 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 112 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


# 12 "data/maps/PlayerHouseF2/scripts.pory"
trigger_test_Movement_0:
# 12 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 54 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_0:
# 54 "data/maps/PlayerHouseF2/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_1:
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 72 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_2:
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 74 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_3:
# 74 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 80 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_4:
# 80 "data/maps/PlayerHouseF2/scripts.pory"
	face_right
	step_end

# 85 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_5:
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 94 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_6:
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

EveryFrameTest_Text_0:
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Newscaster$"

EveryFrameTest_Text_1:
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	.string "“Pokémon are by our side, always.\n I hope you will understand the meaning\l of those words.”\p"
	.string "That was the comment left by Prof.\n Rowan, who has returned to Sinnoh from\l the Kanto Region.\p"
	.string "That concludges our special program,\n “Let's Ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV\n on Nationwide Net!\p"
	.string "See You next week,\n same time, same channel$"

BarryWalksRight_Text_0:
# 57 "data/maps/PlayerHouseF2/scripts.pory"
	.string "There you are!$"

BarryWalksRight_Text_1:
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Hey, {PLAYER} \n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan’s that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he’d give us\n"
	.string "some Pokémon!$"

BarryWalksRight_Text_2:
# 77 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

BarryWalksRight_Text_3:
# 82 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

BarryWalksRight_Text_4:
# 87 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, right, right! We’re going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I’ll be waiting outside.\p"
	.string "OK, {PLAYER}? If you’re late, I’m\n"
	.string "fining you $10 million!$"

BarryEnters_Text_0:
# 107 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry$"

BarryEnters_Text_1:
# 108 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry!$"
