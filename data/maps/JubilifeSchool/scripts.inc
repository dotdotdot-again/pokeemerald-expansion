JubilifeSchool_MapScripts::
	.byte 0


JubilifeSchool_Barry_Stuff::
# 4 "data/maps/JubilifeSchool/scripts.pory"
	lockall
# 5 "data/maps/JubilifeSchool/scripts.pory"
	applymovement SchoolBarry, JubilifeSchool_Barry_Stuff_Movement_0
# 6 "data/maps/JubilifeSchool/scripts.pory"
	setspeaker SP_NAME_BARRY
# 7 "data/maps/JubilifeSchool/scripts.pory"
	msgbox JubilifeSchool_Barry_Stuff_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 18 "data/maps/JubilifeSchool/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/JubilifeSchool/scripts.pory"
	msgbox JubilifeSchool_Barry_Stuff_Text_1
# 20 "data/maps/JubilifeSchool/scripts.pory"
	removeitem ITEM_PARCEL
# 21 "data/maps/JubilifeSchool/scripts.pory"
	waitfanfare
# 22 "data/maps/JubilifeSchool/scripts.pory"
	closemessage
# 23 "data/maps/JubilifeSchool/scripts.pory"
	setspeaker SP_NAME_BARRY
# 24 "data/maps/JubilifeSchool/scripts.pory"
	msgbox JubilifeSchool_Barry_Stuff_Text_2, MSGBOX_AUTOCLOSE
# 31 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 32 "data/maps/JubilifeSchool/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 33 "data/maps/JubilifeSchool/scripts.pory"
	setspeaker SP_NAME_BARRY
# 34 "data/maps/JubilifeSchool/scripts.pory"
	msgbox JubilifeSchool_Barry_Stuff_Text_3, MSGBOX_AUTOCLOSE
# 43 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 44 "data/maps/JubilifeSchool/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 48 "data/maps/JubilifeSchool/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq JubilifeSchool_Barry_Stuff_2
# 55 "data/maps/JubilifeSchool/scripts.pory"
	applymovement SchoolBarry, JubilifeSchool_Barry_Stuff_Movement_2
# 56 "data/maps/JubilifeSchool/scripts.pory"
	waitmovement
JubilifeSchool_Barry_Stuff_1:
# 58 "data/maps/JubilifeSchool/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 2
# 59 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_4
# 60 "data/maps/JubilifeSchool/scripts.pory"
	removeobject SchoolBarry
# 61 "data/maps/JubilifeSchool/scripts.pory"
	releaseall
	return

JubilifeSchool_Barry_Stuff_2:
# 50 "data/maps/JubilifeSchool/scripts.pory"
	applymovement SchoolBarry, JubilifeSchool_Barry_Stuff_Movement_1
# 51 "data/maps/JubilifeSchool/scripts.pory"
	waitmovement
	goto JubilifeSchool_Barry_Stuff_1


# 5 "data/maps/JubilifeSchool/scripts.pory"
JubilifeSchool_Barry_Stuff_Movement_0:
# 5 "data/maps/JubilifeSchool/scripts.pory"
	face_player
	step_end

# 50 "data/maps/JubilifeSchool/scripts.pory"
JubilifeSchool_Barry_Stuff_Movement_1:
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_right
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 50 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
	step_end

# 55 "data/maps/JubilifeSchool/scripts.pory"
JubilifeSchool_Barry_Stuff_Movement_2:
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
# 55 "data/maps/JubilifeSchool/scripts.pory"
	walk_fast_down
	step_end

JubilifeSchool_Barry_Stuff_Text_0:
# 7 "data/maps/JubilifeSchool/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you come to study, too?\p"
	.string "I went ahead and memorized everything\n"
	.string "that was up on the blackboard.\p"
	.string "After all, it’s the Trainer’s job to\n"
	.string "avoid having their precious Pokémon\l"
	.string "hurt in battle, right?\p"
	.string "So, {PLAYER}, what brings you?\n"
	.string "Huh?\l"
	.string "You’ve got something for me?$"

JubilifeSchool_Barry_Stuff_Text_1:
# 19 "data/maps/JubilifeSchool/scripts.pory"
	.string "{PLAYER} Delivered the Parcel$"

JubilifeSchool_Barry_Stuff_Text_2:
# 24 "data/maps/JubilifeSchool/scripts.pory"
	.string "So, what is this...?\p"
	.string "Score!\n"
	.string "It’s a Town Map!\p"
	.string "Huh?!\n"
	.string "Why are there two in here?\p"
	.string "I like it a lot, but I don’t need two.\n"
	.string "Here, {PLAYER}, you take one!$"

JubilifeSchool_Barry_Stuff_Text_3:
# 34 "data/maps/JubilifeSchool/scripts.pory"
	.string "Hmm...\p"
	.string "Well, according to the Town Map,\n"
	.string "I guess Oreburgh City is where\l"
	.string "I should be going next.\p"
	.string "There’s a Gym, so it’d be perfect for\n"
	.string "raising the Pokémon I just caught.\p"
	.string "Well, I’m on the road to becoming\n"
	.string "the greatest Trainer of all time!\p"
	.string "See you around$"
