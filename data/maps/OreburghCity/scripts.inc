OreburghCity_MapScripts::
	.byte 0


Oreburgh_TownSign_one::
# 4 "data/maps/OreburghCity/scripts.pory"
	lock
# 5 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_TownSign_one_Text_0, MSGBOX_SIGN
# 7 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_GymSign::
# 11 "data/maps/OreburghCity/scripts.pory"
	lock
# 12 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_GymSign_Text_0, MSGBOX_SIGN
# 15 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou::
# 19 "data/maps/OreburghCity/scripts.pory"
	lock
# 20 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0, MSGBOX_SIGN
# 22 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_OreburghMineBewareOfBusyPokemon::
# 27 "data/maps/OreburghCity/scripts.pory"
	lock
# 28 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0, MSGBOX_SIGN
# 30 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_Younger_at_entrence::
# 34 "data/maps/OreburghCity/scripts.pory"
	lock
# 35 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_Younger_at_entrence_Text_0, MSGBOX_NPC
# 38 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine::
# 42 "data/maps/OreburghCity/scripts.pory"
	lock
# 43 "data/maps/OreburghCity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 44 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HaveYouSeenTheVents::
# 64 "data/maps/OreburghCity/scripts.pory"
	lock
# 65 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HaveYouSeenTheVents_Text_0, MSGBOX_NPC
# 67 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside::
# 71 "data/maps/OreburghCity/scripts.pory"
	lock
# 72 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0, MSGBOX_NPC
# 76 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver::
# 80 "data/maps/OreburghCity/scripts.pory"
	lock
# 81 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0, MSGBOX_NPC
# 85 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention::
# 89 "data/maps/OreburghCity/scripts.pory"
	lock
# 90 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0, MSGBOX_NPC
# 94 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine::
# 99 "data/maps/OreburghCity/scripts.pory"
	lock
# 100 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ROARK_OUT_OF_THE_MINE, OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2
OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1:
# 109 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_2:
# 102 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0, MSGBOX_NPC
	goto OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_1


OreburghCity_Text_ThatsWhatFossilsAre::
# 113 "data/maps/OreburghCity/scripts.pory"
	lock
# 114 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThatsWhatFossilsAre_Text_0, MSGBOX_NPC
# 117 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything::
# 121 "data/maps/OreburghCity/scripts.pory"
	lock
# 122 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0, MSGBOX_NPC
# 126 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_EveryonesProudOfTheMine::
# 130 "data/maps/OreburghCity/scripts.pory"
	lock
# 131 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_EveryonesProudOfTheMine_Text_0, MSGBOX_NPC
# 135 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks::
# 139 "data/maps/OreburghCity/scripts.pory"
	lock
# 140 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0, MSGBOX_NPC
# 142 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap::
# 146 "data/maps/OreburghCity/scripts.pory"
	lock
# 147 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0, MSGBOX_NPC
# 150 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_HereTakeOneOfThese::
# 154 "data/maps/OreburghCity/scripts.pory"
	lock
# 155 "data/maps/OreburghCity/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_111_HP_UP, OreburghCity_Text_HereTakeOneOfThese_2
# 168 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_1, MSGBOX_NPC
OreburghCity_Text_HereTakeOneOfThese_1:
# 171 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_Text_HereTakeOneOfThese_2:
# 157 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_HereTakeOneOfThese_Text_0, MSGBOX_NPC
# 162 "data/maps/OreburghCity/scripts.pory"
	waitmessage
# 163 "data/maps/OreburghCity/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 164 "data/maps/OreburghCity/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
	goto OreburghCity_Text_HereTakeOneOfThese_1


OreburghCity_Text_MachopMachoChopo::
# 175 "data/maps/OreburghCity/scripts.pory"
	lock
# 176 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 177 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopMachoChopo_Text_0, MSGBOX_NPC
# 178 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopGwoohGogogooh::
# 182 "data/maps/OreburghCity/scripts.pory"
	lock
# 183 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 184 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopGwoohGogogooh_Text_0, MSGBOX_NPC
# 185 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_MachopPigyooh::
# 189 "data/maps/OreburghCity/scripts.pory"
	lock
# 190 "data/maps/OreburghCity/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 191 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_MachopPigyooh_Text_0, MSGBOX_NPC
# 192 "data/maps/OreburghCity/scripts.pory"
	release
	return


Oreburgh_TownSign_one_Text_0:
# 5 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City\n"
	.string "City of Energy$"

Oreburgh_GymSign_Text_0:
# 12 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh City Pokémon Gym\n"
	.string "Leader: Roark\l"
	.string "“Call me Roark the Rock!”$"

OreburghCity_Text_OreburghMiningMuseumCoalMiningAndYou_Text_0:
# 20 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mining Museum\n"
	.string "“Coal Mining and You!”$"

OreburghCity_Text_OreburghMineBewareOfBusyPokemon_Text_0:
# 28 "data/maps/OreburghCity/scripts.pory"
	.string "Oreburgh Mine\n"
	.string "Beware of Busy Pokémon!$"

Oreburgh_Younger_at_entrence_Text_0:
# 35 "data/maps/OreburghCity/scripts.pory"
	.string "Can I see your Trainer Case?\n"
	.string "It's got the Gym Badge you just\n"
	.string "won, right?$"

OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0:
# 44 "data/maps/OreburghCity/scripts.pory"
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
# 65 "data/maps/OreburghCity/scripts.pory"
	.string "Have you seen the vents?\n"
	.string "They release steam from down below.$"

OreburghCity_Text_TheseVentsExchangeTheHotAirDownBelowWithTheFreshAirOutside_Text_0:
# 72 "data/maps/OreburghCity/scripts.pory"
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into ’em! Hello!$"

OreburghCity_Text_TMsAreSingleUseOnlyButHMsCanBeUsedOverAndOver_Text_0:
# 81 "data/maps/OreburghCity/scripts.pory"
	.string "TMs are single use only, but HMs\n"
	.string "can be used over and over.\p"
	.string "It’s tricky trying to decide which\n"
	.string "Pokémon should learn what moves.$"

OreburghCity_Text_WhenIRunAroundWithMyRunningShoesOnImTheCenterOfAttention_Text_0:
# 90 "data/maps/OreburghCity/scripts.pory"
	.string "When I run around with my Running\n"
	.string "Shoes on, I’m the center of attention!\p"
	.string "...At least that’s what it feels like.\n"
	.string "There’s always someone looking at me.$"

OreburghCity_Text_TheGymLeaderWentOffToWorkInTheMine_Text_0:
# 102 "data/maps/OreburghCity/scripts.pory"
	.string "The Gym Leader went off to work in\n"
	.string "the mine.$"

OreburghCity_Text_ThatsWhatFossilsAre_Text_0:
# 114 "data/maps/OreburghCity/scripts.pory"
	.string "Natural time capsules buried many,\n"
	.string "many years ago...\p"
	.string "That’s what Fossils are.$"

OreburghCity_Text_UpAheadTheresAHugeMountainThatTowersAboveEverything_Text_0:
# 122 "data/maps/OreburghCity/scripts.pory"
	.string "Up ahead there’s a huge mountain\n"
	.string "that towers above everything.\p"
	.string "It divides Sinnoh into two distinct\n"
	.string "halves.$"

OreburghCity_Text_EveryonesProudOfTheMine_Text_0:
# 131 "data/maps/OreburghCity/scripts.pory"
	.string "Everyone’s proud of the mine.\p"
	.string "They’re digging for coal under the\n"
	.string "sea as we speak...\p"
	.string "It’s amazing how they do it!$"

OreburghCity_Text_ChopChopMachopChopChopAwayOnRocks_Text_0:
# 140 "data/maps/OreburghCity/scripts.pory"
	.string "Chop, chop, MACHOP!\n"
	.string "Chop, chop away on rocks!~$"

OreburghCity_Text_ThisPileOfDirtySandIsCalledASlagHeap_Text_0:
# 147 "data/maps/OreburghCity/scripts.pory"
	.string "This pile of dirty sand is called\n"
	.string "a slag heap.\p"
	.string "It’s the waste from sorting coal.$"

OreburghCity_Text_HereTakeOneOfThese_Text_0:
# 157 "data/maps/OreburghCity/scripts.pory"
	.string "There’s no question. This is hard,\n"
	.string "hard work.\p"
	.string "But working alongside Pokémon...\n"
	.string "It gives me a boost somehow.\p"
	.string "Here, take one of these.$"

OreburghCity_Text_HereTakeOneOfThese_Text_1:
# 168 "data/maps/OreburghCity/scripts.pory"
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_Text_MachopMachoChopo_Text_0:
# 177 "data/maps/OreburghCity/scripts.pory"
	.string "Macho! Chopo!$"

OreburghCity_Text_MachopGwoohGogogooh_Text_0:
# 184 "data/maps/OreburghCity/scripts.pory"
	.string "Gwooh! Gogogooh!$"

OreburghCity_Text_MachopPigyooh_Text_0:
# 191 "data/maps/OreburghCity/scripts.pory"
	.string "Pigyooh!$"
