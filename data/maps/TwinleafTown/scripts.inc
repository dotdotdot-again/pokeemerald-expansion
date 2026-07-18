TwinleafTown_MapScripts::
# 2 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTwinleaf
# 3 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_TEMP_4
# 8 "data/maps/TwinleafTown/scripts.pory"
	random 5
# 9 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/TwinleafTown/scripts.pory"
	case 0, TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 13 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 16 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 18 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 15 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return

TwinleafTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 20 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 21 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return


OnTransitionTwinleaf::
# 30 "data/maps/TwinleafTown/scripts.pory"
	removeobject Twinleaf_Thud_Barry
# 31 "data/maps/TwinleafTown/scripts.pory"
	setflag BARRY_INTRO_TWO
	return


Twinleaf_fatman::
# 35 "data/maps/TwinleafTown/scripts.pory"
	lock
# 36 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_fatman_Text_0, MSGBOX_NPC
# 39 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_playerHouseSign::
# 44 "data/maps/TwinleafTown/scripts.pory"
	lock
# 45 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_playerHouseSign_Text_0, MSGBOX_SIGN
# 46 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_barryHouseSign::
# 50 "data/maps/TwinleafTown/scripts.pory"
	lock
# 51 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_barryHouseSign_Text_0, MSGBOX_SIGN
# 52 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Town_Sign::
# 56 "data/maps/TwinleafTown/scripts.pory"
	lock
# 57 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Town_Sign_Text_0, MSGBOX_SIGN
# 59 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_lady::
# 63 "data/maps/TwinleafTown/scripts.pory"
	lock
# 64 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_lady_Text_0, MSGBOX_NPC
# 68 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_guy::
# 73 "data/maps/TwinleafTown/scripts.pory"
	lock
# 74 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, Twinleaf_outside_guy_1
# 81 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq Twinleaf_outside_guy_4
# 81 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq Twinleaf_outside_guy_4
# 89 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq Twinleaf_outside_guy_5
# 89 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 7
	goto_if_eq Twinleaf_outside_guy_5
# 89 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 8
	goto_if_eq Twinleaf_outside_guy_5
# 89 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 9
	goto_if_eq Twinleaf_outside_guy_5
# 99 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 10
	goto_if_eq Twinleaf_outside_guy_6
# 108 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_3, MSGBOX_NPC
	return

Twinleaf_outside_guy_1:
# 76 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_0, MSGBOX_NPC
	return

Twinleaf_outside_guy_4:
# 83 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_1, MSGBOX_NPC
# 87 "data/maps/TwinleafTown/scripts.pory"
	release
	return

Twinleaf_outside_guy_5:
# 92 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_2, MSGBOX_NPC
	return

Twinleaf_outside_guy_6:
# 101 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_3, MSGBOX_NPC
	return


Twinleaf_trigger_trytoleaveguy::
# 132 "data/maps/TwinleafTown/scripts.pory"
	lock
# 133 "data/maps/TwinleafTown/scripts.pory"
	applymovement Tiwnleaf_outside_guy, Twinleaf_trigger_trytoleaveguy_Movement_0
# 134 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 135 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 136 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_1
# 137 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 138 "data/maps/TwinleafTown/scripts.pory"
	msgbox barryWasLooking, MSGBOX_NPC
# 139 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 140 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 141 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_2
# 142 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 143 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Barry_Thud::
# 147 "data/maps/TwinleafTown/scripts.pory"
	lockall
# 148 "data/maps/TwinleafTown/scripts.pory"
	opendoor 9, 8
# 149 "data/maps/TwinleafTown/scripts.pory"
	addobject Twinleaf_Thud_Barry
# 150 "data/maps/TwinleafTown/scripts.pory"
	clearflag BARRY_INTRO_TWO
# 151 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_Barry_Thud_Movement_0
# 152 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_trigger_trytoleaveguy_Movement_2
# 153 "data/maps/TwinleafTown/scripts.pory"
	waitmovementall
# 154 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_0, MSGBOX_NPC
# 155 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 156 "data/maps/TwinleafTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 157 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_1
# 158 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 160 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 161 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_1, MSGBOX_NPC
# 165 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_2
# 166 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 167 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_1
# 168 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 169 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 170 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 171 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_3
# 172 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 173 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_2, MSGBOX_NPC
# 175 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 176 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_Barry_Thud_Movement_4
# 177 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 178 "data/maps/TwinleafTown/scripts.pory"
	closedoor 9, 8
# 179 "data/maps/TwinleafTown/scripts.pory"
	fadedefaultbgm
# 180 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 181 "data/maps/TwinleafTown/scripts.pory"
	removeobject Twinleaf_Thud_Barry
# 182 "data/maps/TwinleafTown/scripts.pory"
	setflag Twinleaf_Thud_Barry
# 183 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 184 "data/maps/TwinleafTown/scripts.pory"
	releaseall
	return


Twinleaf_removeBarry::
# 188 "data/maps/TwinleafTown/scripts.pory"
	hideobjectat Twinleaf_Thud_Barry, MAP_TWINLEAF_TOWN
# 189 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 133 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_0:
# 133 "data/maps/TwinleafTown/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 136 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_1:
# 136 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 141 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_2:
# 141 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 151 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_0:
# 151 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 151 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 157 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_1:
# 157 "data/maps/TwinleafTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 165 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_2:
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 171 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_3:
# 171 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 176 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_4:
# 176 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

Twinleaf_fatman_Text_0:
# 36 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

Twinleaf_playerHouseSign_Text_0:
# 45 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

Twinleaf_barryHouseSign_Text_0:
# 51 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

Twinleaf_Town_Sign_Text_0:
# 57 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

Twinleaf_outside_lady_Text_0:
# 64 "data/maps/TwinleafTown/scripts.pory"
	.string "It’s true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

Twinleaf_outside_guy_Text_0:
# 76 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes off on adventures,\n"
	.string "and then they gradually grow up...$"

Twinleaf_outside_guy_Text_1:
# 83 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"

Twinleaf_outside_guy_Text_2:
# 92 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tear off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

Twinleaf_outside_guy_Text_3:
# 101 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off\n"
	.string "in a huge rush a while ago.\p"
	.string "...Ouch. He ran right into me earlier.\n"
	.string "It's still hurting.\l"
	.string "That kid's growing up tough.$"

Twinleaf_Barry_Thud_Text_0:
# 154 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!!$"

Twinleaf_Barry_Thud_Text_1:
# 161 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I’m going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

Twinleaf_Barry_Thud_Text_2:
# 173 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

barryWasLooking::
# 122 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"
