PlayerHouseF1_MapScripts::
# 2 "data/maps/PlayerHouseF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionPlayerHouseF1
# 3 "data/maps/PlayerHouseF1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouseF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouseF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PlayerHouseF1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameMom
	.2byte 0


OnTransitionPlayerHouseF1::
# 10 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameMom::
# 15 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 2
	goto_if_eq EveryFrameMom_1
# 38 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameMom_1:
# 17 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 18 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 19 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 20 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_1
# 21 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 22 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_2
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 25 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 26 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox EveryFrameMom_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_3
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 33 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 34 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


TalkMom::
# 43 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq TalkMom_1
# 53 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq TalkMom_2
	return

TalkMom_1:
# 45 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 46 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 47 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_0, MSGBOX_NPC
# 51 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_2:
# 55 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 56 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_1, MSGBOX_NPC
# 59 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


PlayerHouseTVF1::
# 64 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq PlayerHouseTVF1_1
	return

PlayerHouseTVF1_1:
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 67 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker PlayerHouseTVF1_Text_0
# 68 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseTVF1_Text_1, MSGBOX_SIGN
# 76 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


triggerMomTryToLeave::
# 81 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 82 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, triggerMomTryToLeave_Movement_0
# 83 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 84 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 85 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, triggerMomTryToLeave_Movement_1
# 86 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 87 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 88 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox triggerMomTryToLeave_Text_0
# 95 "data/maps/PlayerHouseF1/scripts.pory"
	closemessage
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 97 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
# 98 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


# 18 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_0:
# 18 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 20 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_1:
# 20 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_2:
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_3:
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 82 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_0:
# 82 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
# 82 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 85 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_1:
# 85 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

EveryFrameMom_Text_0:
# 26 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don’t know what it was about, but\n"
	.string "he sure was in a hurry!$"

TalkMom_Text_0:
# 47 "data/maps/PlayerHouseF1/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TalkMom_Text_1:
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn’t Barry waiting for you?$"

PlayerHouseTVF1_Text_0:
# 67 "data/maps/PlayerHouseF1/scripts.pory"
	.string "MC$"

PlayerHouseTVF1_Text_1:
# 68 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Here we are!\n"
	.string "It's the contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Tough Contest is...\p"
	.string "Dominic, who overwhelmed with his\n"
	.string "awesomely buffed Pokémon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"

triggerMomTryToLeave_Text_0:
# 88 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don’t go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don’t, so...\p"
	.string "Well, take care, sweetie!$"
