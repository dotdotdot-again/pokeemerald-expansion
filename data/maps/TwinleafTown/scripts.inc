TwinleafTown_MapScripts::
# 2 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTwinleaf
	.byte 0


OnTransitionTwinleaf::
# 9 "data/maps/TwinleafTown/scripts.pory"
	removeobject Twinleaf_Thud_Barry
# 10 "data/maps/TwinleafTown/scripts.pory"
	setflag BARRY_INTRO_TWO
	return


Twinleaf_fatman::
# 14 "data/maps/TwinleafTown/scripts.pory"
	lock
# 15 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_fatman_Text_0, MSGBOX_NPC
# 18 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_playerHouseSign::
# 23 "data/maps/TwinleafTown/scripts.pory"
	lock
# 24 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_playerHouseSign_Text_0, MSGBOX_SIGN
# 25 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_barryHouseSign::
# 29 "data/maps/TwinleafTown/scripts.pory"
	lock
# 30 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_barryHouseSign_Text_0, MSGBOX_SIGN
# 31 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Town_Sign::
# 35 "data/maps/TwinleafTown/scripts.pory"
	lock
# 36 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Town_Sign_Text_0, MSGBOX_SIGN
# 38 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_lady::
# 42 "data/maps/TwinleafTown/scripts.pory"
	lock
# 43 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_lady_Text_0, MSGBOX_NPC
# 47 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_guy::
# 52 "data/maps/TwinleafTown/scripts.pory"
	lock
# 53 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq Twinleaf_outside_guy_1
# 53 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq Twinleaf_outside_guy_1
# 61 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq Twinleaf_outside_guy_2
# 70 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 10
	goto_if_eq Twinleaf_outside_guy_3
	return

Twinleaf_outside_guy_1:
# 55 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_0, MSGBOX_NPC
# 59 "data/maps/TwinleafTown/scripts.pory"
	release
	return

Twinleaf_outside_guy_2:
# 63 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_1, MSGBOX_NPC
	return

Twinleaf_outside_guy_3:
# 72 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_2, MSGBOX_NPC
	return


Twinleaf_trigger_trytoleaveguy::
# 93 "data/maps/TwinleafTown/scripts.pory"
	lock
# 94 "data/maps/TwinleafTown/scripts.pory"
	applymovement Tiwnleaf_outside_guy, Twinleaf_trigger_trytoleaveguy_Movement_0
# 95 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 96 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 97 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_1
# 98 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 99 "data/maps/TwinleafTown/scripts.pory"
	msgbox barryWasLooking, MSGBOX_NPC
# 100 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 101 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 102 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_2
# 103 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 104 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Barry_Thud::
# 108 "data/maps/TwinleafTown/scripts.pory"
	lockall
# 109 "data/maps/TwinleafTown/scripts.pory"
	opendoor 9, 8
# 110 "data/maps/TwinleafTown/scripts.pory"
	addobject Twinleaf_Thud_Barry
# 111 "data/maps/TwinleafTown/scripts.pory"
	clearflag BARRY_INTRO_TWO
# 112 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_Barry_Thud_Movement_0
# 113 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_trigger_trytoleaveguy_Movement_2
# 114 "data/maps/TwinleafTown/scripts.pory"
	waitmovementall
# 115 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_0, MSGBOX_NPC
# 116 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 117 "data/maps/TwinleafTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 118 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_1
# 119 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 120 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 121 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 122 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_1, MSGBOX_NPC
# 126 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_2
# 127 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 128 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_1
# 129 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 130 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 131 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 132 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_3
# 133 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 134 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_2, MSGBOX_NPC
# 136 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 137 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_4
# 138 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 139 "data/maps/TwinleafTown/scripts.pory"
	closedoor 9, 8
# 140 "data/maps/TwinleafTown/scripts.pory"
	fadedefaultbgm
# 141 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 142 "data/maps/TwinleafTown/scripts.pory"
	removeobject Twinleaf_Thud_Barry
# 143 "data/maps/TwinleafTown/scripts.pory"
	setflag Twinleaf_Thud_Barry
# 144 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 145 "data/maps/TwinleafTown/scripts.pory"
	releaseall
	return


Twinleaf_removeBarry::
# 149 "data/maps/TwinleafTown/scripts.pory"
	hideobjectat Twinleaf_Thud_Barry, MAP_TWINLEAF_TOWN
# 150 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 94 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_0:
# 94 "data/maps/TwinleafTown/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 97 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_1:
# 97 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 102 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_2:
# 102 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 112 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_0:
# 112 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 112 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 118 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_1:
# 118 "data/maps/TwinleafTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 126 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_2:
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 132 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_3:
# 132 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 132 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 132 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 132 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 132 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 137 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_4:
# 137 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

Twinleaf_fatman_Text_0:
# 15 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

Twinleaf_playerHouseSign_Text_0:
# 24 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

Twinleaf_barryHouseSign_Text_0:
# 30 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

Twinleaf_Town_Sign_Text_0:
# 36 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

Twinleaf_outside_lady_Text_0:
# 43 "data/maps/TwinleafTown/scripts.pory"
	.string "It’s true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

Twinleaf_outside_guy_Text_0:
# 55 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"

Twinleaf_outside_guy_Text_1:
# 63 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tear off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

Twinleaf_outside_guy_Text_2:
# 72 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off\n"
	.string "in a huge rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier.\n"
	.string "It's still hurting.\l"
	.string "That kid's growing up tough.$"

Twinleaf_Barry_Thud_Text_0:
# 115 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!!$"

Twinleaf_Barry_Thud_Text_1:
# 122 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I’m going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

Twinleaf_Barry_Thud_Text_2:
# 134 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

barryWasLooking::
# 83 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"
