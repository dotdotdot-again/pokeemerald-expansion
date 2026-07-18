SandgemTown_MapScripts::
# 2 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition_Sandgem
# 7 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 3 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_TEMP_4
# 11 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_TEMP_5
# 12 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_TEMP_6
# 13 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_TEMP_7
# 14 "data/maps/SandgemTown/scripts.pory"
	special GetTimeOfDaySpecial
# 15 "data/maps/SandgemTown/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 17 "data/maps/SandgemTown/scripts.pory"
	random 4
# 18 "data/maps/SandgemTown/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/SandgemTown/scripts.pory"
	case 0, SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 28 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 38 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 47 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_5
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 20 "data/maps/SandgemTown/scripts.pory"
	special GetTimeOfDaySpecial
# 21 "data/maps/SandgemTown/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 26 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 29 "data/maps/SandgemTown/scripts.pory"
	special GetTimeOfDaySpecial
# 30 "data/maps/SandgemTown/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_9
# 35 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_4
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 39 "data/maps/SandgemTown/scripts.pory"
	special GetTimeOfDaySpecial
# 40 "data/maps/SandgemTown/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_12
# 45 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 48 "data/maps/SandgemTown/scripts.pory"
	special GetTimeOfDaySpecial
# 49 "data/maps/SandgemTown/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_15
# 55 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 56 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 23 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 32 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_4
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 42 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 51 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 52 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrame_Sandgem
	.2byte 0


OnTransition_Sandgem::
	return


EveryFrame_Sandgem::
# 70 "data/maps/SandgemTown/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_eq EveryFrame_Sandgem_1
	return

EveryFrame_Sandgem_1:
# 72 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_After_Lab_Event
	return


Sandgem_LuDa_Walk_Mid::
# 81 "data/maps/SandgemTown/scripts.pory"
	lockall
# 82 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 83 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 84 "data/maps/SandgemTown/scripts.pory"
	waitse
# 85 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 86 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 87 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 88 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Walk_Top::
# 93 "data/maps/SandgemTown/scripts.pory"
	lockall
# 94 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 95 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 96 "data/maps/SandgemTown/scripts.pory"
	waitse
# 97 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 98 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Top_Movement_0
# 99 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 100 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 101 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Walk_Bottom::
# 106 "data/maps/SandgemTown/scripts.pory"
	lockall
# 107 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 108 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 109 "data/maps/SandgemTown/scripts.pory"
	waitse
# 110 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 111 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Bottom_Movement_0
# 112 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 113 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 114 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Cont::
# 119 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 120 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_LuDa_Cont_1
# 172 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_LuDa_Cont_2
	return

Sandgem_LuDa_Cont_1:
# 123 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 124 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnTheProfessorIsWaiting, MSGBOX_AUTOCLOSE
# 125 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 126 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 127 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 128 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 129 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 130 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsItOurPokemonResearchLab
# 131 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 132 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 133 "data/maps/SandgemTown/scripts.pory"
	waitdooranim
# 134 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 135 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 136 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 137 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 139 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 140 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Walk_Mid_Movement_0
# 141 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 142 "data/maps/SandgemTown/scripts.pory"
	waitse
# 143 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 144 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 145 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_1, MSGBOX_AUTOCLOSE
# 151 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 152 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_2
# 153 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_3
# 154 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_3
# 155 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 156 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 158 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 159 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetsGoInside, MSGBOX_AUTOCLOSE
# 160 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 161 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_4
# 162 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 163 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 164 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
# 165 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_5
# 166 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 167 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/SandgemTown/scripts.pory"
	playse SE_EXIT
# 169 "data/maps/SandgemTown/scripts.pory"
	waitse
# 170 "data/maps/SandgemTown/scripts.pory"
	warpcontinuescript MAP_SANDGEM_HOUSE_LAB, 7, 14, EnteringSandgemLab
	return

Sandgem_LuDa_Cont_2:
# 175 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 176 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasTheProfsWaitingToSeeYou, MSGBOX_AUTOCLOSE
# 177 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 178 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 179 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 180 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 181 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 182 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab
# 183 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 184 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 185 "data/maps/SandgemTown/scripts.pory"
	waitdooranim
# 186 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 187 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 188 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 189 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 191 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 192 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Walk_Mid_Movement_0
# 193 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 194 "data/maps/SandgemTown/scripts.pory"
	waitse
# 195 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 196 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 197 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_1, MSGBOX_AUTOCLOSE
# 203 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 204 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_2
# 205 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_3
# 206 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_3
# 207 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 208 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 209 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 210 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 211 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetsGoIn, MSGBOX_AUTOCLOSE
# 212 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 213 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_4
# 214 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 215 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 216 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
# 217 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_5
# 218 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 219 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/SandgemTown/scripts.pory"
	playse SE_EXIT
# 221 "data/maps/SandgemTown/scripts.pory"
	waitse
# 222 "data/maps/SandgemTown/scripts.pory"
	warpcontinuescript MAP_SANDGEM_HOUSE_LAB, 7, 14, EnteringSandgemLab
	return


EnteringSandgemLab::
# 227 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 228 "data/maps/SandgemTown/scripts.pory"
	call Intro_In_Sandgem_Lab
	return


Sandgem_After_Lab_Event::
# 233 "data/maps/SandgemTown/scripts.pory"
	lockall
# 234 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_0
# 235 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 236 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 237 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Rowan_Outside
# 238 "data/maps/SandgemTown/scripts.pory"
	clearflag BARRY_INTRO_TWO
# 239 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 240 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_0, MSGBOX_AUTOCLOSE
# 241 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 242 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 243 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 244 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Mid_Movement_0
# 245 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 246 "data/maps/SandgemTown/scripts.pory"
	waitse
# 247 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 248 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_1
# 249 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 250 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 251 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_1, MSGBOX_AUTOCLOSE
# 253 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 254 "data/maps/SandgemTown/scripts.pory"
	giveitem ITEM_TM27, 1
# 255 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 256 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_2, MSGBOX_AUTOCLOSE
# 267 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 268 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Rowan_Outside, Sandgem_After_Lab_Event_Movement_2
# 269 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 270 "data/maps/SandgemTown/scripts.pory"
	removeobject Sandgem_Rowan_Outside
# 271 "data/maps/SandgemTown/scripts.pory"
	setflag BARRY_INTRO_TWO
# 272 "data/maps/SandgemTown/scripts.pory"
	closedoor 10, 9
# 273 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_3
# 274 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 275 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 276 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_2
# 341 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_3
Sandgem_After_Lab_Event_1:
# 405 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 2
# 406 "data/maps/SandgemTown/scripts.pory"
	releaseall
	return

Sandgem_After_Lab_Event_2:
# 279 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 280 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnIDidntKnowTheProfessorHadTMs, MSGBOX_AUTOCLOSE
# 281 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 282 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_4
# 284 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 285 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 286 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_3, MSGBOX_YESNO
# 289 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_6
# 323 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_7
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_3:
# 344 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 345 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasWellIllBeTheProfessorHadTMs, MSGBOX_AUTOCLOSE
# 346 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 347 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_4
# 349 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 350 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 351 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_6, MSGBOX_YESNO
# 354 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_10
# 388 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_11
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_6:
# 291 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_FOLLOW_ME, 0
# 292 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 293 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_4, MSGBOX_AUTOCLOSE
# 294 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 295 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 296 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_6
# 297 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 298 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 299 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsThePokemonCenter, MSGBOX_AUTOCLOSE
# 300 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 301 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 302 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_5
# 303 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 304 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 305 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsThePokeMart
# 306 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 307 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_7
# 308 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_8
# 309 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 310 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 311 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 312 "data/maps/SandgemTown/scripts.pory"
	waitse
# 313 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 314 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 315 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 316 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_9
# 317 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_10
# 318 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 319 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 320 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 321 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_7:
# 325 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 326 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_5
# 327 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 328 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 329 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 330 "data/maps/SandgemTown/scripts.pory"
	waitse
# 331 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 332 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 333 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 334 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 335 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_11
# 336 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 337 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 338 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_10:
# 356 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_FOLLOW_ME, 0
# 357 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 358 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_4, MSGBOX_AUTOCLOSE
# 359 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 360 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 361 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_6
# 362 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 363 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 364 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasThisIsThePokemonCenter, MSGBOX_AUTOCLOSE
# 365 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 366 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 367 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_5
# 368 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 369 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 370 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasThisIsThePokeMart
# 371 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 372 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_7
# 373 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_8
# 374 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 375 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 376 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 377 "data/maps/SandgemTown/scripts.pory"
	waitse
# 378 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 379 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 380 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 381 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_9
# 382 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_10
# 383 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 384 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 385 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 386 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_11:
# 390 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 391 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_7
# 392 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 393 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 394 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 395 "data/maps/SandgemTown/scripts.pory"
	waitse
# 396 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 397 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 398 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 399 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_11
# 400 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 401 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 402 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1


SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt::
# 412 "data/maps/SandgemTown/scripts.pory"
	lock
# 413 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt_Text_0, MSGBOX_NPC
# 417 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_IdBetterSaveThis::
# 421 "data/maps/SandgemTown/scripts.pory"
	lock
# 422 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_IdBetterSaveThis_Text_0, MSGBOX_NPC
# 426 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonAreSoCool::
# 430 "data/maps/SandgemTown/scripts.pory"
	lock
# 431 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonAreSoCool_Text_0, MSGBOX_NPC
# 437 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_MapSign::
# 442 "data/maps/SandgemTown/scripts.pory"
	lock
# 443 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_MapSign_Text_0, MSGBOX_SIGN
# 445 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonResearchLabSign::
# 449 "data/maps/SandgemTown/scripts.pory"
	lock
# 450 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonResearchLabSign_Text_0, MSGBOX_SIGN
# 451 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_CounterpartMailbox::
# 455 "data/maps/SandgemTown/scripts.pory"
	lock
# 456 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 457 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SandgemTown_Text_CounterpartMailbox_1
# 462 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SandgemTown_Text_CounterpartMailbox_2
	return

SandgemTown_Text_CounterpartMailbox_1:
# 460 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_CounterpartMailbox_Text_0, MSGBOX_SIGN
	return

SandgemTown_Text_CounterpartMailbox_2:
# 465 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_CounterpartMailbox_Text_1, MSGBOX_SIGN
	return


SandgemTown_Text_PokeMartSign::
# 470 "data/maps/SandgemTown/scripts.pory"
	lock
# 471 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokeMartSign_Text_0, MSGBOX_SIGN
# 473 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonCenterSign::
# 477 "data/maps/SandgemTown/scripts.pory"
	lock
# 478 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonCenterSign_Text_0, MSGBOX_SIGN
# 480 "data/maps/SandgemTown/scripts.pory"
	release
	return


testingSomethingSandgem::
# 632 "data/maps/SandgemTown/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


# 82 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_0:
# 82 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 86 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_1:
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Top_Movement_0:
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 98 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 111 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Bottom_Movement_0:
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 111 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 126 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_0:
# 126 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 126 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 126 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 126 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 126 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 136 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_1:
# 136 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 152 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_2:
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 152 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

# 153 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_3:
# 153 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 153 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 161 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_4:
# 161 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 161 "data/maps/SandgemTown/scripts.pory"
	walk_fast_left
# 161 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_5:
# 165 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 165 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 165 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 234 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_0:
# 234 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 248 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_1:
# 248 "data/maps/SandgemTown/scripts.pory"
	delay_8
# 248 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 268 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_2:
# 268 "data/maps/SandgemTown/scripts.pory"
	face_up
# 268 "data/maps/SandgemTown/scripts.pory"
	delay_8
	step_end

# 273 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_3:
# 273 "data/maps/SandgemTown/scripts.pory"
	delay_8
	step_end

# 282 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_4:
# 282 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 295 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_5:
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 295 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 296 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_6:
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 296 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 307 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_7:
# 307 "data/maps/SandgemTown/scripts.pory"
	face_left
	step_end

# 308 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_8:
# 308 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 316 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_9:
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 317 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_10:
# 317 "data/maps/SandgemTown/scripts.pory"
	face_down
# 317 "data/maps/SandgemTown/scripts.pory"
	delay_8
# 317 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 335 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_11:
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 335 "data/maps/SandgemTown/scripts.pory"
	walk_right
	step_end

Sandgem_LuDa_Cont_Text_0:
# 137 "data/maps/SandgemTown/scripts.pory"
	.string "THUD!!!$"

Sandgem_LuDa_Cont_Text_1:
# 145 "data/maps/SandgemTown/scripts.pory"
	.string "What the...\p"
	.string "Oh, it’s you, {PLAYER}!\p"
	.string "That old guy... He’s not scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn’t matter, {PLAYER}.\n"
	.string "I’m out of here. See you later!$"

Sandgem_After_Lab_Event_Text_0:
# 240 "data/maps/SandgemTown/scripts.pory"
	.string "{PLAYER}!!!!!!!!!$"

Sandgem_After_Lab_Event_Text_1:
# 251 "data/maps/SandgemTown/scripts.pory"
	.string "I have something good here.\n"
	.string "You should take this as well.$"

Sandgem_After_Lab_Event_Text_2:
# 256 "data/maps/SandgemTown/scripts.pory"
	.string "That is a Technical Machine.\n"
	.string "That one contains the move Return.\p"
	.string "Using a Technical Machine, or TM for\n"
	.string "short, teaches a move instantly to\l"
	.string "a Pokémon.\p"
	.string "The move Return gains power the more\n"
	.string "friendly your Pokémon is with you.\p"
	.string "It’s up to you, of course, if you want\n"
	.string "to use that TM or not.\p"
	.string "I’ll send you off with the wish that\n"
	.string "your journey will be fun.$"

Sandgem_After_Lab_Event_Text_3:
# 286 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, {PLAYER}!\n"
	.string "Do you want me to show you around\l"
	.string "town?$"

Sandgem_After_Lab_Event_Text_4:
# 293 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, follow me!$"

Sandgem_After_Lab_Event_Text_5:
# 326 "data/maps/SandgemTown/scripts.pory"
	.string "Ok... no problem$"

Sandgem_After_Lab_Event_Text_6:
# 351 "data/maps/SandgemTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Do you want me to show you around\l"
	.string "town?$"

Sandgem_After_Lab_Event_Text_7:
# 391 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, no worries$"

SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt_Text_0:
# 413 "data/maps/SandgemTown/scripts.pory"
	.string "That thing you have!\p"
	.string "It’s a Pokédex, isn’t it?!\p"
	.string "You’re off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"

SandgemTown_Text_IdBetterSaveThis_Text_0:
# 422 "data/maps/SandgemTown/scripts.pory"
	.string "So I don’t forget what’s happened,\n"
	.string "till now, I’d better save this...\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_Text_PokemonAreSoCool_Text_0:
# 431 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It’s so cool!$"

SandgemTown_Text_MapSign_Text_0:
# 443 "data/maps/SandgemTown/scripts.pory"
	.string "Sandgem Town\n"
	.string "Town of Sand!$"

SandgemTown_Text_PokemonResearchLabSign_Text_0:
# 450 "data/maps/SandgemTown/scripts.pory"
	.string "Pokémon Research Lab$"

SandgemTown_Text_CounterpartMailbox_Text_0:
# 460 "data/maps/SandgemTown/scripts.pory"
	.string "Dawn’s House$"

SandgemTown_Text_CounterpartMailbox_Text_1:
# 465 "data/maps/SandgemTown/scripts.pory"
	.string "Lucas’s House$"

SandgemTown_Text_PokeMartSign_Text_0:
# 471 "data/maps/SandgemTown/scripts.pory"
	.string "All Your Item Needs Fulfilled!\n"
	.string "Pokémon Mart$"

SandgemTown_Text_PokemonCenterSign_Text_0:
# 478 "data/maps/SandgemTown/scripts.pory"
	.string "Heal Your Pokémon!\n"
	.string "Pokémon Center$"

SandgemTown_Text_DawnTheProfessorIsWaiting::
# 485 "data/maps/SandgemTown/scripts.pory"
	.string "Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_Text_DawnThisIsItOurPokemonResearchLab::
# 491 "data/maps/SandgemTown/scripts.pory"
	.string "This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let’s go...$"

SandgemTown_Text_DawnLetsGoInside::
# 497 "data/maps/SandgemTown/scripts.pory"
	.string "Wow, what was that?\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway...\n"
	.string "Let’s go inside.$"

SandgemTown_Text_DawnIDidntKnowTheProfessorHadTMs::
# 507 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow.\n"
	.string "I didn’t know the professor had TMs.\p"
	.string "Was he a Trainer when he was\n"
	.string "young...?$"

SandgemTown_Text_DawnIllActAsYourMentor::
# 514 "data/maps/SandgemTown/scripts.pory"
	.string "OK, {PLAYER}, I’ll act as\n"
	.string "your mentor.\p"
	.string "I’ve got a bit more experience than\n"
	.string "you as a Trainer and as the professor’s\l"
	.string "assistant.\p"
	.string "OK, follow me!$"

SandgemTown_Text_DawnThisIsThePokemonCenter::
# 523 "data/maps/SandgemTown/scripts.pory"
	.string "This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "It’s the place that heals Pokémon\n"
	.string "that have been hurt in battle.\p"
	.string "You can find a Pokémon Center in\n"
	.string "most towns.$"

SandgemTown_Text_DawnThisIsThePokeMart::
# 532 "data/maps/SandgemTown/scripts.pory"
	.string "The building with the blue roof over\n"
	.string "here is the Poké Mart.\p"
	.string "It’s a shop where you can buy and\n"
	.string "sell items and medicine.\p"
	.string "{PLAYER}, since you’re a novice\n"
	.string "Trainer, you won’t be able to buy\l"
	.string "many kinds of merchandise.\p"
	.string "Don’t let it bother you!$"

SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan::
# 543 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, that’s right!\n"
	.string "{PLAYER}...\p"
	.string "Don’t you need to let your family\n"
	.string "know that you’re going to be helping\l"
	.string "Prof. Rowan with the Pokédex?\p"
	.string "You may need to go far away, so I\n"
	.string "think you should let someone know.\p"
	.string "Oh, but before you go, heal up your\n"
	.string "Pokémon at the Pokémon Center.\p"
	.string "It will be a lot less scary that way.\n"
	.string "OK, bye now!$"

SandgemTown_Text_LucasTheProfsWaitingToSeeYou::
# 558 "data/maps/SandgemTown/scripts.pory"
	.string "Hi! I’ve been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof’s waiting to see you.$"

SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab::
# 564 "data/maps/SandgemTown/scripts.pory"
	.string "See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We’ll just go ahead and...$"

SandgemTown_Text_LucasLetsGoIn::
# 570 "data/maps/SandgemTown/scripts.pory"
	.string "What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway...\n"
	.string "Let’s go in.$"

SandgemTown_Text_LucasWellIllBeTheProfessorHadTMs::
# 580 "data/maps/SandgemTown/scripts.pory"
	.string "Well, I’ll be...\n"
	.string "The professor had TMs...?\p"
	.string "Next thing, he’ll tell me he battled\n"
	.string "when he was young.$"

SandgemTown_Text_LucasIWantToShowYouAFewThings::
# 587 "data/maps/SandgemTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "I want to show you a few things.\l"
	.string "So, follow me!$"

SandgemTown_Text_LucasThisIsThePokemonCenter::
# 593 "data/maps/SandgemTown/scripts.pory"
	.string "This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it’s been hurt in battle.\p"
	.string "You’ll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_Text_LucasThisIsThePokeMart::
# 602 "data/maps/SandgemTown/scripts.pory"
	.string "Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It’s a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you’re a rookie\n"
	.string "Trainer, you won’t be able to buy\l"
	.string "very much stuff.\p"
	.string "Don’t worry about it, OK?$"

SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan::
# 613 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, yeah, right!\n"
	.string "{PLAYER}...\p"
	.string "You should let your family know\n"
	.string "you’re helping Prof. Rowan put\l"
	.string "together his Pokédex.\p"
	.string "Sometimes, you have to go far away,\n"
	.string "so you should let someone know.\p"
	.string "Oh, but first, go heal up your\n"
	.string "Pokémon at the Pokémon Center.\p"
	.string "You’ll be safe then.\n"
	.string "OK, be seeing you!$"
