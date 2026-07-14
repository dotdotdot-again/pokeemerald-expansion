Oreburgh_Mine_F2_MapScripts::
	.byte 0


MineF2_Roark_Event::
# 4 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lockall
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	applymovement Roark_Mine, MineF2_Roark_Event_Movement_0
# 6 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmovement
# 7 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	setspeaker SP_NAME_ROARK
# 8 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox MineF2_Roark_Event_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmessage
# 12 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	playse SE_M_ROCK_THROW
# 13 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	applymovement 1, MineF2_Roark_Event_Movement_1
# 14 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmovementall
# 15 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	removeobject 1
# 16 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	setflag FLAG_TEMP_11
# 17 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitse
# 18 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	applymovement Roark_Mine, MineF2_Roark_Event_Movement_2
# 19 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	setspeaker SP_NAME_ROARK
# 20 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox MineF2_Roark_Event_Text_1, MSGBOX_AUTOCLOSE
# 27 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmessage
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	applymovement Roark_Mine, MineF2_Roark_Event_Movement_3
# 29 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmovement
# 30 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	removeobject Roark_Mine
# 31 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	setflag FLAG_ROARK_OUT_OF_THE_MINE
# 32 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	releaseall
	return


# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
MineF2_Roark_Event_Movement_0:
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	face_down
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	delay_16
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	delay_16
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	face_right
# 5 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	delay_16
	step_end

# 13 "data/maps/Oreburgh_Mine_F2/scripts.pory"
MineF2_Roark_Event_Movement_1:
# 13 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	rock_smash_break
	step_end

# 18 "data/maps/Oreburgh_Mine_F2/scripts.pory"
MineF2_Roark_Event_Movement_2:
# 18 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	face_down
	step_end

# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
MineF2_Roark_Event_Movement_3:
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
# 28 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	walk_right
	step_end

MineF2_Roark_Event_Text_0:
# 8 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "OK, stand back and watch this.\p"
	.string "Using the hidden move Rock Smash,\n"
	.string "a boulder blocking your way...$"

MineF2_Roark_Event_Text_1:
# 20 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Fallen boulders need to be smashed\n"
	.string "so they’re out of the way.\p"
	.string "If you could get the Badge from\n"
	.string "the Gym in town, you’d be able\l"
	.string "to do this too.\p"
	.string "Of course, you’d have to beat the\n"
	.string "Gym Leader first. That’d be me!$"
