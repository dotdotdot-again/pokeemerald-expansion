Twinlead_House_One_MapScripts::
	.byte 0


Twinlead_House_One_Old_lady::
# 4 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 5 "data/maps/Twinlead_House_One/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, Twinlead_House_One_Old_lady_1
# 12 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Old_lady_Text_1, MSGBOX_NPC
# 19 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return

Twinlead_House_One_Old_lady_1:
# 7 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Old_lady_Text_0, MSGBOX_NPC
# 9 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_Twin::
# 26 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 27 "data/maps/Twinlead_House_One/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, Twinlead_House_One_Twin_1
# 34 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Twin_Text_1, MSGBOX_NPC
# 36 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return

Twinlead_House_One_Twin_1:
# 29 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Twin_Text_0, MSGBOX_NPC
# 31 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_TV::
# 43 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 44 "data/maps/Twinlead_House_One/scripts.pory"
	setspeaker Twinlead_House_One_TV_Text_0
# 45 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_TV_Text_1, MSGBOX_SIGN
# 58 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_TV_Com::
# 62 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 63 "data/maps/Twinlead_House_One/scripts.pory"
	setspeaker Twinlead_House_One_TV_Com_Text_0
# 64 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_TV_Com_Text_1, MSGBOX_SIGN
# 66 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_Old_lady_Text_0:
# 7 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Well! Professor Rowan gave you a\n"
	.string "Pokédex, did he?$"

Twinlead_House_One_Old_lady_Text_1:
# 12 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years."
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

Twinlead_House_One_Twin_Text_0:
# 29 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Listen, listen, {PLAYER}.\n"
	.string "I want a cute Pokémon!$"

Twinlead_House_One_Twin_Text_1:
# 34 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Listen, listen, {PLAYER}\n"
	.string "I want a cute Pokémon!$"

Twinlead_House_One_TV_Text_0:
# 44 "data/maps/Twinlead_House_One/scripts.pory"
	.string "MC$"

Twinlead_House_One_TV_Text_1:
# 45 "data/maps/Twinlead_House_One/scripts.pory"
	.string "A Trainer's Day!\p"
	.string "This program offers unique looks into\n"
	.string "the daily lives of Trainers.\p"
	.string "We cover a variety of topic that\n"
	.string "affect and convern Trainers.\p"
	.string "We seek tips on Trainer-related\n"
	.string "news for coverage on the show\p"
	.string "Please also consider mixing records\n"
	.string "with friends in a Union Room.\p"
	.string "That will allow us to check the\n"
	.string "routines of your friends, too.\p"
	.string "Please tune in again next time.\n"
	.string "Good-bye, but just for now!$"

Twinlead_House_One_TV_Com_Text_0:
# 63 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Commercial$"

Twinlead_House_One_TV_Com_Text_1:
# 64 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Where there is Pokétch,\n"
	.string "there is joy.$"
