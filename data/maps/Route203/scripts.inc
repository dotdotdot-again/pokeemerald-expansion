Route203_MapScripts::
	.byte 0


Route203_Barry_Encounter::
# 6 "data/maps/Route203/scripts.pory"
	lockall
# 7 "data/maps/Route203/scripts.pory"
	applymovement Barry_203, Route203_Barry_Encounter_Movement_0
# 8 "data/maps/Route203/scripts.pory"
	playse SE_PIN
# 9 "data/maps/Route203/scripts.pory"
	waitse
# 10 "data/maps/Route203/scripts.pory"
	waitmovement
# 11 "data/maps/Route203/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 12 "data/maps/Route203/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_PLAYER, VAR_TEMP_6, VAR_TEMP_7, VAR_TEMP_8
# 13 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_8, 24
	goto_if_eq Route203_Barry_Encounter_2
# 18 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_8, 25
	goto_if_eq Route203_Barry_Encounter_3
# 25 "data/maps/Route203/scripts.pory"
	applymovement Barry_203, Route203_Barry_Encounter_Movement_3
# 26 "data/maps/Route203/scripts.pory"
	waitmovement
Route203_Barry_Encounter_1:
# 29 "data/maps/Route203/scripts.pory"
	setspeaker SP_NAME_BARRY
# 30 "data/maps/Route203/scripts.pory"
	msgbox Route203_Barry_Encounter_Text_0, MSGBOX_AUTOCLOSE
# 36 "data/maps/Route203/scripts.pory"
	waitmessage
# 37 "data/maps/Route203/scripts.pory"
	switch VAR_STARTER_MON
# 38 "data/maps/Route203/scripts.pory"
	case 0, Route203_Barry_Encounter_9
# 40 "data/maps/Route203/scripts.pory"
	case 1, Route203_Barry_Encounter_10
# 42 "data/maps/Route203/scripts.pory"
	case 2, Route203_Barry_Encounter_11
Route203_Barry_Encounter_7:
# 45 "data/maps/Route203/scripts.pory"
	call Route203_Barry_Encounter_Count
	return

Route203_Barry_Encounter_2:
# 15 "data/maps/Route203/scripts.pory"
	applymovement Barry_203, Route203_Barry_Encounter_Movement_1
# 16 "data/maps/Route203/scripts.pory"
	waitmovement
	goto Route203_Barry_Encounter_1

Route203_Barry_Encounter_3:
# 20 "data/maps/Route203/scripts.pory"
	applymovement Barry_203, Route203_Barry_Encounter_Movement_2
# 21 "data/maps/Route203/scripts.pory"
	waitmovement
	goto Route203_Barry_Encounter_1

Route203_Barry_Encounter_9:
# 39 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route203_Barry_Encounter_Text_1
	goto Route203_Barry_Encounter_7

Route203_Barry_Encounter_10:
# 41 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route203_Barry_Encounter_Text_2
	goto Route203_Barry_Encounter_7

Route203_Barry_Encounter_11:
# 43 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route203_Barry_Encounter_Text_1
	goto Route203_Barry_Encounter_7


Route203_Barry_Encounter_Count::
# 50 "data/maps/Route203/scripts.pory"
	setspeaker SP_NAME_BARRY
# 51 "data/maps/Route203/scripts.pory"
	msgbox Route203_Barry_Encounter_Count_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route203/scripts.pory"
	waitmessage
# 62 "data/maps/Route203/scripts.pory"
	applymovement Barry_203, Route203_Barry_Encounter_Count_Movement_0
# 63 "data/maps/Route203/scripts.pory"
	waitmovement
# 64 "data/maps/Route203/scripts.pory"
	removeobject Barry_203
# 65 "data/maps/Route203/scripts.pory"
	setflag FLAG_BARRY_R203
# 66 "data/maps/Route203/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 5
	return


# 7 "data/maps/Route203/scripts.pory"
Route203_Barry_Encounter_Movement_0:
# 7 "data/maps/Route203/scripts.pory"
	emote_exclamation_mark
	step_end

# 15 "data/maps/Route203/scripts.pory"
Route203_Barry_Encounter_Movement_1:
# 15 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 15 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 15 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 15 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 15 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 20 "data/maps/Route203/scripts.pory"
Route203_Barry_Encounter_Movement_2:
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 20 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 25 "data/maps/Route203/scripts.pory"
Route203_Barry_Encounter_Movement_3:
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 62 "data/maps/Route203/scripts.pory"
Route203_Barry_Encounter_Count_Movement_0:
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route203/scripts.pory"
	walk_fast_right
	step_end

Route203_Barry_Encounter_Text_0:
# 30 "data/maps/Route203/scripts.pory"
	.string "Hey! {PLAYER}!\n"
	.string "Tell me you got a little tougher!\p"
	.string "Me? Do you even need to ask?\n"
	.string "Of course I got tougher!\p"
	.string "Come on!\n"
	.string "I’ll demonstrate it o you!$"

Route203_Barry_Encounter_Text_1:
# 39 "data/maps/Route203/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?!$"

Route203_Barry_Encounter_Text_2:
# 41 "data/maps/Route203/scripts.pory"
	.string "What just happen?\nI lost?!$"

Route203_Barry_Encounter_Count_Text_0:
# 51 "data/maps/Route203/scripts.pory"
	.string "Waah!\n"
	.string "What do you mean I lost?!\p"
	.string "Well, that’s it!\n"
	.string "That’s the last time I’ll ever lose!\p"
	.string "I’m going to be the world’s toughest\n"
	.string "Trainer, and you know it!\p"
	.string "The first thing to do is take on\n"
	.string "the Oreburgh City Pokémon Gym!\p"
	.string "I’m gonna toughen up for that,\n"
	.string "totally!$"
