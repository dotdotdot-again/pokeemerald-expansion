OreburghCity_MapScripts::
# 2 "data/maps/OreburghCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_1
# 5 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_2
# 6 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_3
# 7 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_4
# 8 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_5
# 9 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_6
# 10 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_TEMP_7
# 11 "data/maps/OreburghCity/scripts.pory"
	special GetTimeOfDaySpecial
# 12 "data/maps/OreburghCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 14 "data/maps/OreburghCity/scripts.pory"
	random 4
# 15 "data/maps/OreburghCity/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/OreburghCity/scripts.pory"
	case 0, OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 25 "data/maps/OreburghCity/scripts.pory"
	case 1, OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 36 "data/maps/OreburghCity/scripts.pory"
	case 2, OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 45 "data/maps/OreburghCity/scripts.pory"
	case 3, OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 17 "data/maps/OreburghCity/scripts.pory"
	special GetTimeOfDaySpecial
# 18 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 23 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_1
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 26 "data/maps/OreburghCity/scripts.pory"
	special GetTimeOfDaySpecial
# 27 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_9
# 32 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_3
# 33 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_2
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 37 "data/maps/OreburghCity/scripts.pory"
	special GetTimeOfDaySpecial
# 38 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_12
# 43 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 46 "data/maps/OreburghCity/scripts.pory"
	special GetTimeOfDaySpecial
# 47 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_15
# 53 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 54 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 20 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_5
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 29 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_6
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 40 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_7
	return

OreburghCity_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 49 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_5
# 50 "data/maps/OreburghCity/scripts.pory"
	clearflag FLAG_TEMP_6
	return


Oreburgh_Snake::
	return


timeTest::
# 67 "data/maps/OreburghCity/scripts.pory"
	lock
# 68 "data/maps/OreburghCity/scripts.pory"
	setvar VAR_PLAYER_POINTS, 0
# 69 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 70 "data/maps/OreburghCity/scripts.pory"
	msgbox timeTest_Text_0, MSGBOX_NPC
# 71 "data/maps/OreburghCity/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_COMPLETE_DEX
# 75 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 76 "data/maps/OreburghCity/scripts.pory"
	release
	return


questTest::
# 80 "data/maps/OreburghCity/scripts.pory"
	lock
# 81 "data/maps/OreburghCity/scripts.pory"
	setvar VAR_TEMP_5, 0
# 82 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 83 "data/maps/OreburghCity/scripts.pory"
	msgbox questTest_Text_0, MSGBOX_NPC
# 87 "data/maps/OreburghCity/scripts.pory"
	callnative PlayGengarPinballGame
# 88 "data/maps/OreburghCity/scripts.pory"
	waitstate
questTest_2:
# 90 "data/maps/OreburghCity/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 0
	goto_if_eq questTest_5
# 94 "data/maps/OreburghCity/scripts.pory"
	addvar VAR_PLAYER_POINTS, 1
# 95 "data/maps/OreburghCity/scripts.pory"
	addvar VAR_TEMP_5, 1
# 96 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_5, GAME_CORNER_VAR_WINNINGS
	goto_if_eq questTest_7
	goto questTest_2

questTest_1:
# 101 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_2, GAME_CORNER_VAR_WINNINGS
# 102 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 103 "data/maps/OreburghCity/scripts.pory"
	msgbox questTest_Text_1, MSGBOX_NPC
# 105 "data/maps/OreburghCity/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 106 "data/maps/OreburghCity/scripts.pory"
	release
	return

questTest_5:
	goto questTest_1

questTest_7:
	goto questTest_1


hyperTrainTest::
# 110 "data/maps/OreburghCity/scripts.pory"
	lock
# 111 "data/maps/OreburghCity/scripts.pory"
	msgbox hyperTrainTest_Text_0, MSGBOX_YESNO
# 113 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq hyperTrainTest_2
# 125 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq hyperTrainTest_3
hyperTrainTest_1:
# 130 "data/maps/OreburghCity/scripts.pory"
	release
	return

hyperTrainTest_2:
# 114 "data/maps/OreburghCity/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 0
# 115 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq hyperTrainTest_6
# 121 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq hyperTrainTest_7
	goto hyperTrainTest_1

hyperTrainTest_3:
# 126 "data/maps/OreburghCity/scripts.pory"
	msgbox hyperTrainTest_Text_3, MSGBOX_NPC
# 127 "data/maps/OreburghCity/scripts.pory"
	waitmessage
	goto hyperTrainTest_1

hyperTrainTest_6:
# 116 "data/maps/OreburghCity/scripts.pory"
	msgbox hyperTrainTest_Text_1, MSGBOX_NPC
# 118 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 119 "data/maps/OreburghCity/scripts.pory"
	call theMainHyperTrainingPart
	goto hyperTrainTest_1

hyperTrainTest_7:
# 122 "data/maps/OreburghCity/scripts.pory"
	msgbox hyperTrainTest_Text_2, MSGBOX_NPC
	goto hyperTrainTest_1


theMainHyperTrainingPart::
# 134 "data/maps/OreburghCity/scripts.pory"
	special ChoosePartyMon
# 135 "data/maps/OreburghCity/scripts.pory"
	waitstate
# 136 "data/maps/OreburghCity/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq theMainHyperTrainingPart_1
# 141 "data/maps/OreburghCity/scripts.pory"
	multichoice 22, 2, MULTI_PICK_A_STAT, 6
# 142 "data/maps/OreburghCity/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/OreburghCity/scripts.pory"
	case 0, theMainHyperTrainingPart_5
# 163 "data/maps/OreburghCity/scripts.pory"
	case 1, theMainHyperTrainingPart_6
# 172 "data/maps/OreburghCity/scripts.pory"
	case 2, theMainHyperTrainingPart_7
# 181 "data/maps/OreburghCity/scripts.pory"
	case 3, theMainHyperTrainingPart_8
# 190 "data/maps/OreburghCity/scripts.pory"
	case 4, theMainHyperTrainingPart_9
# 199 "data/maps/OreburghCity/scripts.pory"
	case 5, theMainHyperTrainingPart_10
# 208 "data/maps/OreburghCity/scripts.pory"
	case 6, theMainHyperTrainingPart_11
	return

theMainHyperTrainingPart_1:
# 137 "data/maps/OreburghCity/scripts.pory"
	msgbox hyperTrainTest_Text_3, MSGBOX_NPC
# 138 "data/maps/OreburghCity/scripts.pory"
	release
	return

theMainHyperTrainingPart_5:
# 144 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 145 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_13
# 150 "data/maps/OreburghCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/OreburghCity/scripts.pory"
	playse SE_USE_ITEM
# 152 "data/maps/OreburghCity/scripts.pory"
	waitse
# 153 "data/maps/OreburghCity/scripts.pory"
	playse SE_USE_ITEM
# 154 "data/maps/OreburghCity/scripts.pory"
	waitse
# 155 "data/maps/OreburghCity/scripts.pory"
	playse SE_USE_ITEM
# 156 "data/maps/OreburghCity/scripts.pory"
	waitse
# 157 "data/maps/OreburghCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/OreburghCity/scripts.pory"
	waitse
# 159 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 160 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 161 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_1, MSGBOX_NPC
	return

theMainHyperTrainingPart_6:
# 164 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 165 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_16
# 170 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 171 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingPart_7:
# 173 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 174 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_19
# 179 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 180 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingPart_8:
# 182 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 183 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_22
# 188 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 189 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingPart_9:
# 191 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 192 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_25
# 197 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 198 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingPart_10:
# 200 "data/maps/OreburghCity/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 201 "data/maps/OreburghCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq theMainHyperTrainingPart_28
# 206 "data/maps/OreburghCity/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 207 "data/maps/OreburghCity/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
	return

theMainHyperTrainingPart_11:
# 209 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_2, MSGBOX_NPC
	return

theMainHyperTrainingPart_13:
# 147 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingPart_16:
# 167 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingPart_19:
# 176 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingPart_22:
# 185 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingPart_25:
# 194 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return

theMainHyperTrainingPart_28:
# 203 "data/maps/OreburghCity/scripts.pory"
	msgbox theMainHyperTrainingPart_Text_0, MSGBOX_NPC
	return


testingAgian::
# 218 "data/maps/OreburghCity/scripts.pory"
	lock
# 219 "data/maps/OreburghCity/scripts.pory"
	msgbox testingAgian_Text_0, MSGBOX_NPC
# 220 "data/maps/OreburghCity/scripts.pory"
	callnative HyperTrain
# 221 "data/maps/OreburghCity/scripts.pory"
	msgbox testingAgian_Text_1, MSGBOX_NPC
# 222 "data/maps/OreburghCity/scripts.pory"
	release
	return


gameTwo::
# 226 "data/maps/OreburghCity/scripts.pory"
	lock
# 227 "data/maps/OreburghCity/scripts.pory"
	setvar VAR_TEMP_5, 0
# 228 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 229 "data/maps/OreburghCity/scripts.pory"
	msgbox questTest_Text_0, MSGBOX_NPC
# 232 "data/maps/OreburghCity/scripts.pory"
	callnative PlayDiglettPinballGame
# 233 "data/maps/OreburghCity/scripts.pory"
	waitstate
gameTwo_2:
# 235 "data/maps/OreburghCity/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 0
	goto_if_eq gameTwo_5
# 239 "data/maps/OreburghCity/scripts.pory"
	addvar VAR_PLAYER_POINTS, 1 * 2
# 240 "data/maps/OreburghCity/scripts.pory"
	addvar VAR_TEMP_5, 1
# 241 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_5, GAME_CORNER_VAR_WINNINGS
	goto_if_eq gameTwo_7
	goto gameTwo_2

gameTwo_1:
# 246 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_2, GAME_CORNER_VAR_WINNINGS
# 247 "data/maps/OreburghCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PLAYER_POINTS
# 248 "data/maps/OreburghCity/scripts.pory"
	msgbox questTest_Text_1, MSGBOX_NPC
# 250 "data/maps/OreburghCity/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 251 "data/maps/OreburghCity/scripts.pory"
	release
	return

gameTwo_5:
	goto gameTwo_1

gameTwo_7:
	goto gameTwo_1


Oreburgh_TownSign_one::
# 255 "data/maps/OreburghCity/scripts.pory"
	lock
# 256 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_TownSign_one_Text_0, MSGBOX_SIGN
# 258 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_GymSign::
# 262 "data/maps/OreburghCity/scripts.pory"
	lock
# 263 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_GymSign_Text_0, MSGBOX_SIGN
# 266 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou::
# 270 "data/maps/OreburghCity/scripts.pory"
	lock
# 271 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0, MSGBOX_SIGN
# 273 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMineBewareOfBusyPokemon::
# 278 "data/maps/OreburghCity/scripts.pory"
	lock
# 279 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0, MSGBOX_SIGN
# 281 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_Younger_at_entrence::
# 285 "data/maps/OreburghCity/scripts.pory"
	lock
# 286 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_Younger_at_entrence_Text_0, MSGBOX_NPC
# 289 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine::
# 293 "data/maps/OreburghCity/scripts.pory"
	lock
# 294 "data/maps/OreburghCity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 295 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0, MSGBOX_AUTOCLOSE
# 309 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HaveYouSeenTheVents::
# 315 "data/maps/OreburghCity/scripts.pory"
	lock
# 316 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HaveYouSeenTheVents_Text_0, MSGBOX_NPC
# 318 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside::
# 322 "data/maps/OreburghCity/scripts.pory"
	lock
# 323 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0, MSGBOX_NPC
# 327 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver::
# 331 "data/maps/OreburghCity/scripts.pory"
	lock
# 332 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0, MSGBOX_NPC
# 336 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention::
# 340 "data/maps/OreburghCity/scripts.pory"
	lock
# 341 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0, MSGBOX_NPC
# 345 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine::
# 350 "data/maps/OreburghCity/scripts.pory"
	lock
# 351 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ROARK_OUT_OF_THE_MINE, OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2
OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1:
# 360 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2:
# 353 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0, MSGBOX_NPC
	goto OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1


OreburghCity_Text_ThatsWhatFossilsAre::
# 364 "data/maps/OreburghCity/scripts.pory"
	lock
# 365 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThatsWhatFossilsAre_Text_0, MSGBOX_NPC
# 368 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything::
# 372 "data/maps/OreburghCity/scripts.pory"
	lock
# 373 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0, MSGBOX_NPC
# 377 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_EveryonesProudOfTheMine::
# 381 "data/maps/OreburghCity/scripts.pory"
	lock
# 382 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_EveryonesProudOfTheMine_Text_0, MSGBOX_NPC
# 386 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks::
# 390 "data/maps/OreburghCity/scripts.pory"
	lock
# 391 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0, MSGBOX_NPC
# 393 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap::
# 397 "data/maps/OreburghCity/scripts.pory"
	lock
# 398 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0, MSGBOX_NPC
# 401 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HereTakeOneOfThese::
# 405 "data/maps/OreburghCity/scripts.pory"
	lock
# 406 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_111_HP_UP, OreburghCity_Text_HereTakeOneOfThese_2
# 419 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_1, MSGBOX_NPC
OreburghCity_Text_HereTakeOneOfThese_1:
# 422 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_HereTakeOneOfThese_2:
# 408 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_0, MSGBOX_NPC
# 413 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 414 "data/maps/OreburghCity/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 415 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
	goto OreburghCity_Text_HereTakeOneOfThese_1


OreburghCity_Text_MachopMachoChopo::
# 426 "data/maps/OreburghCity/scripts.pory"
	lock
# 427 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 428 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopMachoChopo_Text_0, MSGBOX_NPC
# 429 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopGwoohGogogooh::
# 433 "data/maps/OreburghCity/scripts.pory"
	lock
# 434 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 435 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopGwoohGogogooh_Text_0, MSGBOX_NPC
# 436 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopPigyooh::
# 440 "data/maps/OreburghCity/scripts.pory"
	lock
# 441 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 442 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopPigyooh_Text_0, MSGBOX_NPC
# 443 "data/maps/OreburghCity/scripts.pory"
	release
	return


timeTest_Text_0:
# 70 "data/maps/OreburghCity/scripts.pory"
	.string "Here is quest!$"

questTest_Text_0:
# 83 "data/maps/OreburghCity/scripts.pory"
	.string "you have {STR_VAR_1} points!\nplay my game!$"

questTest_Text_1:
# 103 "data/maps/OreburghCity/scripts.pory"
	.string "You got {STR_VAR_2}\n"
	.string "You have {STR_VAR_1} points$"

hyperTrainTest_Text_0:
# 111 "data/maps/OreburghCity/scripts.pory"
	.string "Do you want me to hyper train one of\n"
	.string "your Pokémon's stats?\p$"

hyperTrainTest_Text_1:
# 116 "data/maps/OreburghCity/scripts.pory"
	.string "Ok, that'll just be one bottle cap.\n"
	.string "Which Pokémon would you like to train?$"

hyperTrainTest_Text_2:
# 122 "data/maps/OreburghCity/scripts.pory"
	.string "Sorry you don't have any bottle caps.$"

hyperTrainTest_Text_3:
# 126 "data/maps/OreburghCity/scripts.pory"
	.string "Have a nice day.$"

theMainHyperTrainingPart_Text_0:
# 147 "data/maps/OreburghCity/scripts.pory"
	.string "sorgy too high$"

theMainHyperTrainingPart_Text_1:
# 161 "data/maps/OreburghCity/scripts.pory"
	.string "All done!\n"
	.string "Have a nice day.$"

theMainHyperTrainingPart_Text_2:
# 209 "data/maps/OreburghCity/scripts.pory"
	.string "Change your mind?\n"
	.string "That's ok, here's your bottle cap back\l"
	.string "have a nice day.$"

testingAgian_Text_0:
# 219 "data/maps/OreburghCity/scripts.pory"
	.string "hyper training test!$"

testingAgian_Text_1:
# 221 "data/maps/OreburghCity/scripts.pory"
	.string "bye bye$"

Oreburgh_TownSign_one_Text_0:
# 256 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City\n"
	.string "City of Energy$"

Oreburgh_GymSign_Text_0:
# 263 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City Pokémon Gym\n"
	.string "Leader: Roark\l"
	.string "“Call me Roark the Rock!”$"

OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0:
# 271 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mining Museum\n"
	.string "“Coal Mining and You!”$"

OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0:
# 279 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mine\n"
	.string "Beware of Busy Pokémon!$"

Oreburgh_Younger_at_entrence_Text_0:
# 286 "data/maps/OreburghCity/scripts.pory"
	.string "Can I see your Trainer Case?\n"
	.string "It's got the Gym Badge you just\n"
	.string "won, right?$"

OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0:
# 295 "data/maps/OreburghCity/scripts.pory"
	.string "Hunh?\p"
	.string "Oh, it’s you, {PLAYER}!\n"
	.string "You finally got here?♀"
	.string "You’re slow like always.\p"
	.string "But anyway, the Gym Leader’s tough!\n"
	.string "Like, seriously serious!\p"
	.string "If the Gym Leader’s this tough,\n"
	.string "I wonder how he compares to my dad...\p"
	.string "Huh?\n"
	.string "I just drifted there.\p"
	.string "Anyway, the Gym Leader’s gone off\n"
	.string "to the coal mine.\p"
	.string "If you want to take on the Gym Leader,\n"
	.string "you’d better go off to the mine!$"

OreburghCity_Text_HaveYouSeenTheVents_Text_0:
# 316 "data/maps/OreburghCity/scripts.pory"
	.string "Have you seen the vents?\n"
	.string "They release steam from down below.$"

OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0:
# 323 "data/maps/OreburghCity/scripts.pory"
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into ’em! Hello!$"

OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0:
# 332 "data/maps/OreburghCity/scripts.pory"
	.string "TMs are single use only, but HMs\n"
	.string "can be used over and over.\p"
	.string "It’s tricky trying to decide which\n"
	.string "Pokémon should learn what moves.$"

OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0:
# 341 "data/maps/OreburghCity/scripts.pory"
	.string "When I run around with my Running\n"
	.string "Shoes on, I’m the center of attention!\p"
	.string "...At least that’s what it feels like.\n"
	.string "There’s always someone looking at me.$"

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0:
# 353 "data/maps/OreburghCity/scripts.pory"
	.string "The Gym Leader went off to work in\n"
	.string "the mine.$"

OreburghCity_Text_ThatsWhatFossilsAre_Text_0:
# 365 "data/maps/OreburghCity/scripts.pory"
	.string "Natural time capsules buried many,\n"
	.string "many years ago...\p"
	.string "That’s what Fossils are.$"

OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0:
# 373 "data/maps/OreburghCity/scripts.pory"
	.string "Up ahead there’s a huge mountain\n"
	.string "that towers above everything.\p"
	.string "It divides Sinnoh into two distinct\n"
	.string "halves.$"

OreburghCity_Text_EveryonesProudOfTheMine_Text_0:
# 382 "data/maps/OreburghCity/scripts.pory"
	.string "Everyone’s proud of the mine.\p"
	.string "They’re digging for coal under the\n"
	.string "sea as we speak...\p"
	.string "It’s amazing how they do it!$"

OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0:
# 391 "data/maps/OreburghCity/scripts.pory"
	.string "Chop, chop, MACHOP!\n"
	.string "Chop, chop away on rocks!~$"

OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0:
# 398 "data/maps/OreburghCity/scripts.pory"
	.string "This pile of dirty sand is called\n"
	.string "a slag heap.\p"
	.string "It’s the waste from sorting coal.$"

OreburghCity_Text_HereTakeOneOfThese_Text_0:
# 408 "data/maps/OreburghCity/scripts.pory"
	.string "There’s no question. This is hard,\n"
	.string "hard work.\p"
	.string "But working alongside Pokémon...\n"
	.string "It gives me a boost somehow.\p"
	.string "Here, take one of these.$"

OreburghCity_Text_HereTakeOneOfThese_Text_1:
# 419 "data/maps/OreburghCity/scripts.pory"
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_Text_MachopMachoChopo_Text_0:
# 428 "data/maps/OreburghCity/scripts.pory"
	.string "Macho! Chopo!$"

OreburghCity_Text_MachopGwoohGogogooh_Text_0:
# 435 "data/maps/OreburghCity/scripts.pory"
	.string "Gwooh! Gogogooh!$"

OreburghCity_Text_MachopPigyooh_Text_0:
# 442 "data/maps/OreburghCity/scripts.pory"
	.string "Pigyooh!$"
