SandgemTown_MapScripts::
# 2 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition_Sandgem
# 3 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrame_Sandgem
	.2byte 0


OnTransition_Sandgem::
	return


EveryFrame_Sandgem::
# 16 "data/maps/SandgemTown/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_eq EveryFrame_Sandgem_1
	return

EveryFrame_Sandgem_1:
# 18 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_After_Lab_Event
	return


Sandgem_LuDa_Walk_Mid::
# 27 "data/maps/SandgemTown/scripts.pory"
	lockall
# 28 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 29 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 30 "data/maps/SandgemTown/scripts.pory"
	waitse
# 31 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 32 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 33 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 34 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Walk_Top::
# 39 "data/maps/SandgemTown/scripts.pory"
	lockall
# 40 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 41 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 42 "data/maps/SandgemTown/scripts.pory"
	waitse
# 43 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 44 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Top_Movement_0
# 45 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 46 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 47 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Walk_Bottom::
# 52 "data/maps/SandgemTown/scripts.pory"
	lockall
# 53 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 54 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 55 "data/maps/SandgemTown/scripts.pory"
	waitse
# 56 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 57 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Bottom_Movement_0
# 58 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 59 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 60 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Cont::
# 65 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 66 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_LuDa_Cont_1
# 118 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_LuDa_Cont_2
	return

Sandgem_LuDa_Cont_1:
# 69 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 70 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnTheProfessorIsWaiting, MSGBOX_AUTOCLOSE
# 71 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 72 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 73 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 74 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 75 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 76 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsItOurPokemonResearchLab
# 77 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 78 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 79 "data/maps/SandgemTown/scripts.pory"
	waitdooranim
# 80 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 81 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 82 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 83 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 85 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 86 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Walk_Mid_Movement_0
# 87 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 88 "data/maps/SandgemTown/scripts.pory"
	waitse
# 89 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 90 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 91 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_1, MSGBOX_AUTOCLOSE
# 97 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 98 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_2
# 99 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_3
# 100 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_3
# 101 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 102 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 103 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 104 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 105 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetsGoInside, MSGBOX_AUTOCLOSE
# 106 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 107 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_4
# 108 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 109 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 110 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
# 111 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_5
# 112 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 113 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/SandgemTown/scripts.pory"
	playse SE_EXIT
# 115 "data/maps/SandgemTown/scripts.pory"
	waitse
# 116 "data/maps/SandgemTown/scripts.pory"
	warpcontinuescript MAP_SANDGEM_HOUSE_LAB, 7, 14, EnteringSandgemLab
	return

Sandgem_LuDa_Cont_2:
# 121 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 122 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasTheProfsWaitingToSeeYou, MSGBOX_AUTOCLOSE
# 123 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 124 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 125 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 126 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 127 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 128 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab
# 129 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 130 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 131 "data/maps/SandgemTown/scripts.pory"
	waitdooranim
# 132 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 133 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 134 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 135 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 137 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 138 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Walk_Mid_Movement_0
# 139 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 140 "data/maps/SandgemTown/scripts.pory"
	waitse
# 141 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 142 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 143 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_1, MSGBOX_AUTOCLOSE
# 149 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 150 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_2
# 151 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_3
# 152 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_3
# 153 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 154 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 155 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 156 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 157 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetsGoIn, MSGBOX_AUTOCLOSE
# 158 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 159 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_4
# 160 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 161 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 162 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
# 163 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_5
# 164 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 165 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/SandgemTown/scripts.pory"
	playse SE_EXIT
# 167 "data/maps/SandgemTown/scripts.pory"
	waitse
# 168 "data/maps/SandgemTown/scripts.pory"
	warpcontinuescript MAP_SANDGEM_HOUSE_LAB, 7, 14, EnteringSandgemLab
	return


EnteringSandgemLab::
# 173 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data/maps/SandgemTown/scripts.pory"
	call Intro_In_Sandgem_Lab
	return


Sandgem_After_Lab_Event::
# 179 "data/maps/SandgemTown/scripts.pory"
	lockall
# 180 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_0
# 181 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 182 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 183 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Rowan_Outside
# 184 "data/maps/SandgemTown/scripts.pory"
	clearflag BARRY_INTRO_TWO
# 185 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 186 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_0, MSGBOX_AUTOCLOSE
# 187 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 188 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 189 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 190 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Mid_Movement_0
# 191 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 192 "data/maps/SandgemTown/scripts.pory"
	waitse
# 193 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 194 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_1
# 195 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 196 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 197 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_1, MSGBOX_AUTOCLOSE
# 199 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 200 "data/maps/SandgemTown/scripts.pory"
	giveitem ITEM_TM27, 1
# 201 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 202 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_2, MSGBOX_AUTOCLOSE
# 213 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 214 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Rowan_Outside, Sandgem_After_Lab_Event_Movement_2
# 215 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 216 "data/maps/SandgemTown/scripts.pory"
	removeobject Sandgem_Rowan_Outside
# 217 "data/maps/SandgemTown/scripts.pory"
	setflag BARRY_INTRO_TWO
# 218 "data/maps/SandgemTown/scripts.pory"
	closedoor 10, 9
# 219 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_3
# 220 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 221 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 222 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_2
# 287 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_3
Sandgem_After_Lab_Event_1:
# 351 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 2
# 352 "data/maps/SandgemTown/scripts.pory"
	releaseall
	return

Sandgem_After_Lab_Event_2:
# 225 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 226 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnIDidntKnowTheProfessorHadTMs, MSGBOX_AUTOCLOSE
# 227 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 228 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_4
# 230 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 231 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 232 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_3, MSGBOX_YESNO
# 235 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_6
# 269 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_7
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_3:
# 290 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 291 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasWellIllBeTheProfessorHadTMs, MSGBOX_AUTOCLOSE
# 292 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 293 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_4
# 295 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 296 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 297 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_6, MSGBOX_YESNO
# 300 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_After_Lab_Event_10
# 334 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_After_Lab_Event_11
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_6:
# 237 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_FOLLOW_ME, 0
# 238 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 239 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_4, MSGBOX_AUTOCLOSE
# 240 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 241 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 242 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_6
# 243 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 244 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 245 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsThePokemonCenter, MSGBOX_AUTOCLOSE
# 246 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 247 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 248 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_5
# 249 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 250 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 251 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnThisIsThePokeMart
# 252 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 253 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_7
# 254 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_8
# 255 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 256 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 257 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 258 "data/maps/SandgemTown/scripts.pory"
	waitse
# 259 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 260 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 261 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 262 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_9
# 263 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_10
# 264 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 265 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 267 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_7:
# 271 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 272 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_5
# 273 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 274 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 275 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 276 "data/maps/SandgemTown/scripts.pory"
	waitse
# 277 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_DAWN
# 278 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 279 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 280 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 281 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_11
# 282 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 283 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 284 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_10:
# 302 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_FOLLOW_ME, 0
# 303 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 304 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_4, MSGBOX_AUTOCLOSE
# 305 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 306 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 307 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_6
# 308 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 309 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 310 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasThisIsThePokemonCenter, MSGBOX_AUTOCLOSE
# 311 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 312 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_5
# 313 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_5
# 314 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 315 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 316 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasThisIsThePokeMart
# 317 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 318 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_7
# 319 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_8
# 320 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 321 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 322 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 323 "data/maps/SandgemTown/scripts.pory"
	waitse
# 324 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 325 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 326 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 327 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_9
# 328 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_10
# 329 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 330 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 331 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 332 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1

Sandgem_After_Lab_Event_11:
# 336 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 337 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_7
# 338 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 339 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 340 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 341 "data/maps/SandgemTown/scripts.pory"
	waitse
# 342 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 343 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan, MSGBOX_AUTOCLOSE
# 344 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 345 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_11
# 346 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 347 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 348 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
	goto Sandgem_After_Lab_Event_1


SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt::
# 358 "data/maps/SandgemTown/scripts.pory"
	lock
# 359 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt_Text_0, MSGBOX_NPC
# 363 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_IdBetterSaveThis::
# 367 "data/maps/SandgemTown/scripts.pory"
	lock
# 368 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_IdBetterSaveThis_Text_0, MSGBOX_NPC
# 372 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonAreSoCool::
# 376 "data/maps/SandgemTown/scripts.pory"
	lock
# 377 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonAreSoCool_Text_0, MSGBOX_NPC
# 383 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_MapSign::
# 388 "data/maps/SandgemTown/scripts.pory"
	lock
# 389 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_MapSign_Text_0, MSGBOX_SIGN
# 391 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonResearchLabSign::
# 395 "data/maps/SandgemTown/scripts.pory"
	lock
# 396 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonResearchLabSign_Text_0, MSGBOX_SIGN
# 397 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_CounterpartMailbox::
# 401 "data/maps/SandgemTown/scripts.pory"
	lock
# 402 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 403 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SandgemTown_Text_CounterpartMailbox_1
# 408 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SandgemTown_Text_CounterpartMailbox_2
	return

SandgemTown_Text_CounterpartMailbox_1:
# 406 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_CounterpartMailbox_Text_0, MSGBOX_SIGN
	return

SandgemTown_Text_CounterpartMailbox_2:
# 411 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_CounterpartMailbox_Text_1, MSGBOX_SIGN
	return


SandgemTown_Text_PokeMartSign::
# 416 "data/maps/SandgemTown/scripts.pory"
	lock
# 417 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokeMartSign_Text_0, MSGBOX_SIGN
# 419 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_Text_PokemonCenterSign::
# 423 "data/maps/SandgemTown/scripts.pory"
	lock
# 424 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_PokemonCenterSign_Text_0, MSGBOX_SIGN
# 426 "data/maps/SandgemTown/scripts.pory"
	release
	return


testingSomethingSandgem::
# 578 "data/maps/SandgemTown/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


# 28 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_0:
# 28 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_1:
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 44 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Top_Movement_0:
# 44 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 44 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 57 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Bottom_Movement_0:
# 57 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 57 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 72 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_0:
# 72 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 72 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 72 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 72 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 72 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 82 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_1:
# 82 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 98 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_2:
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

# 99 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_3:
# 99 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 99 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 107 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_4:
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_fast_left
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_5:
# 111 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_0:
# 180 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 194 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_1:
# 194 "data/maps/SandgemTown/scripts.pory"
	delay_8
# 194 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 214 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_2:
# 214 "data/maps/SandgemTown/scripts.pory"
	face_up
# 214 "data/maps/SandgemTown/scripts.pory"
	delay_8
	step_end

# 219 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_3:
# 219 "data/maps/SandgemTown/scripts.pory"
	delay_8
	step_end

# 228 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_4:
# 228 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 241 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_5:
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 242 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_6:
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 242 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 253 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_7:
# 253 "data/maps/SandgemTown/scripts.pory"
	face_left
	step_end

# 254 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_8:
# 254 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 262 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_9:
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 262 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_10:
# 263 "data/maps/SandgemTown/scripts.pory"
	face_down
# 263 "data/maps/SandgemTown/scripts.pory"
	delay_8
# 263 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 281 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_11:
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 281 "data/maps/SandgemTown/scripts.pory"
	walk_right
	step_end

Sandgem_LuDa_Cont_Text_0:
# 83 "data/maps/SandgemTown/scripts.pory"
	.string "THUD!!!$"

Sandgem_LuDa_Cont_Text_1:
# 91 "data/maps/SandgemTown/scripts.pory"
	.string "What the...\p"
	.string "Oh, it’s you, {PLAYER}!\p"
	.string "That old guy... He’s not scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn’t matter, {PLAYER}.\n"
	.string "I’m out of here. See you later!$"

Sandgem_After_Lab_Event_Text_0:
# 186 "data/maps/SandgemTown/scripts.pory"
	.string "{PLAYER}!!!!!!!!!$"

Sandgem_After_Lab_Event_Text_1:
# 197 "data/maps/SandgemTown/scripts.pory"
	.string "I have something good here.\n"
	.string "You should take this as well.$"

Sandgem_After_Lab_Event_Text_2:
# 202 "data/maps/SandgemTown/scripts.pory"
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
# 232 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, {PLAYER}!\n"
	.string "Do you want me to show you around\l"
	.string "town?$"

Sandgem_After_Lab_Event_Text_4:
# 239 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, follow me!$"

Sandgem_After_Lab_Event_Text_5:
# 272 "data/maps/SandgemTown/scripts.pory"
	.string "Ok... no problem$"

Sandgem_After_Lab_Event_Text_6:
# 297 "data/maps/SandgemTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Do you want me to show you around\l"
	.string "town?$"

Sandgem_After_Lab_Event_Text_7:
# 337 "data/maps/SandgemTown/scripts.pory"
	.string "Ok, no worries$"

SandgemTown_Text_TheThingYouHaveItsAPokedexIsntIt_Text_0:
# 359 "data/maps/SandgemTown/scripts.pory"
	.string "That thing you have!\p"
	.string "It’s a Pokédex, isn’t it?!\p"
	.string "You’re off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"

SandgemTown_Text_IdBetterSaveThis_Text_0:
# 368 "data/maps/SandgemTown/scripts.pory"
	.string "So I don’t forget what’s happened,\n"
	.string "till now, I’d better save this...\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_Text_PokemonAreSoCool_Text_0:
# 377 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It’s so cool!$"

SandgemTown_Text_MapSign_Text_0:
# 389 "data/maps/SandgemTown/scripts.pory"
	.string "Sandgem Town\n"
	.string "Town of Sand!$"

SandgemTown_Text_PokemonResearchLabSign_Text_0:
# 396 "data/maps/SandgemTown/scripts.pory"
	.string "Pokémon Research Lab$"

SandgemTown_Text_CounterpartMailbox_Text_0:
# 406 "data/maps/SandgemTown/scripts.pory"
	.string "Dawn’s House$"

SandgemTown_Text_CounterpartMailbox_Text_1:
# 411 "data/maps/SandgemTown/scripts.pory"
	.string "Lucas’s House$"

SandgemTown_Text_PokeMartSign_Text_0:
# 417 "data/maps/SandgemTown/scripts.pory"
	.string "All Your Item Needs Fulfilled!\n"
	.string "Pokémon Mart$"

SandgemTown_Text_PokemonCenterSign_Text_0:
# 424 "data/maps/SandgemTown/scripts.pory"
	.string "Heal Your Pokémon!\n"
	.string "Pokémon Center$"

SandgemTown_Text_DawnTheProfessorIsWaiting::
# 431 "data/maps/SandgemTown/scripts.pory"
	.string "Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_Text_DawnThisIsItOurPokemonResearchLab::
# 437 "data/maps/SandgemTown/scripts.pory"
	.string "This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let’s go...$"

SandgemTown_Text_DawnLetsGoInside::
# 443 "data/maps/SandgemTown/scripts.pory"
	.string "Wow, what was that?\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway...\n"
	.string "Let’s go inside.$"

SandgemTown_Text_DawnIDidntKnowTheProfessorHadTMs::
# 453 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow.\n"
	.string "I didn’t know the professor had TMs.\p"
	.string "Was he a Trainer when he was\n"
	.string "young...?$"

SandgemTown_Text_DawnIllActAsYourMentor::
# 460 "data/maps/SandgemTown/scripts.pory"
	.string "OK, {PLAYER}, I’ll act as\n"
	.string "your mentor.\p"
	.string "I’ve got a bit more experience than\n"
	.string "you as a Trainer and as the professor’s\l"
	.string "assistant.\p"
	.string "OK, follow me!$"

SandgemTown_Text_DawnThisIsThePokemonCenter::
# 469 "data/maps/SandgemTown/scripts.pory"
	.string "This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "It’s the place that heals Pokémon\n"
	.string "that have been hurt in battle.\p"
	.string "You can find a Pokémon Center in\n"
	.string "most towns.$"

SandgemTown_Text_DawnThisIsThePokeMart::
# 478 "data/maps/SandgemTown/scripts.pory"
	.string "The building with the blue roof over\n"
	.string "here is the Poké Mart.\p"
	.string "It’s a shop where you can buy and\n"
	.string "sell items and medicine.\p"
	.string "{PLAYER}, since you’re a novice\n"
	.string "Trainer, you won’t be able to buy\l"
	.string "many kinds of merchandise.\p"
	.string "Don’t let it bother you!$"

SandgemTown_Text_DawnLetYourFamilyKnowYoureHelpingProfRowan::
# 489 "data/maps/SandgemTown/scripts.pory"
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
# 504 "data/maps/SandgemTown/scripts.pory"
	.string "Hi! I’ve been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof’s waiting to see you.$"

SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab::
# 510 "data/maps/SandgemTown/scripts.pory"
	.string "See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We’ll just go ahead and...$"

SandgemTown_Text_LucasLetsGoIn::
# 516 "data/maps/SandgemTown/scripts.pory"
	.string "What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway...\n"
	.string "Let’s go in.$"

SandgemTown_Text_LucasWellIllBeTheProfessorHadTMs::
# 526 "data/maps/SandgemTown/scripts.pory"
	.string "Well, I’ll be...\n"
	.string "The professor had TMs...?\p"
	.string "Next thing, he’ll tell me he battled\n"
	.string "when he was young.$"

SandgemTown_Text_LucasIWantToShowYouAFewThings::
# 533 "data/maps/SandgemTown/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "I want to show you a few things.\l"
	.string "So, follow me!$"

SandgemTown_Text_LucasThisIsThePokemonCenter::
# 539 "data/maps/SandgemTown/scripts.pory"
	.string "This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it’s been hurt in battle.\p"
	.string "You’ll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_Text_LucasThisIsThePokeMart::
# 548 "data/maps/SandgemTown/scripts.pory"
	.string "Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It’s a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you’re a rookie\n"
	.string "Trainer, you won’t be able to buy\l"
	.string "very much stuff.\p"
	.string "Don’t worry about it, OK?$"

SandgemTown_Text_LucasLetYourFamilyKnowYoureHelpingProfRowan::
# 559 "data/maps/SandgemTown/scripts.pory"
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
