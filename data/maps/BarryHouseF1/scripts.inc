BarryHouseF1_MapScripts::
	.byte 0


BarrysMomTalk::
# 4 "data/maps/BarryHouseF1/scripts.pory"
	setspeaker BarrysMomTalk_Text_0
# 5 "data/maps/BarryHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq BarrysMomTalk_1
# 15 "data/maps/BarryHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq BarrysMomTalk_2
# 24 "data/maps/BarryHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 8
	goto_if_eq BarrysMomTalk_3
# 34 "data/maps/BarryHouseF1/scripts.pory"
	msgbox BarrysMomTalk_Text_4, MSGBOX_NPC
	return

BarrysMomTalk_1:
# 7 "data/maps/BarryHouseF1/scripts.pory"
	msgbox BarrysMomTalk_Text_1, MSGBOX_NPC
	return

BarrysMomTalk_2:
# 17 "data/maps/BarryHouseF1/scripts.pory"
	msgbox BarrysMomTalk_Text_2, MSGBOX_NPC
	return

BarrysMomTalk_3:
# 26 "data/maps/BarryHouseF1/scripts.pory"
	msgbox BarrysMomTalk_Text_3, MSGBOX_NPC
	return


Barry_Mom_TV::
# 41 "data/maps/BarryHouseF1/scripts.pory"
	lock
# 42 "data/maps/BarryHouseF1/scripts.pory"
	msgbox Barry_Mom_TV_Text_0, MSGBOX_SIGN
# 44 "data/maps/BarryHouseF1/scripts.pory"
	release
	return


BarrysMomTalk_Text_0:
# 4 "data/maps/BarryHouseF1/scripts.pory"
	.string "Barry's Mom$"

BarrysMomTalk_Text_1:
# 7 "data/maps/BarryHouseF1/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysMomTalk_Text_2:
# 17 "data/maps/BarryHouseF1/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd geuss he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysMomTalk_Text_3:
# 26 "data/maps/BarryHouseF1/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "My Barry\n"
	.string "should be out on Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysMomTalk_Text_4:
# 34 "data/maps/BarryHouseF1/scripts.pory"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

Barry_Mom_TV_Text_0:
# 42 "data/maps/BarryHouseF1/scripts.pory"
	.string "It appears to be some show about\n"
	.string "Police investigating crime.$"
