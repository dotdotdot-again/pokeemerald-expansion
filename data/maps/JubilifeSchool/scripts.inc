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
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_GET_FIRST_BADGE
# 60 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_4
# 61 "data/maps/JubilifeSchool/scripts.pory"
	clearflag FLAG_JUBILIFE_POKETKCH
# 62 "data/maps/JubilifeSchool/scripts.pory"
	clearflag FLAG_CLOWNS
# 63 "data/maps/JubilifeSchool/scripts.pory"
	removeobject SchoolBarry
# 64 "data/maps/JubilifeSchool/scripts.pory"
	releaseall
	return

JubilifeSchool_Barry_Stuff_2:
# 50 "data/maps/JubilifeSchool/scripts.pory"
	applymovement SchoolBarry, JubilifeSchool_Barry_Stuff_Movement_1
# 51 "data/maps/JubilifeSchool/scripts.pory"
	waitmovement
	goto JubilifeSchool_Barry_Stuff_1


TrainersSchool_Text_PokemonUseItems::
# 70 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 71 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_PokemonUseItems_Text_0, MSGBOX_NPC
# 76 "data/maps/JubilifeSchool/scripts.pory"
	release
	return


TrainersSchool_Text_LearnedAboutPokemonTypes::
# 80 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 81 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_LearnedAboutPokemonTypes_Text_0, MSGBOX_NPC
# 86 "data/maps/JubilifeSchool/scripts.pory"
	release
	return


TrainersSchool_Text_DevelopAtOwnPace::
# 90 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 91 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_DevelopAtOwnPace_Text_0, MSGBOX_NPC
# 95 "data/maps/JubilifeSchool/scripts.pory"
	release
	return


TrainersSchool_Text_WroteAnEssay::
# 99 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 100 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_WroteAnEssay_Text_0, MSGBOX_NPC
# 102 "data/maps/JubilifeSchool/scripts.pory"
	release
	return


TrainersSchool_Text_CanWeBattleYou::
# 108 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 109 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_CanWeBattleYou_17
TrainersSchool_Text_CanWeBattleYou_14:
# 115 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_CanWeBattleYou_13
TrainersSchool_Text_CanWeBattleYou_9:
# 133 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_CanWeBattleYou_8
TrainersSchool_Text_CanWeBattleYou_6:
# 143 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_CanWeBattleYou_5
TrainersSchool_Text_CanWeBattleYou_1:
# 187 "data/maps/JubilifeSchool/scripts.pory"
	release
	return

TrainersSchool_Text_CanWeBattleYou_2:
# 111 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_0, MSGBOX_NPC
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_3:
# 117 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_1
# 122 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 123 "data/maps/JubilifeSchool/scripts.pory"
	giveitem ITEM_POTION
# 124 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_SCHOOL_STUDENT_ONE_AFTERPOTION
# 125 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_2, MSGBOX_AUTOCLOSE
# 131 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_4:
# 135 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_5:
# 145 "data/maps/JubilifeSchool/scripts.pory"
	applymovement 2, JubilifeSchool_Barry_Stuff_Movement_0
# 146 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_3, MSGBOX_YESNO
# 148 "data/maps/JubilifeSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TrainersSchool_Text_CanWeBattleYou_20
# 180 "data/maps/JubilifeSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TrainersSchool_Text_CanWeBattleYou_21
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_7:
# 133 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_ONE_AFTERPOTION, TrainersSchool_Text_CanWeBattleYou_4
	goto TrainersSchool_Text_CanWeBattleYou_6

TrainersSchool_Text_CanWeBattleYou_8:
# 133 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_CanWeBattleYou_7
	goto TrainersSchool_Text_CanWeBattleYou_6

TrainersSchool_Text_CanWeBattleYou_12:
# 115 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_ONE_AFTERPOTION, TrainersSchool_Text_CanWeBattleYou_3
	goto TrainersSchool_Text_CanWeBattleYou_9

TrainersSchool_Text_CanWeBattleYou_13:
# 115 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_CanWeBattleYou_12
	goto TrainersSchool_Text_CanWeBattleYou_9

TrainersSchool_Text_CanWeBattleYou_17:
# 109 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_CanWeBattleYou_2
	goto TrainersSchool_Text_CanWeBattleYou_14

TrainersSchool_Text_CanWeBattleYou_20:
# 150 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_4
# 152 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 153 "data/maps/JubilifeSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_JERRY_1, TrainersSchool_Text_CanWeBattleYou_Text_5
# 154 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_SCHOOL_STUDENT_ONE
# 155 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_CanWeBattleYou_27
TrainersSchool_Text_CanWeBattleYou_25:
# 174 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_0, MSGBOX_AUTOCLOSE
# 176 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_21:
# 182 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_6, MSGBOX_AUTOCLOSE
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_24:
# 157 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_1
# 162 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 163 "data/maps/JubilifeSchool/scripts.pory"
	giveitem ITEM_POTION
# 164 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_SCHOOL_STUDENT_ONE_AFTERPOTION
# 165 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_CanWeBattleYou_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_CanWeBattleYou_1

TrainersSchool_Text_CanWeBattleYou_26:
# 155 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_ONE_AFTERPOTION, TrainersSchool_Text_CanWeBattleYou_24
	goto TrainersSchool_Text_CanWeBattleYou_25

TrainersSchool_Text_CanWeBattleYou_27:
# 155 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_CanWeBattleYou_26
	goto TrainersSchool_Text_CanWeBattleYou_25


TrainersSchool_Text_MayWeBattle::
# 192 "data/maps/JubilifeSchool/scripts.pory"
	lock
# 193 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_set FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_MayWeBattle_2
# 201 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_TWO, TrainersSchool_Text_MayWeBattle_3
TrainersSchool_Text_MayWeBattle_1:
# 247 "data/maps/JubilifeSchool/scripts.pory"
	release
	return

TrainersSchool_Text_MayWeBattle_2:
# 195 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_0, MSGBOX_NPC
# 199 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_MayWeBattle_1

TrainersSchool_Text_MayWeBattle_3:
# 203 "data/maps/JubilifeSchool/scripts.pory"
	applymovement 6, JubilifeSchool_Barry_Stuff_Movement_0
# 204 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_1, MSGBOX_YESNO
# 208 "data/maps/JubilifeSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TrainersSchool_Text_MayWeBattle_6
# 235 "data/maps/JubilifeSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TrainersSchool_Text_MayWeBattle_7
	goto TrainersSchool_Text_MayWeBattle_1

TrainersSchool_Text_MayWeBattle_6:
# 210 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_2
# 212 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
# 213 "data/maps/JubilifeSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_KAREN_1, TrainersSchool_Text_MayWeBattle_Text_3
# 214 "data/maps/JubilifeSchool/scripts.pory"
	setflag FLAG_SCHOOL_STUDENT_TWO
# 215 "data/maps/JubilifeSchool/scripts.pory"
	goto_if_unset FLAG_SCHOOL_STUDENT_ONE, TrainersSchool_Text_MayWeBattle_10
# 224 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_4, MSGBOX_AUTOCLOSE
# 230 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_MayWeBattle_1

TrainersSchool_Text_MayWeBattle_7:
# 237 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_5, MSGBOX_AUTOCLOSE
# 241 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_MayWeBattle_1

TrainersSchool_Text_MayWeBattle_10:
# 217 "data/maps/JubilifeSchool/scripts.pory"
	msgbox TrainersSchool_Text_MayWeBattle_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/JubilifeSchool/scripts.pory"
	waitmessage
	goto TrainersSchool_Text_MayWeBattle_1


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

TrainersSchool_Text_PokemonUseItems_Text_0:
# 71 "data/maps/JubilifeSchool/scripts.pory"
	.string "Pokémon are smart enough to use\n"
	.string "items they’re holding.\p"
	.string "But they won’t know what to do with\n"
	.string "man-made items like Potions and\l"
	.string "Antidotes.$"

TrainersSchool_Text_LearnedAboutPokemonTypes_Text_0:
# 81 "data/maps/JubilifeSchool/scripts.pory"
	.string "We learned about Pokémon types\n"
	.string "today. Umm...\p"
	.string "Grass is weak to Fire,\p"
	.string "Fire is weak to Water,\p"
	.string "and Water is weak to Grass!$"

TrainersSchool_Text_DevelopAtOwnPace_Text_0:
# 91 "data/maps/JubilifeSchool/scripts.pory"
	.string "It’s perfectly fine for Trainers and\n"
	.string "Pokémon to develop at their own pace.\p"
	.string "If there is anything you’re not familiar\n"
	.string "with, you can look it up here.$"

TrainersSchool_Text_WroteAnEssay_Text_0:
# 100 "data/maps/JubilifeSchool/scripts.pory"
	.string "I wrote an essay in my notebook on \n"
	.string "what makes a true Pokémon Trainer.$"

TrainersSchool_Text_CanWeBattleYou_Text_0:
# 111 "data/maps/JubilifeSchool/scripts.pory"
	.string "It’s hard to win if you don’t have\n"
	.string "some Pokémon to choose from.$"

TrainersSchool_Text_CanWeBattleYou_Text_1:
# 117 "data/maps/JubilifeSchool/scripts.pory"
	.string "Whew! You’re really good!\p"
	.string "We’ve been studying every day, but\n"
	.string "we were no match for you at all!\p"
	.string "You’d be able to use this Potion\n"
	.string "properly. Here you go!$"

TrainersSchool_Text_CanWeBattleYou_Text_2:
# 125 "data/maps/JubilifeSchool/scripts.pory"
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn’t only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"

TrainersSchool_Text_CanWeBattleYou_Text_3:
# 146 "data/maps/JubilifeSchool/scripts.pory"
	.string "Doing it is the best way to learn!\n"
	.string "Can we get a battle with you?$"

TrainersSchool_Text_CanWeBattleYou_Text_4:
# 150 "data/maps/JubilifeSchool/scripts.pory"
	.string "Go!\n"
	.string "My Pokémon, go!$"

TrainersSchool_Text_CanWeBattleYou_Text_5:
# 153 "data/maps/JubilifeSchool/scripts.pory"
	.string "Ugh...\nI didn't use items effectively$"

TrainersSchool_Text_CanWeBattleYou_Text_6:
# 182 "data/maps/JubilifeSchool/scripts.pory"
	.string "Aww! But battling is the best way\n"
	.string "to learn about Pokémon!$"

TrainersSchool_Text_MayWeBattle_Text_0:
# 195 "data/maps/JubilifeSchool/scripts.pory"
	.string "I wonder if we could have done better\n"
	.string "against you?\p"
	.string "Like if I used Potions right when we\n"
	.string "needed to.$"

TrainersSchool_Text_MayWeBattle_Text_1:
# 204 "data/maps/JubilifeSchool/scripts.pory"
	.string "I just became friends with my\n"
	.string "Pokémon.\p"
	.string "I’m not sure if we can do this\n"
	.string "properly, but may we battle?$"

TrainersSchool_Text_MayWeBattle_Text_2:
# 210 "data/maps/JubilifeSchool/scripts.pory"
	.string "I need to try the things I learned\n"
	.string "before I forget them!$"

TrainersSchool_Text_MayWeBattle_Text_3:
# 213 "data/maps/JubilifeSchool/scripts.pory"
	.string "I like to study a lot...\nI thought I could win...$"

TrainersSchool_Text_MayWeBattle_Text_4:
# 224 "data/maps/JubilifeSchool/scripts.pory"
	.string "We were actually confident that we\n"
	.string "would do pretty good.\p"
	.string "But I’m completely impressed by how\n"
	.string "tough you are.\p"
	.string "If you’d like, talk to my friend and\n"
	.string "get a nice item from him.$"

TrainersSchool_Text_MayWeBattle_Text_5:
# 237 "data/maps/JubilifeSchool/scripts.pory"
	.string "Boo!\n"
	.string "Where’s your sense of adventure?\p"
	.string "Don’t be shy about talking to people\n"
	.string "and getting into battles!$"
