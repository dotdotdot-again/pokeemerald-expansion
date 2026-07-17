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


Route203_Youngster_Michael::
# 70 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_JOSH, Route203_Youngster_Michael_Text_0, Route203_Youngster_Michael_Text_1
# 74 "data/maps/Route203/scripts.pory"
	msgbox Route203_Youngster_Michael_Text_2, MSGBOX_NPC
# 77 "data/maps/Route203/scripts.pory"
	waitmessage
# 78 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Youngster_Dallas::
# 82 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, Route203_Youngster_Dallas_Text_0, Route203_Youngster_Dallas_Text_1
# 85 "data/maps/Route203/scripts.pory"
	msgbox Route203_Youngster_Dallas_Text_2, MSGBOX_NPC
# 87 "data/maps/Route203/scripts.pory"
	waitmessage
# 88 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Youngster_Sebastian::
# 93 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route203_Youngster_Sebastian_Text_0, Route203_Youngster_Sebastian_Text_1
# 96 "data/maps/Route203/scripts.pory"
	msgbox Route203_Youngster_Sebastian_Text_2, MSGBOX_NPC
# 98 "data/maps/Route203/scripts.pory"
	waitmessage
# 99 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Lass_Kaitlin::
# 103 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route203_Lass_Kaitlin_Text_0, Route203_Lass_Kaitlin_Text_1
# 105 "data/maps/Route203/scripts.pory"
	msgbox Route203_Lass_Kaitlin_Text_2, MSGBOX_NPC
# 107 "data/maps/Route203/scripts.pory"
	waitmessage
# 108 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Lass_Madeline::
# 112 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route203_Lass_Madeline_Text_0, Route203_Lass_Madeline_Text_1
# 114 "data/maps/Route203/scripts.pory"
	msgbox Route203_Lass_Madeline_Text_2, MSGBOX_NPC
# 116 "data/maps/Route203/scripts.pory"
	waitmessage
# 117 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Text_Rt203JubilifeCity::
# 121 "data/maps/Route203/scripts.pory"
	lock
# 122 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Rt203JubilifeCity_Text_0, MSGBOX_SIGN
# 124 "data/maps/Route203/scripts.pory"
	waitmessage
# 125 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Text_Rt203OreburghCity::
# 129 "data/maps/Route203/scripts.pory"
	lock
# 130 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Rt203OreburghCity_Text_0, MSGBOX_SIGN
# 132 "data/maps/Route203/scripts.pory"
	waitmessage
# 133 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Text_TrainerTipsIfAPokemonIsAboutToEvolveItCanBeInstantlyStopped::
# 137 "data/maps/Route203/scripts.pory"
	lock
# 138 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_TrainerTipsIfAPokemonIsAboutToEvolveItCanBeInstantlyStopped_Text_0, MSGBOX_SIGN
# 145 "data/maps/Route203/scripts.pory"
	waitmessage
# 146 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Text_TrainerTipsPokemonMovesUseEnergyCalledPowerPoints::
# 150 "data/maps/Route203/scripts.pory"
	lock
# 151 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_TrainerTipsPokemonMovesUseEnergyCalledPowerPoints_Text_0, MSGBOX_SIGN
# 156 "data/maps/Route203/scripts.pory"
	waitmessage
# 157 "data/maps/Route203/scripts.pory"
	release
	return


Route203_Text_YourFavoritePokemonShouldBePlacedAtTheTop::
# 161 "data/maps/Route203/scripts.pory"
	lock
# 162 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_YourFavoritePokemonShouldBePlacedAtTheTop_Text_0, MSGBOX_NPC
# 166 "data/maps/Route203/scripts.pory"
	waitmessage
# 167 "data/maps/Route203/scripts.pory"
	release
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

Route203_Youngster_Michael_Text_0:
# 70 "data/maps/Route203/scripts.pory"
	.string "I get my get-up-and-go from my\n"
	.string "Pokémon!\p"
	.string "Here we go!\n"
	.string "KRICKETOT! ZUBAT!$"

Route203_Youngster_Michael_Text_1:
# 73 "data/maps/Route203/scripts.pory"
	.string "Ack! My Pokémon...$"

Route203_Youngster_Michael_Text_2:
# 74 "data/maps/Route203/scripts.pory"
	.string "Keep out of the grass or dodge the\n"
	.string "eyes of Trainers...?\p"
	.string "I always have a tough time choosing.$"

Route203_Youngster_Dallas_Text_0:
# 82 "data/maps/Route203/scripts.pory"
	.string "I’m never apart from my SHINX.\n"
	.string "Our bond is strong!$"

Route203_Youngster_Dallas_Text_1:
# 83 "data/maps/Route203/scripts.pory"
	.string "So sad...\n"
	.string "And so crushed...$"

Route203_Youngster_Dallas_Text_2:
# 85 "data/maps/Route203/scripts.pory"
	.string "I don’t bear grudges over losing.\n"
	.string "But I promise I’ll get tougher!$"

Route203_Youngster_Sebastian_Text_0:
# 93 "data/maps/Route203/scripts.pory"
	.string "Before I challenge the Pokémon Gym\n"
	.string "Leader, I’ll test my strength on you!$"

Route203_Youngster_Sebastian_Text_1:
# 94 "data/maps/Route203/scripts.pory"
	.string "I guess it means I’m not ready for\n"
	.string "the Gym challenge yet...$"

Route203_Youngster_Sebastian_Text_2:
# 96 "data/maps/Route203/scripts.pory"
	.string "I guess if you don’t have a single\n"
	.string "Gym Badge, you’re a total nobody...$"

Route203_Lass_Kaitlin_Text_0:
# 103 "data/maps/Route203/scripts.pory"
	.string "I found a Trainer while looking for\n"
	.string "some Pokémon!$"

Route203_Lass_Kaitlin_Text_1:
# 104 "data/maps/Route203/scripts.pory"
	.string "Hunh? You’re finished so soon?$"

Route203_Lass_Kaitlin_Text_2:
# 105 "data/maps/Route203/scripts.pory"
	.string "I walk through tall grass until I\n"
	.string "find the Pokémon I want.$"

Route203_Lass_Madeline_Text_0:
# 112 "data/maps/Route203/scripts.pory"
	.string "I got a nifty-keen Gym Badge from\n"
	.string "the Gym Leader in Oreburgh City!$"

Route203_Lass_Madeline_Text_1:
# 113 "data/maps/Route203/scripts.pory"
	.string "Oh, I lost! Lalala!$"

Route203_Lass_Madeline_Text_2:
# 114 "data/maps/Route203/scripts.pory"
	.string "I’m collecting lots of Gym Badges.\n"
	.string "They’re so sparkly and pretty!$"

Route203_Text_Rt203JubilifeCity_Text_0:
# 122 "data/maps/Route203/scripts.pory"
	.string "Rt. 203\n"
	.string "{LEFT_ARROW}Jubilife City$"

Route203_Text_Rt203OreburghCity_Text_0:
# 130 "data/maps/Route203/scripts.pory"
	.string "Rt. 203\n"
	.string "{RIGHT_ARROW}Oreburgh City$"

Route203_Text_TrainerTipsIfAPokemonIsAboutToEvolveItCanBeInstantlyStopped_Text_0:
# 138 "data/maps/Route203/scripts.pory"
	.string "Trainer Tips!\p"
	.string "If a Pokémon is about to evolve,\n"
	.string "it can be instantly stopped.\p"
	.string "Press the B Button during evolution\n"
	.string "to startle the Pokémon into stopping.\p"
	.string "That is how evolution can be\n"
	.string "canceled.$"

Route203_Text_TrainerTipsPokemonMovesUseEnergyCalledPowerPoints_Text_0:
# 151 "data/maps/Route203/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Pokémon moves use energy called\n"
	.string "Power Points, or PP for short.\p"
	.string "If the PP of moves runs low, head for\n"
	.string "any Pokémon Center.$"

Route203_Text_YourFavoritePokemonShouldBePlacedAtTheTop_Text_0:
# 162 "data/maps/Route203/scripts.pory"
	.string "Your favorite Pokémon should be placed\n"
	.string "at the top left of your party list.\p"
	.string "That way, it will be the first to go out\n"
	.string "in a battle.$"
