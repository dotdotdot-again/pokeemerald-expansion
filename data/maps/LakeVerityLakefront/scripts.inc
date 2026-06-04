LakeVerityLakefront_MapScripts::
	.byte 0


LakeVerLakefront_trigger_at_the_lake::
# 6 "data/maps/LakeVerityLakefront/scripts.pory"
	lockall
# 7 "data/maps/LakeVerityLakefront/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerLakefront_trigger_at_the_lake_Movement_0
# 8 "data/maps/LakeVerityLakefront/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerLakefront_trigger_at_the_lake_Movement_1
# 9 "data/maps/LakeVerityLakefront/scripts.pory"
	waitmovementall
# 10 "data/maps/LakeVerityLakefront/scripts.pory"
	setspeaker SP_NAME_BARRY
# 11 "data/maps/LakeVerityLakefront/scripts.pory"
	msgbox LakeVerLakefront_trigger_at_the_lake_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/LakeVerityLakefront/scripts.pory"
	waitmessage
# 18 "data/maps/LakeVerityLakefront/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LakeVerLakefront_trigger_at_the_lake_Movement_2
# 19 "data/maps/LakeVerityLakefront/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerLakefront_trigger_at_the_lake_Movement_2
# 20 "data/maps/LakeVerityLakefront/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/LakeVerityLakefront/scripts.pory"
	destroyfollowernpc
# 22 "data/maps/LakeVerityLakefront/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 23 "data/maps/LakeVerityLakefront/scripts.pory"
	playse SE_EXIT
# 24 "data/maps/LakeVerityLakefront/scripts.pory"
	waitse
# 25 "data/maps/LakeVerityLakefront/scripts.pory"
	warpcontinuescript MAP_LAKE_VERITY, 40, 48, goToLakeVerWithBarry
	return


goToLakeVerWithBarry::
# 29 "data/maps/LakeVerityLakefront/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/maps/LakeVerityLakefront/scripts.pory"
	call meetCyrus_lake_ver
	return


lake_Ver_sign::
# 34 "data/maps/LakeVerityLakefront/scripts.pory"
	lock
# 35 "data/maps/LakeVerityLakefront/scripts.pory"
	msgbox lake_Ver_sign_Text_0, MSGBOX_SIGN
# 41 "data/maps/LakeVerityLakefront/scripts.pory"
	release
	return


# 7 "data/maps/LakeVerityLakefront/scripts.pory"
LakeVerLakefront_trigger_at_the_lake_Movement_0:
# 7 "data/maps/LakeVerityLakefront/scripts.pory"
	face_up
	step_end

# 8 "data/maps/LakeVerityLakefront/scripts.pory"
LakeVerLakefront_trigger_at_the_lake_Movement_1:
# 8 "data/maps/LakeVerityLakefront/scripts.pory"
	face_down
	step_end

# 18 "data/maps/LakeVerityLakefront/scripts.pory"
LakeVerLakefront_trigger_at_the_lake_Movement_2:
# 18 "data/maps/LakeVerityLakefront/scripts.pory"
	walk_up
# 18 "data/maps/LakeVerityLakefront/scripts.pory"
	walk_up
	step_end

LakeVerLakefront_trigger_at_the_lake_Text_0:
# 11 "data/maps/LakeVerityLakefront/scripts.pory"
	.string "All right!\n"
	.string "We're at the lake!\p"
	.string "Get ready, because we're capturing\n"
	.string "that legendary Pokémon.\p"
	.string "trust me on this one. It's here.\n"
	.string "It even says so on the sign!$"

lake_Ver_sign_Text_0:
# 35 "data/maps/LakeVerityLakefront/scripts.pory"
	.string "Lake Verity Ahead\p"
	.string "According to legend, this lake is home\n"
	.string "to this Pokémon said to be “The being\l"
	.string "Emotion”\p"
	.string "It is because of this Pokeémon that\n"
	.string "people can exerience sorry and joy.$"
