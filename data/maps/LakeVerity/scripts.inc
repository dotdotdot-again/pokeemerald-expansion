LakeVerity_MapScripts::
	.byte 0


meetCyrus_lake_ver::
# 4 "data/maps/LakeVerity/scripts.pory"
	lockall
# 6 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, meetCyrus_lake_ver_Movement_0
# 7 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_0
# 8 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 9 "data/maps/LakeVerity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 10 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 12 "data/maps/LakeVerity/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, meetCyrus_lake_ver_Movement_1
# 14 "data/maps/LakeVerity/scripts.pory"
	waitmovement
# 15 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_1, MSGBOX_AUTOCLOSE
# 21 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 22 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, meetCyrus_lake_ver_Movement_2
# 23 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerCyrus, meetCyrus_lake_ver_Movement_3
# 24 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 25 "data/maps/LakeVerity/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 29 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, meetCyrus_lake_ver_Movement_4
# 30 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_5
# 31 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 32 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerCyrus, meetCyrus_lake_ver_Movement_6
# 33 "data/maps/LakeVerity/scripts.pory"
	waitmovement
# 34 "data/maps/LakeVerity/scripts.pory"
	removeobject LakeVerCyrus
# 35 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 36 "data/maps/LakeVerity/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, meetCyrus_lake_ver_Movement_7
# 38 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_8
# 39 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 40 "data/maps/LakeVerity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 41 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_3, MSGBOX_AUTOCLOSE
# 43 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 44 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, meetCyrus_lake_ver_Movement_4
# 45 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_9
# 46 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 47 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_4
# 49 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 50 "data/maps/LakeVerity/scripts.pory"
	playmoncry SPECIES_MESPRIT, 0
# 51 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_5
# 52 "data/maps/LakeVerity/scripts.pory"
	waitmoncry
# 53 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 54 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_10
# 55 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 56 "data/maps/LakeVerity/scripts.pory"
	waitse
# 57 "data/maps/LakeVerity/scripts.pory"
	waitmovement
# 58 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_11
# 59 "data/maps/LakeVerity/scripts.pory"
	waitmovementall
# 60 "data/maps/LakeVerity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 61 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_6, MSGBOX_AUTOCLOSE
# 67 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 68 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_10
# 69 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 70 "data/maps/LakeVerity/scripts.pory"
	waitse
# 71 "data/maps/LakeVerity/scripts.pory"
	waitmovement
# 72 "data/maps/LakeVerity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 73 "data/maps/LakeVerity/scripts.pory"
	msgbox meetCyrus_lake_ver_Text_7, MSGBOX_AUTOCLOSE
# 90 "data/maps/LakeVerity/scripts.pory"
	waitmessage
# 91 "data/maps/LakeVerity/scripts.pory"
	applymovement LakeVerBarry, meetCyrus_lake_ver_Movement_12
# 92 "data/maps/LakeVerity/scripts.pory"
	waitmovement
# 93 "data/maps/LakeVerity/scripts.pory"
	removeobject LakeVerBarry
# 94 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 95 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 10
# 96 "data/maps/LakeVerity/scripts.pory"
	releaseall
	return


# 6 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_0:
# 6 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 6 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 13 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_1:
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 13 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_2:
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 22 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 23 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_3:
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 23 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_4:
# 29 "data/maps/LakeVerity/scripts.pory"
	face_right
	step_end

# 30 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_5:
# 30 "data/maps/LakeVerity/scripts.pory"
	walk_right
# 30 "data/maps/LakeVerity/scripts.pory"
	face_left
	step_end

# 32 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_6:
# 32 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 32 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 32 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_7:
# 37 "data/maps/LakeVerity/scripts.pory"
	face_down
	step_end

# 38 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_8:
# 38 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 38 "data/maps/LakeVerity/scripts.pory"
	face_down
	step_end

# 45 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_9:
# 45 "data/maps/LakeVerity/scripts.pory"
	face_left
	step_end

# 54 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_10:
# 54 "data/maps/LakeVerity/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_11:
# 58 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 58 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 58 "data/maps/LakeVerity/scripts.pory"
	face_right
# 58 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 58 "data/maps/LakeVerity/scripts.pory"
	face_left
# 58 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 58 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 58 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 58 "data/maps/LakeVerity/scripts.pory"
	face_left
	step_end

# 91 "data/maps/LakeVerity/scripts.pory"
meetCyrus_lake_ver_Movement_12:
# 91 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 91 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
	step_end

meetCyrus_lake_ver_Text_0:
# 10 "data/maps/LakeVerity/scripts.pory"
	.string "What's going on...?$"

meetCyrus_lake_ver_Text_1:
# 15 "data/maps/LakeVerity/scripts.pory"
	.string "...The flowing time...\n"
	.string "...The expanding space...\p"
	.string "I will make it all mine one day...\n"
	.string "Cyrus is my name. Remember it...\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokémon of the lake bed...$"

meetCyrus_lake_ver_Text_2:
# 26 "data/maps/LakeVerity/scripts.pory"
	.string "Allow me to pass.\n"
	.string "Step aside.$"

meetCyrus_lake_ver_Text_3:
# 41 "data/maps/LakeVerity/scripts.pory"
	.string "What was that about?\n"
	.string "Weird guy...$"

meetCyrus_lake_ver_Text_4:
# 47 "data/maps/LakeVerity/scripts.pory"
	.string "OK, {PLAYER}!\n"
	.string "Let’s catch that legendary Pokémon!$"

meetCyrus_lake_ver_Text_5:
# 51 "data/maps/LakeVerity/scripts.pory"
	.string "Kyauuun!$"

meetCyrus_lake_ver_Text_6:
# 61 "data/maps/LakeVerity/scripts.pory"
	.string "!\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokémon crying!\n"
	.string "That had to be it!\p"
	.string "OK! This is our chance!\n"
	.string "Let’s catch it!$"

meetCyrus_lake_ver_Text_7:
# 73 "data/maps/LakeVerity/scripts.pory"
	.string "...Wait!\n"
	.string "What...?!\p"
	.string "We don’t have anything on us!\p"
	.string "You know, Poké Balls!\n"
	.string "P-O-K-accent-E Balls!\p"
	.string "If we don’t have those, we can’t catch\n"
	.string "Pokémon or take them around with us!\p"
	.string "...Do you think Prof. Rowan’d give us\n"
	.string "some if we asked him?\p"
	.string "You know, you remember what he said,\n"
	.string "don’t you?\p"
	.string "He said to visit him at his lab if we\n"
	.string "needed anything.\p"
	.string "OK, {PLAYER}!\n"
	.string "I’ll race you!\p"
	.string "First one to the professor’s lab in\n"
	.string "Sandgem Town rules!$"
