TwinleafTown_MapScripts::
	.byte 0


OnWarpTwinleaf::
# 8 "data/maps/TwinleafTown/scripts.pory"
	removeobject Twinleaf_Thud_Barry
	return


Twinleaf_fatman::
# 12 "data/maps/TwinleafTown/scripts.pory"
	lock
# 13 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_fatman_Text_0, MSGBOX_NPC
# 16 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_playerHouseSign::
# 21 "data/maps/TwinleafTown/scripts.pory"
	lock
# 22 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_playerHouseSign_Text_0, MSGBOX_SIGN
# 23 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_barryHouseSign::
# 27 "data/maps/TwinleafTown/scripts.pory"
	lock
# 28 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_barryHouseSign_Text_0, MSGBOX_SIGN
# 29 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Town_Sign::
# 33 "data/maps/TwinleafTown/scripts.pory"
	lock
# 34 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Town_Sign_Text_0, MSGBOX_SIGN
# 36 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_lady::
# 40 "data/maps/TwinleafTown/scripts.pory"
	lock
# 41 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_lady_Text_0, MSGBOX_NPC
# 45 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_outside_guy::
# 50 "data/maps/TwinleafTown/scripts.pory"
	lock
# 51 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_outside_guy_Text_0, MSGBOX_NPC
# 55 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_trigger_trytoleaveguy::
# 68 "data/maps/TwinleafTown/scripts.pory"
	lock
# 69 "data/maps/TwinleafTown/scripts.pory"
	applymovement Tiwnleaf_outside_guy, Twinleaf_trigger_trytoleaveguy_Movement_0
# 70 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 71 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 72 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_1
# 73 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 74 "data/maps/TwinleafTown/scripts.pory"
	msgbox barryWasLooking, MSGBOX_NPC
# 75 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 76 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 77 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_trigger_trytoleaveguy_Movement_2
# 78 "data/maps/TwinleafTown/scripts.pory"
	waitmovement
# 79 "data/maps/TwinleafTown/scripts.pory"
	release
	return


Twinleaf_Barry_Thud::
# 83 "data/maps/TwinleafTown/scripts.pory"
	lockall
# 84 "data/maps/TwinleafTown/scripts.pory"
	showobjectat Twinleaf_Thud_Barry, MAP_TWINLEAF_TOWN
# 85 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Twinleaf_Barry_Thud_Movement_0
# 86 "data/maps/TwinleafTown/scripts.pory"
	applymovement Twinleaf_Thud_Barry, Twinleaf_trigger_trytoleaveguy_Movement_2
# 87 "data/maps/TwinleafTown/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/TwinleafTown/scripts.pory"
	waitmovementall
# 89 "data/maps/TwinleafTown/scripts.pory"
	msgbox Twinleaf_Barry_Thud_Text_0, MSGBOX_NPC
# 90 "data/maps/TwinleafTown/scripts.pory"
	waitmessage
# 91 "data/maps/TwinleafTown/scripts.pory"
	releaseall
	return


Twinleaf_removeBarry::
# 97 "data/maps/TwinleafTown/scripts.pory"
	hideobjectat Twinleaf_Thud_Barry, MAP_TWINLEAF_TOWN
# 98 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 69 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_0:
# 69 "data/maps/TwinleafTown/scripts.pory"
	emote_exclamation_mark
# 69 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 72 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_1:
# 72 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 77 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_trigger_trytoleaveguy_Movement_2:
# 77 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/TwinleafTown/scripts.pory"
Twinleaf_Barry_Thud_Movement_0:
# 85 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 85 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

Twinleaf_fatman_Text_0:
# 13 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

Twinleaf_playerHouseSign_Text_0:
# 22 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

Twinleaf_barryHouseSign_Text_0:
# 28 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

Twinleaf_Town_Sign_Text_0:
# 34 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

Twinleaf_outside_lady_Text_0:
# 41 "data/maps/TwinleafTown/scripts.pory"
	.string "It’s true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

Twinleaf_outside_guy_Text_0:
# 51 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"

Twinleaf_Barry_Thud_Text_0:
# 89 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD!!$"

barryWasLooking::
# 59 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he’s home now.\n"
	.string "Why don’t you go check it out?$"
