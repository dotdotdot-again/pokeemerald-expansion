Sandgem_Lucas_House_F2_MapScripts::
	.byte 0


LuDa_PC::
# 4 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	lock
# 5 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	checkplayergender
# 6 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LuDa_PC_2
# 11 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LuDa_PC_3
LuDa_PC_1:
# 16 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	release
	return

LuDa_PC_2:
# 9 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	msgbox LuDa_PC_Text_0, MSGBOX_NPC
	goto LuDa_PC_1

LuDa_PC_3:
# 14 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	msgbox LuDa_PC_Text_1, MSGBOX_NPC
	goto LuDa_PC_1


LuDa_Sangem_Trashcan::
# 20 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	lock
# 21 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	checkplayergender
# 22 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LuDa_Sangem_Trashcan_2
# 27 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LuDa_Sangem_Trashcan_3
LuDa_Sangem_Trashcan_1:
# 32 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	release
	return

LuDa_Sangem_Trashcan_2:
# 25 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	msgbox LuDa_Sangem_Trashcan_Text_0, MSGBOX_NPC
	goto LuDa_Sangem_Trashcan_1

LuDa_Sangem_Trashcan_3:
# 30 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	msgbox LuDa_Sangem_Trashcan_Text_1, MSGBOX_NPC
	goto LuDa_Sangem_Trashcan_1


LuDa_PC_Text_0:
# 9 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	.string "It's Dawn's PC$"

LuDa_PC_Text_1:
# 14 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	.string "It's Lucas's PC$"

LuDa_Sangem_Trashcan_Text_0:
# 25 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	.string "It's Dawn's Trash can$"

LuDa_Sangem_Trashcan_Text_1:
# 30 "data/maps/Sandgem_Lucas_House_F2/scripts.pory"
	.string "It's Lucas's Trash Can$"
