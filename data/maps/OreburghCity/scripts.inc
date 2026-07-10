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


Oreburgh_Younger_at_entrence::
# 19 "data/maps/OreburghCity/scripts.pory"
	lock
# 20 "data/maps/OreburghCity/scripts.pory"
	msgbox Oreburgh_Younger_at_entrence_Text_0, MSGBOX_NPC
# 23 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine::
# 27 "data/maps/OreburghCity/scripts.pory"
	lock
# 28 "data/maps/OreburghCity/scripts.pory"
	setspeaker SP_NAME_BARRY
# 29 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/OreburghCity/scripts.pory"
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

Oreburgh_Younger_at_entrence_Text_0:
# 20 "data/maps/OreburghCity/scripts.pory"
	.string "Can I see your Trainer Case?\n"
	.string "It's got the Gym Badge you just\n"
	.string "won, right?$"

OreburghCity_Text_TheGymLeadersGoneOffToTheCoalMine_Text_0:
# 29 "data/maps/OreburghCity/scripts.pory"
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
