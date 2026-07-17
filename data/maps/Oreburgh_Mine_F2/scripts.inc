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


Oreburgh_Mine_Worker_Mason::
# 36 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 37 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	trainerbattle_single TRAINER_COLE, Oreburgh_Mine_Worker_Mason_Text_0, Oreburgh_Mine_Worker_Mason_Text_1
# 39 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox Oreburgh_Mine_Worker_Mason_Text_2, MSGBOX_NPC
# 41 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmessage
# 42 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


Oreburgh_Mine_Worker_Colin::
# 46 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 47 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	trainerbattle_single TRAINER_JEFF, Oreburgh_Mine_Worker_Colin_Text_0, Oreburgh_Mine_Worker_Colin_Text_1
# 50 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox Oreburgh_Mine_Worker_Colin_Text_2, MSGBOX_NPC
# 53 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	waitmessage
# 54 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_IMetTheseMachopOnRoute207::
# 58 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 59 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_IMetTheseMachopOnRoute207_Text_0, MSGBOX_NPC
# 62 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_MachopMaaacho::
# 66 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 67 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 68 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_MachopMaaacho_Text_0, MSGBOX_NPC
# 69 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_MachopChopChop::
# 73 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 74 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 75 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_MachopChopChop_Text_0, MSGBOX_NPC
# 76 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_MachopChopmacho::
# 80 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 81 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 82 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_MachopChopmacho_Text_0, MSGBOX_NPC
# 83 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_Rolycoly::
# 87 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 88 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	playmoncry SPECIES_ROLYCOLY, 0
# 89 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_Rolycoly_Text_0, MSGBOX_NPC
# 90 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
	return


OreburghMineB2F_Text_New_Roly_NPC::
# 94 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	lock
# 95 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	msgbox OreburghMineB2F_Text_New_Roly_NPC_Text_0, MSGBOX_NPC
# 98 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	release
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

Oreburgh_Mine_Worker_Mason_Text_0:
# 37 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "I’m gonna let you in on a secret...\n"
	.string "I snuck my Pokémon to work!$"

Oreburgh_Mine_Worker_Mason_Text_1:
# 38 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Well, now aren’t you something!$"

Oreburgh_Mine_Worker_Mason_Text_2:
# 39 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "OK, OK, time for work! I’ll work up\n"
	.string "a thirst with my Pokémon!$"

Oreburgh_Mine_Worker_Colin_Text_0:
# 47 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Fine, all righty then.\n"
	.string "Just a quick battle on my break!$"

Oreburgh_Mine_Worker_Colin_Text_1:
# 48 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Wahaha!\n"
	.string "Mercy, I cry mercy!$"

Oreburgh_Mine_Worker_Colin_Text_2:
# 50 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "I’d better get on back to work...\p"
	.string "You know, I’d rather be traveling\n"
	.string "around with Pokémon the way you do.$"

OreburghMineB2F_Text_IMetTheseMachopOnRoute207_Text_0:
# 59 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "I met these MACHOP on Route 207.\p"
	.string "They’ve now become my most trusted\n"
	.string "partners!$"

OreburghMineB2F_Text_MachopMaaacho_Text_0:
# 68 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Maaacho!$"

OreburghMineB2F_Text_MachopChopChop_Text_0:
# 75 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Chopchop!$"

OreburghMineB2F_Text_MachopChopmacho_Text_0:
# 82 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Chopmacho!$"

OreburghMineB2F_Text_Rolycoly_Text_0:
# 89 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "Roll!$"

OreburghMineB2F_Text_New_Roly_NPC_Text_0:
# 95 "data/maps/Oreburgh_Mine_F2/scripts.pory"
	.string "These Rolycoly sure are useful!\p"
	.string "I love seeing people and Pokémon\n"
	.string "working together so well!$"
