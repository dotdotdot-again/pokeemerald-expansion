OreburghPokemonCenter_F2_MapScripts::
	.byte 0


OreburghPokemonCenter_F2_Welcome::
# 4 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	lock
# 5 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox OreburghPokemonCenter_F2_Welcome_Text_0, MSGBOX_NPC
# 7 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return


OreburghPokemonCenter_F2_Shop::
# 11 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	lock
# 12 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	faceplayer
# 13 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	message OreburghPokemonCenter_F2_Shop_Text_0
# 15 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitmessage
# 16 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	pokemart blueMints
# 17 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox OreburghPokemonCenter_F2_Shop_Text_1
# 18 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	end


	.align 2
# 22 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
blueMints:
# 23 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 24 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 25 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.2byte ITEM_LAX_MINT
# 26 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 27 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

moveTester::
# 31 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	lock
# 32 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox moveTester_Text_0, MSGBOX_NPC
# 33 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	move_tutor MOVE_THUNDER_PUNCH, moveTester_Text_1, moveTester_Text_2, declineJmp, TaughtJmp
	return


declineJmp::
# 39 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox declineJmp_Text_0, MSGBOX_NPC
# 40 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return


TaughtJmp::
# 44 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox TaughtJmp_Text_0, MSGBOX_NPC
# 45 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return


Oreburgh_Move_Relearn::
# 50 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	lock
# 52 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 53 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_0, MSGBOX_YESNO
# 55 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Oreburgh_Move_Relearn_1
# 93 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Oreburgh_Move_Relearn_2
	return

Oreburgh_Move_Relearn_1:
# 57 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	checkspecies_choose OPEN_PARTY_SCREEN
# 58 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq Oreburgh_Move_Relearn_5
# 65 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	special IsSelectedMonEgg
# 66 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Oreburgh_Move_Relearn_8
# 73 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	special HasMovesToRelearn
# 74 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Oreburgh_Move_Relearn_11
# 80 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Oreburgh_Move_Relearn_12
# 87 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_1, MSGBOX_NPC
# 88 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

Oreburgh_Move_Relearn_2:
# 95 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_1, MSGBOX_NPC
# 96 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

Oreburgh_Move_Relearn_5:
# 60 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_1, MSGBOX_NPC
# 61 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

Oreburgh_Move_Relearn_8:
# 68 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_2, MSGBOX_NPC
# 69 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

Oreburgh_Move_Relearn_11:
# 76 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	special TeachMoveRelearnerMove
# 77 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitstate
# 78 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

Oreburgh_Move_Relearn_12:
# 82 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_3, MSGBOX_NPC
# 84 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return


hyperTrainTestReal::
# 103 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	lock
# 104 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox hyperTrainTestReal_Text_0, MSGBOX_YESNO
# 106 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq hyperTrainTestReal_2
# 118 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq hyperTrainTestReal_3
hyperTrainTestReal_1:
# 123 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

hyperTrainTestReal_2:
# 107 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 108 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq hyperTrainTestReal_6
# 114 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq hyperTrainTestReal_7
	goto hyperTrainTestReal_1

hyperTrainTestReal_3:
# 119 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_1, MSGBOX_NPC
# 120 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitmessage
	goto hyperTrainTestReal_1

hyperTrainTestReal_6:
# 109 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox hyperTrainTestReal_Text_1, MSGBOX_NPC
# 111 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitmessage
# 112 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	call theMainHyperTrainingRealPart2
	goto hyperTrainTestReal_1

hyperTrainTestReal_7:
# 115 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox hyperTrainTestReal_Text_2, MSGBOX_NPC
	goto hyperTrainTestReal_1


theMainHyperTrainingRealPart2::
# 127 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	special ChoosePartyMon
# 128 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitstate
# 129 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq theMainHyperTrainingRealPart2_1
# 134 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	multichoice 18, 2, MULTI_PICK_A_STAT, 6
# 135 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 0, theMainHyperTrainingRealPart2_5
# 156 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 1, theMainHyperTrainingRealPart2_6
# 165 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 2, theMainHyperTrainingRealPart2_7
# 174 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 3, theMainHyperTrainingRealPart2_8
# 183 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 4, theMainHyperTrainingRealPart2_9
# 192 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 5, theMainHyperTrainingRealPart2_10
# 201 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	case 6, theMainHyperTrainingRealPart2_11
	return

theMainHyperTrainingRealPart2_1:
# 130 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox Oreburgh_Move_Relearn_Text_1, MSGBOX_NPC
# 131 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	release
	return

theMainHyperTrainingRealPart2_5:
# 137 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 138 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_13
# 143 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	playse SE_USE_ITEM
# 145 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitse
# 146 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	playse SE_USE_ITEM
# 147 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitse
# 148 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	playse SE_USE_ITEM
# 149 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitse
# 150 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 151 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	waitse
# 152 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 153 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 154 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_1, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_6:
# 157 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 158 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_16
# 163 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 164 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingRealPart2_7:
# 166 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 167 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_19
# 172 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 173 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingRealPart2_8:
# 175 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 176 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_22
# 181 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 182 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingRealPart2_9:
# 184 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 185 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_25
# 190 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 191 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingRealPart2_10:
# 193 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 194 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingRealPart2_28
# 199 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 200 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingRealPart2_11:
# 202 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_2, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_13:
# 140 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_16:
# 160 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_19:
# 169 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_22:
# 178 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_25:
# 187 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingRealPart2_28:
# 196 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	msgbox theMainHyperTrainingRealPart2_Text_0, MSGBOX_NPC
	return


OreburghPokemonCenter_F2_Welcome_Text_0:
# 5 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "trainer assistance club!$"

OreburghPokemonCenter_F2_Shop_Text_0:
# 13 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Welcome to the Trainer assistance club\n"
	.string "How may I serve you?$"

OreburghPokemonCenter_F2_Shop_Text_1:
# 17 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Please come again.$"

moveTester_Text_0:
# 32 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "testing move tutur stuff$"

moveTester_Text_1:
# 33 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "want teach msg$"

moveTester_Text_2:
# 33 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "mon selectMSG$"

declineJmp_Text_0:
# 39 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "decline Jump?$"

TaughtJmp_Text_0:
# 44 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "taught jump?$"

Oreburgh_Move_Relearn_Text_0:
# 53 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Hello, would you like me to help your\n"
	.string "Pokémon remember a move?$"

Oreburgh_Move_Relearn_Text_1:
# 60 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Have a nice day.$"

Oreburgh_Move_Relearn_Text_2:
# 68 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Sorry I can't teach a move to an egg$"

Oreburgh_Move_Relearn_Text_3:
# 82 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Sorry, it seems this Pokémon doesn't\n"
	.string "have any movies it can relearn.$"

hyperTrainTestReal_Text_0:
# 104 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Do you want me to hyper train one of\n"
	.string "your Pokémon's stats?\p$"

hyperTrainTestReal_Text_1:
# 109 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Ok, that'll just be one bottle cap.\n"
	.string "Which Pokémon would you like to train?$"

hyperTrainTestReal_Text_2:
# 115 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Sorry you don't have any bottle caps.$"

theMainHyperTrainingRealPart2_Text_0:
# 140 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "sorgy too high$"

theMainHyperTrainingRealPart2_Text_1:
# 154 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "All done!\n"
	.string "Have a nice day.$"

theMainHyperTrainingRealPart2_Text_2:
# 202 "data/maps/OreburghPokemonCenter_F2/scripts.pory"
	.string "Change your mind?\n"
	.string "That's ok, here's your bottle cap back\l"
	.string "have a nice day.$"
