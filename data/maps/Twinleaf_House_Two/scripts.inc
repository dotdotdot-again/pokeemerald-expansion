Twinleaf_House_Two_MapScripts::
	.byte 0


Twinleaf_House_Two_guy::
# 4 "data/maps/Twinleaf_House_Two/scripts.pory"
	lockall
# 5 "data/maps/Twinleaf_House_Two/scripts.pory"
	msgbox Twinleaf_House_Two_guy_Text_0, MSGBOX_NPC
# 7 "data/maps/Twinleaf_House_Two/scripts.pory"
	releaseall
	return


Twinleaf_House_Two_TV_Com::
# 11 "data/maps/Twinleaf_House_Two/scripts.pory"
	lock
# 12 "data/maps/Twinleaf_House_Two/scripts.pory"
	setspeaker Twinleaf_House_Two_TV_Com_Text_0
# 13 "data/maps/Twinleaf_House_Two/scripts.pory"
	msgbox Twinleaf_House_Two_TV_Com_Text_1, MSGBOX_SIGN
# 15 "data/maps/Twinleaf_House_Two/scripts.pory"
	release
	return


Twinleaf_House_Two_guy_Text_0:
# 5 "data/maps/Twinleaf_House_Two/scripts.pory"
	.string "You're off to hang with Barry\n"
	.string "again, right? You two sure are tight!$"

Twinleaf_House_Two_TV_Com_Text_0:
# 12 "data/maps/Twinleaf_House_Two/scripts.pory"
	.string "Commercial$"

Twinleaf_House_Two_TV_Com_Text_1:
# 13 "data/maps/Twinleaf_House_Two/scripts.pory"
	.string "Pokémon Center.\n"
	.string "Always by your side.$"
