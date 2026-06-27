BarryHouseF2_MapScripts::
# 2 "data/maps/BarryHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition_BarryF2
# 3 "data/maps/BarryHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BarryHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BarryHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/BarryHouseF2/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrame_BarryF2
	.2byte 0


OnTransition_BarryF2::
# 10 "data/maps/BarryHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrame_BarryF2::
# 16 "data/maps/BarryHouseF2/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq EveryFrame_BarryF2_1
# 46 "data/maps/BarryHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrame_BarryF2_1:
# 18 "data/maps/BarryHouseF2/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 19 "data/maps/BarryHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 20 "data/maps/BarryHouseF2/scripts.pory"
	msgbox EveryFrame_BarryF2_Text_0, MSGBOX_NPC
# 22 "data/maps/BarryHouseF2/scripts.pory"
	waitmessage
# 23 "data/maps/BarryHouseF2/scripts.pory"
	applymovement BarryHome, EveryFrame_BarryF2_Movement_0
# 24 "data/maps/BarryHouseF2/scripts.pory"
	waitmovement
# 25 "data/maps/BarryHouseF2/scripts.pory"
	applymovement BarryHome, EveryFrame_BarryF2_Movement_1
# 26 "data/maps/BarryHouseF2/scripts.pory"
	playse SE_PIN
# 27 "data/maps/BarryHouseF2/scripts.pory"
	waitse
# 28 "data/maps/BarryHouseF2/scripts.pory"
	waitmovement
# 29 "data/maps/BarryHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 30 "data/maps/BarryHouseF2/scripts.pory"
	msgbox EveryFrame_BarryF2_Text_1, MSGBOX_NPC
# 33 "data/maps/BarryHouseF2/scripts.pory"
	applymovement BarryHome, EveryFrame_BarryF2_Movement_2
# 34 "data/maps/BarryHouseF2/scripts.pory"
	waitmovement
# 35 "data/maps/BarryHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrame_BarryF2_Movement_3
# 36 "data/maps/BarryHouseF2/scripts.pory"
	applymovement BarryHome, EveryFrame_BarryF2_Movement_4
# 37 "data/maps/BarryHouseF2/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/BarryHouseF2/scripts.pory"
	waitmovementall
# 39 "data/maps/BarryHouseF2/scripts.pory"
	removeobject BarryHome
# 40 "data/maps/BarryHouseF2/scripts.pory"
	setflag BARRY_INTRO_THREE
# 41 "data/maps/BarryHouseF2/scripts.pory"
	fadedefaultbgm
# 42 "data/maps/BarryHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
# 43 "data/maps/BarryHouseF2/scripts.pory"
	releaseall
	return


wii_barry_text::
# 51 "data/maps/BarryHouseF2/scripts.pory"
	msgbox wii_barry_text_Text_0, MSGBOX_SIGN
	return


barry_f2_tv_text::
# 56 "data/maps/BarryHouseF2/scripts.pory"
	msgbox barry_f2_tv_text_Text_0, MSGBOX_SIGN
	return


barry_f2_PC::
# 60 "data/maps/BarryHouseF2/scripts.pory"
	msgbox barry_f2_PC_Text_0, MSGBOX_SIGN
	return


# 23 "data/maps/BarryHouseF2/scripts.pory"
EveryFrame_BarryF2_Movement_0:
# 23 "data/maps/BarryHouseF2/scripts.pory"
	face_left
	step_end

# 25 "data/maps/BarryHouseF2/scripts.pory"
EveryFrame_BarryF2_Movement_1:
# 25 "data/maps/BarryHouseF2/scripts.pory"
	emote_exclamation_mark
	step_end

# 33 "data/maps/BarryHouseF2/scripts.pory"
EveryFrame_BarryF2_Movement_2:
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_down
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
# 33 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_up
# 33 "data/maps/BarryHouseF2/scripts.pory"
	face_right
	step_end

# 35 "data/maps/BarryHouseF2/scripts.pory"
EveryFrame_BarryF2_Movement_3:
# 35 "data/maps/BarryHouseF2/scripts.pory"
	walk_down
# 35 "data/maps/BarryHouseF2/scripts.pory"
	face_up
	step_end

# 36 "data/maps/BarryHouseF2/scripts.pory"
EveryFrame_BarryF2_Movement_4:
# 36 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
# 36 "data/maps/BarryHouseF2/scripts.pory"
	walk_fast_left
	step_end

EveryFrame_BarryF2_Text_0:
# 20 "data/maps/BarryHouseF2/scripts.pory"
	.string "...I’d better take\n"
	.string "my Bag and Journal, too...$"

EveryFrame_BarryF2_Text_1:
# 30 "data/maps/BarryHouseF2/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a 10 million fine if you're late!$"

wii_barry_text_Text_0:
# 51 "data/maps/BarryHouseF2/scripts.pory"
	.string "It’s a Wii!\n"
	.string "It’s controlled by a Wii Remote!$"

barry_f2_tv_text_Text_0:
# 56 "data/maps/BarryHouseF2/scripts.pory"
	.string "It’s a TV, how intresting.$"

barry_f2_PC_Text_0:
# 60 "data/maps/BarryHouseF2/scripts.pory"
	.string "You checked the PC screen.\p"
	.string "Adventure Rule No. 1\n"
	.string "The Select Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here...$"
