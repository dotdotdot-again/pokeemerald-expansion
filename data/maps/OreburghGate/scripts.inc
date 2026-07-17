OreburghGate_MapScripts::
	.byte 0


OreburghGate_Trigger_one::
# 4 "data/maps/OreburghGate/scripts.pory"
	lockall
# 5 "data/maps/OreburghGate/scripts.pory"
	applymovement 8, OreburghGate_Trigger_one_Movement_0
# 6 "data/maps/OreburghGate/scripts.pory"
	playse SE_PIN
# 7 "data/maps/OreburghGate/scripts.pory"
	waitse
# 8 "data/maps/OreburghGate/scripts.pory"
	waitmovement
# 9 "data/maps/OreburghGate/scripts.pory"
	applymovement 8, OreburghGate_Trigger_one_Movement_1
# 10 "data/maps/OreburghGate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghGate_Trigger_one_Movement_2
# 11 "data/maps/OreburghGate/scripts.pory"
	waitmovementall
# 12 "data/maps/OreburghGate/scripts.pory"
	call OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou
	return


OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou::
# 16 "data/maps/OreburghGate/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_1
# 32 "data/maps/OreburghGate/scripts.pory"
	lockall
# 33 "data/maps/OreburghGate/scripts.pory"
	applymovement 8, OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Movement_0
# 34 "data/maps/OreburghGate/scripts.pory"
	msgbox OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/OreburghGate/scripts.pory"
	waitmessage
# 43 "data/maps/OreburghGate/scripts.pory"
	giveitem ITEM_HM06
# 44 "data/maps/OreburghGate/scripts.pory"
	setflag FLAG_GOT_HM06
# 45 "data/maps/OreburghGate/scripts.pory"
	msgbox OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/OreburghGate/scripts.pory"
	waitmessage
# 55 "data/maps/OreburghGate/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 6
# 56 "data/maps/OreburghGate/scripts.pory"
	releaseall
	return

OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_1:
# 18 "data/maps/OreburghGate/scripts.pory"
	lock
# 19 "data/maps/OreburghGate/scripts.pory"
	msgbox OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/OreburghGate/scripts.pory"
	waitmessage
# 29 "data/maps/OreburghGate/scripts.pory"
	release
	return


Oreburgh_Gate_Campter_Curtis::
# 63 "data/maps/OreburghGate/scripts.pory"
	trainerbattle_single TRAINER_FLINT, Oreburgh_Gate_Campter_Curtis_Text_0, Oreburgh_Gate_Campter_Curtis_Text_1
# 66 "data/maps/OreburghGate/scripts.pory"
	msgbox Oreburgh_Gate_Campter_Curtis_Text_2, MSGBOX_NPC
# 68 "data/maps/OreburghGate/scripts.pory"
	waitmessage
# 69 "data/maps/OreburghGate/scripts.pory"
	release
	return


Oreburgh_Gate_Picnicker_Diana::
# 73 "data/maps/OreburghGate/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, Oreburgh_Gate_Picnicker_Diana_Text_0, Oreburgh_Gate_Picnicker_Diana_Text_1
# 76 "data/maps/OreburghGate/scripts.pory"
	msgbox Oreburgh_Gate_Picnicker_Diana_Text_2, MSGBOX_NPC
# 78 "data/maps/OreburghGate/scripts.pory"
	waitmessage
# 79 "data/maps/OreburghGate/scripts.pory"
	release
	return


# 5 "data/maps/OreburghGate/scripts.pory"
OreburghGate_Trigger_one_Movement_0:
# 5 "data/maps/OreburghGate/scripts.pory"
	emote_exclamation_mark
	step_end

# 9 "data/maps/OreburghGate/scripts.pory"
OreburghGate_Trigger_one_Movement_1:
# 9 "data/maps/OreburghGate/scripts.pory"
	walk_down
	step_end

# 10 "data/maps/OreburghGate/scripts.pory"
OreburghGate_Trigger_one_Movement_2:
# 10 "data/maps/OreburghGate/scripts.pory"
	face_up
	step_end

# 33 "data/maps/OreburghGate/scripts.pory"
OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Movement_0:
# 33 "data/maps/OreburghGate/scripts.pory"
	face_player
	step_end

OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Text_0:
# 19 "data/maps/OreburghGate/scripts.pory"
	.string "That Hidden Machine, or HM for short,\n"
	.string "contains the hidden move Rock Smash.\p"
	.string "A Pokémon learning Rock Smash can\n"
	.string "smash small boulders in the field.\p"
	.string "But the Trainer has to have \n"
	.string "the Gym Badge from Oreburgh City.\p"
	.string "If you don’t have that Badge, you\n"
	.string "can’t make a Pokémon use the hidden\l"
	.string "move Rock Smash outside of battle.$"

OreburghGate1F_Text_SoLetMeMakeAGiftOfThisHiddenMachineToYou_Text_1:
# 34 "data/maps/OreburghGate/scripts.pory"
	.string "That sparkling new Pokétch!\n"
	.string "Your awkwardness as a traveler!\p"
	.string "Hmm... You’re still a pretty new\n"
	.string "Trainer, aren’t you?\p"
	.string "But it’s all good! You’re a new fellow\n"
	.string "friend of Pokémon!\p"
	.string "So, let me make a gift of this Hidden\n"
	.string "Machine to you!$"

Oreburgh_Gate_Campter_Curtis_Text_0:
# 63 "data/maps/OreburghGate/scripts.pory"
	.string "We Trainers will accept challenges\n"
	.string "anywhere! It’s what we do.$"

Oreburgh_Gate_Campter_Curtis_Text_1:
# 64 "data/maps/OreburghGate/scripts.pory"
	.string "Hmm...\n"
	.string "Insufficiently raised?$"

Oreburgh_Gate_Campter_Curtis_Text_2:
# 66 "data/maps/OreburghGate/scripts.pory"
	.string "Pokémon can appear anywhere in a cave.\n"
	.string "It’s not like the tall grass by roads.$"

Oreburgh_Gate_Picnicker_Diana_Text_0:
# 73 "data/maps/OreburghGate/scripts.pory"
	.string "To celebrate my getting through this\n"
	.string "cave, I’m going to battle you!$"

Oreburgh_Gate_Picnicker_Diana_Text_1:
# 74 "data/maps/OreburghGate/scripts.pory"
	.string "Well, I guess losing is something\n"
	.string "to commemorate, too...$"

Oreburgh_Gate_Picnicker_Diana_Text_2:
# 76 "data/maps/OreburghGate/scripts.pory"
	.string "Getting through that cave feels\n"
	.string "like an adventure.$"
