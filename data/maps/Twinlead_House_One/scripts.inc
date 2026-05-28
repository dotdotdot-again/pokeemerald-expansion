Twinlead_House_One_MapScripts::
	.byte 0


Twinlead_House_One_Old_lady::
# 4 "data/maps/Twinlead_House_One/scripts.pory"
	lockall
# 5 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Old_lady_Text_0, MSGBOX_NPC
# 12 "data/maps/Twinlead_House_One/scripts.pory"
	releaseall
	return


Twinlead_House_One_Twin::
# 16 "data/maps/Twinlead_House_One/scripts.pory"
	lockall
# 17 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_Twin_Text_0, MSGBOX_NPC
# 19 "data/maps/Twinlead_House_One/scripts.pory"
	releaseall
	return


Twinlead_House_One_TV::
# 23 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 24 "data/maps/Twinlead_House_One/scripts.pory"
	setspeaker Twinlead_House_One_TV_Text_0
# 25 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_TV_Text_1, MSGBOX_SIGN
# 38 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_TV_Com::
# 42 "data/maps/Twinlead_House_One/scripts.pory"
	lock
# 43 "data/maps/Twinlead_House_One/scripts.pory"
	setspeaker Twinlead_House_One_TV_Com_Text_0
# 44 "data/maps/Twinlead_House_One/scripts.pory"
	msgbox Twinlead_House_One_TV_Com_Text_1, MSGBOX_SIGN
# 46 "data/maps/Twinlead_House_One/scripts.pory"
	release
	return


Twinlead_House_One_Old_lady_Text_0:
# 5 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years."
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

Twinlead_House_One_Twin_Text_0:
# 17 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Listen, listen, {PLAYER}\n"
	.string "I want a cute Pokémon!$"

Twinlead_House_One_TV_Text_0:
# 24 "data/maps/Twinlead_House_One/scripts.pory"
	.string "MC$"

Twinlead_House_One_TV_Text_1:
# 25 "data/maps/Twinlead_House_One/scripts.pory"
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
# 43 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Commercial$"

Twinlead_House_One_TV_Com_Text_1:
# 44 "data/maps/Twinlead_House_One/scripts.pory"
	.string "Where there is Pokétch,\n"
	.string "there is joy.$"
