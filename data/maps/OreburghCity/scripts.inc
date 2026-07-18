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


timeTest::
# 61 "data/maps/OreburghCity/scripts.pory"
	lock
# 62 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 63 "data/maps/OreburghCity/scripts.pory"
	msgbox timeTest_Text_0, MSGBOX_NPC
# 64 "data/maps/OreburghCity/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1
# 68 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 69 "data/maps/OreburghCity/scripts.pory"
	release
	return


questTest::
# 73 "data/maps/OreburghCity/scripts.pory"
	lock
# 74 "data/maps/OreburghCity/scripts.pory"
	msgbox questTest_Text_0, MSGBOX_NPC
# 75 "data/maps/OreburghCity/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1
# 76 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_TownSign_one::
# 80 "data/maps/OreburghCity/scripts.pory"
	lock
# 81 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_TownSign_one_Text_0, MSGBOX_SIGN
# 83 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_GymSign::
# 87 "data/maps/OreburghCity/scripts.pory"
	lock
# 88 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_GymSign_Text_0, MSGBOX_SIGN
# 91 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou::
# 95 "data/maps/OreburghCity/scripts.pory"
	lock
# 96 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0, MSGBOX_SIGN
# 98 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMineBewareOfBusyPokemon::
# 103 "data/maps/OreburghCity/scripts.pory"
	lock
# 104 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0, MSGBOX_SIGN
# 106 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_Younger_at_entrence::
# 110 "data/maps/OreburghCity/scripts.pory"
	lock
# 111 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_Younger_at_entrence_Text_0, MSGBOX_NPC
# 114 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine::
# 118 "data/maps/OreburghCity/scripts.pory"
	lock
# 119 "data/maps/OreburghCity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 120 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HaveYouSeenTheVents::
# 140 "data/maps/OreburghCity/scripts.pory"
	lock
# 141 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HaveYouSeenTheVents_Text_0, MSGBOX_NPC
# 143 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside::
# 147 "data/maps/OreburghCity/scripts.pory"
	lock
# 148 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0, MSGBOX_NPC
# 152 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver::
# 156 "data/maps/OreburghCity/scripts.pory"
	lock
# 157 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0, MSGBOX_NPC
# 161 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention::
# 165 "data/maps/OreburghCity/scripts.pory"
	lock
# 166 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0, MSGBOX_NPC
# 170 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine::
# 175 "data/maps/OreburghCity/scripts.pory"
	lock
# 176 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ROARK_OUT_OF_THE_MINE, OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2
OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1:
# 185 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2:
# 178 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0, MSGBOX_NPC
	goto OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1


OreburghCity_Text_ThatsWhatFossilsAre::
# 189 "data/maps/OreburghCity/scripts.pory"
	lock
# 190 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThatsWhatFossilsAre_Text_0, MSGBOX_NPC
# 193 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything::
# 197 "data/maps/OreburghCity/scripts.pory"
	lock
# 198 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0, MSGBOX_NPC
# 202 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_EveryonesProudOfTheMine::
# 206 "data/maps/OreburghCity/scripts.pory"
	lock
# 207 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_EveryonesProudOfTheMine_Text_0, MSGBOX_NPC
# 211 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks::
# 215 "data/maps/OreburghCity/scripts.pory"
	lock
# 216 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0, MSGBOX_NPC
# 218 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap::
# 222 "data/maps/OreburghCity/scripts.pory"
	lock
# 223 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0, MSGBOX_NPC
# 226 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HereTakeOneOfThese::
# 230 "data/maps/OreburghCity/scripts.pory"
	lock
# 231 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_111_HP_UP, OreburghCity_Text_HereTakeOneOfThese_2
# 244 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_1, MSGBOX_NPC
OreburghCity_Text_HereTakeOneOfThese_1:
# 247 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_HereTakeOneOfThese_2:
# 233 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_0, MSGBOX_NPC
# 238 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 239 "data/maps/OreburghCity/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 240 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
	goto OreburghCity_Text_HereTakeOneOfThese_1


OreburghCity_Text_MachopMachoChopo::
# 251 "data/maps/OreburghCity/scripts.pory"
	lock
# 252 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 253 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopMachoChopo_Text_0, MSGBOX_NPC
# 254 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopGwoohGogogooh::
# 258 "data/maps/OreburghCity/scripts.pory"
	lock
# 259 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 260 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopGwoohGogogooh_Text_0, MSGBOX_NPC
# 261 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopPigyooh::
# 265 "data/maps/OreburghCity/scripts.pory"
	lock
# 266 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 267 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopPigyooh_Text_0, MSGBOX_NPC
# 268 "data/maps/OreburghCity/scripts.pory"
	release
	return


timeTest_Text_0:
# 63 "data/maps/OreburghCity/scripts.pory"
	.string "Here is quest!$"

questTest_Text_0:
# 74 "data/maps/OreburghCity/scripts.pory"
	.string "Quest Done!$"

Oreburgh_TownSign_one_Text_0:
# 81 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City\n"
	.string "City of Energy$"

Oreburgh_GymSign_Text_0:
# 88 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City Pokémon Gym\n"
	.string "Leader: Roark\l"
	.string "“Call me Roark the Rock!”$"

OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0:
# 96 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mining Museum\n"
	.string "“Coal Mining and You!”$"

OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0:
# 104 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mine\n"
	.string "Beware of Busy Pokémon!$"

Oreburgh_Younger_at_entrence_Text_0:
# 111 "data/maps/OreburghCity/scripts.pory"
	.string "Can I see your Trainer Case?\n"
	.string "It's got the Gym Badge you just\n"
	.string "won, right?$"

OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0:
# 120 "data/maps/OreburghCity/scripts.pory"
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
# 141 "data/maps/OreburghCity/scripts.pory"
	.string "Have you seen the vents?\n"
	.string "They release steam from down below.$"

OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0:
# 148 "data/maps/OreburghCity/scripts.pory"
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into ’em! Hello!$"

OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0:
# 157 "data/maps/OreburghCity/scripts.pory"
	.string "TMs are single use only, but HMs\n"
	.string "can be used over and over.\p"
	.string "It’s tricky trying to decide which\n"
	.string "Pokémon should learn what moves.$"

OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0:
# 166 "data/maps/OreburghCity/scripts.pory"
	.string "When I run around with my Running\n"
	.string "Shoes on, I’m the center of attention!\p"
	.string "...At least that’s what it feels like.\n"
	.string "There’s always someone looking at me.$"

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0:
# 178 "data/maps/OreburghCity/scripts.pory"
	.string "The Gym Leader went off to work in\n"
	.string "the mine.$"

OreburghCity_Text_ThatsWhatFossilsAre_Text_0:
# 190 "data/maps/OreburghCity/scripts.pory"
	.string "Natural time capsules buried many,\n"
	.string "many years ago...\p"
	.string "That’s what Fossils are.$"

OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0:
# 198 "data/maps/OreburghCity/scripts.pory"
	.string "Up ahead there’s a huge mountain\n"
	.string "that towers above everything.\p"
	.string "It divides Sinnoh into two distinct\n"
	.string "halves.$"

OreburghCity_Text_EveryonesProudOfTheMine_Text_0:
# 207 "data/maps/OreburghCity/scripts.pory"
	.string "Everyone’s proud of the mine.\p"
	.string "They’re digging for coal under the\n"
	.string "sea as we speak...\p"
	.string "It’s amazing how they do it!$"

OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0:
# 216 "data/maps/OreburghCity/scripts.pory"
	.string "Chop, chop, MACHOP!\n"
	.string "Chop, chop away on rocks!~$"

OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0:
# 223 "data/maps/OreburghCity/scripts.pory"
	.string "This pile of dirty sand is called\n"
	.string "a slag heap.\p"
	.string "It’s the waste from sorting coal.$"

OreburghCity_Text_HereTakeOneOfThese_Text_0:
# 233 "data/maps/OreburghCity/scripts.pory"
	.string "There’s no question. This is hard,\n"
	.string "hard work.\p"
	.string "But working alongside Pokémon...\n"
	.string "It gives me a boost somehow.\p"
	.string "Here, take one of these.$"

OreburghCity_Text_HereTakeOneOfThese_Text_1:
# 244 "data/maps/OreburghCity/scripts.pory"
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_Text_MachopMachoChopo_Text_0:
# 253 "data/maps/OreburghCity/scripts.pory"
	.string "Macho! Chopo!$"

OreburghCity_Text_MachopGwoohGogogooh_Text_0:
# 260 "data/maps/OreburghCity/scripts.pory"
	.string "Gwooh! Gogogooh!$"

OreburghCity_Text_MachopPigyooh_Text_0:
# 267 "data/maps/OreburghCity/scripts.pory"
	.string "Pigyooh!$"
