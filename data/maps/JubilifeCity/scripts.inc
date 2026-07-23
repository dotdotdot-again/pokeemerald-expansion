JubilifeCity_MapScripts::
# 1 "data/maps/JubilifeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_2
# 4 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_3
# 5 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_4
# 6 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_5
# 7 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_6
# 8 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_TEMP_7
# 9 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 10 "data/maps/JubilifeCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 12 "data/maps/JubilifeCity/scripts.pory"
	random 3
# 13 "data/maps/JubilifeCity/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/JubilifeCity/scripts.pory"
	case 0, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 23 "data/maps/JubilifeCity/scripts.pory"
	case 1, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 33 "data/maps/JubilifeCity/scripts.pory"
	case 2, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 15 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 16 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 21 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 24 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 25 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 30 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_5
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 34 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 35 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_11
# 40 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_7
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 18 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_2
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 27 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 37 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_6
	return


test_event::
# 47 "data/maps/JubilifeCity/scripts.pory"
	lock
# 48 "data/maps/JubilifeCity/scripts.pory"
	setspeaker test_event_Text_0
# 49 "data/maps/JubilifeCity/scripts.pory"
	msgbox test_event_Text_1, MSGBOX_NPC
# 50 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Enterence_LuDa_Event_Mid::
# 54 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 55 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 56 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 57 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 58 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 59 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 60 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 61 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 62 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 63 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Left::
# 67 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 68 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 69 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 70 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 71 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 72 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 73 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 74 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 75 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 76 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 2
# 77 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Right::
# 81 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 82 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 83 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 84 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 85 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 86 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 87 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 88 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 89 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 90 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 91 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Cont::
# 95 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 96 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWNS
# 97 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 98 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 166 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 246 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 247 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 256 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 257 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 265 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 266 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 268 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 274 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 284 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 285 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 293 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 294 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_RAINBOW_PASS
# 295 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 296 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 309 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 310 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 311 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 312 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 313 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 321 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 322 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 323 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 324 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 325 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 326 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 327 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 328 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 329 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 337 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 345 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 346 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 347 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 348 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 357 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 366 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 367 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 368 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 378 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 387 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 388 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 389 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 390 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 391 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 392 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 101 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 102 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 103 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 105 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 106 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 106 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 117 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 127 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 128 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 134 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 136 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 137 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 138 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 139 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 140 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 142 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 143 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 144 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 145 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 146 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 147 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 148 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 149 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 150 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 151 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 152 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 153 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 154 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 155 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 156 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 157 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 158 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 159 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 162 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 163 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 169 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 170 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 171 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 173 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 174 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 174 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 185 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 193 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 194 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 200 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 201 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 207 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 214 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 215 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 218 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 219 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 220 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 222 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 223 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 224 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 225 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 226 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 227 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 228 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 229 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 230 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 231 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 232 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 233 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 234 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 235 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 236 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 237 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 238 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 239 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 242 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 243 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 270 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 271 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 276 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 277 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 108 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 109 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 119 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 120 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 121 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 176 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 177 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 187 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 188 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 189 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 332 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 333 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 335 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 340 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 341 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 343 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 203 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 204 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 209 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 210 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 351 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 352 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 355 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 360 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 361 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 364 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 371 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 372 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 376 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 381 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 382 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 385 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 397 "data/maps/JubilifeCity/scripts.pory"
	lock
# 398 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 399 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 400 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 401 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 402 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 403 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 404 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 408 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 409 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 410 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 411 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTwo::
# 416 "data/maps/JubilifeCity/scripts.pory"
	lock
# 417 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 418 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 419 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 420 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 421 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 422 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 423 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTwo_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 428 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 429 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 430 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTalk::
# 434 "data/maps/JubilifeCity/scripts.pory"
	lock
# 435 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_lookerStopTalk_2
# 446 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_lookerStopTalk_3
Jubilife_lookerStopTalk_1:
# 458 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_lookerStopTalk_2:
# 437 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 438 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_0, MSGBOX_NPC
# 444 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1

Jubilife_lookerStopTalk_3:
# 448 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 449 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_1, MSGBOX_NPC
# 455 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1


Jubilife_TradeStation_Stop::
# 462 "data/maps/JubilifeCity/scripts.pory"
	lock
# 463 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Jubilife_TradeStation_Stop_2
Jubilife_TradeStation_Stop_1:
# 467 "data/maps/JubilifeCity/scripts.pory"
	applymovement 4, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 468 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 469 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 470 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 471 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_TradeStation_Stop_Text_0, MSGBOX_AUTOCLOSE
# 477 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 478 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_TradeStation_Stop_Movement_0
# 479 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 480 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_TradeStation_Stop_2:
	goto Jubilife_TradeStation_Stop_1


Jubilife_Poketkch_man::
# 484 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 485 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 486 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 487 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 488 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 489 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 490 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 491 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Right::
# 495 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 496 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 497 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 498 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 499 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 500 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 501 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 502 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_Right::
# 506 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 507 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 508 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 509 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 510 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 511 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_Right_Movement_0
# 512 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 513 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_left::
# 517 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 518 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 519 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 520 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 521 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 522 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 523 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 524 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_left::
# 528 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 529 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 530 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 532 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 533 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_left_Movement_0
# 534 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 535 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Cont::
# 540 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_0
# 547 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_1, MSGBOX_AUTOCLOSE
# 555 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 556 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Poketkch_man_During_Hunt::
# 560 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_TWO, Jubilife_Poketkch_man_During_Hunt_4
Jubilife_Poketkch_man_During_Hunt_2:
# 605 "data/maps/JubilifeCity/scripts.pory"
	lock
# 606 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_3, MSGBOX_NPC
# 614 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_Poketkch_man_During_Hunt_1:
# 562 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 563 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 564 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_0
# 571 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 572 "data/maps/JubilifeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 573 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_1
# 575 "data/maps/JubilifeCity/scripts.pory"
	waitfanfare
# 576 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_EON_TICKET
# 577 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_MYSTIC_TICKET
# 578 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_AURORA_TICKET
# 579 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 580 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_2, MSGBOX_AUTOCLOSE
# 584 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 585 "data/maps/JubilifeCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 586 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_Poketkch_man_During_Hunt_9
# 593 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_2
# 594 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
Jubilife_Poketkch_man_During_Hunt_8:
# 596 "data/maps/JubilifeCity/scripts.pory"
	removeobject poketch_president_outside
# 597 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 4
# 598 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 599 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_LOOKER_BLOCK
# 600 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Poketkch_man_During_Hunt_3:
# 560 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_THREE, Jubilife_Poketkch_man_During_Hunt_1
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_4:
# 560 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_ONE, Jubilife_Poketkch_man_During_Hunt_3
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_9:
# 588 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_1
# 589 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
	goto Jubilife_Poketkch_man_During_Hunt_8


Clown_Two_text::
# 621 "data/maps/JubilifeCity/scripts.pory"
	lock
# 622 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_TWO, Clown_Two_text_2
# 653 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2, MSGBOX_NPC
# 658 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Two_text_1:
# 661 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Two_text_2:
# 624 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Two, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 625 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_0, MSGBOX_YESNO
# 629 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Two_text_5
# 644 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Two_text_6
	goto Clown_Two_text_1

Clown_Two_text_5:
# 631 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 633 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2
# 638 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 640 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 641 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_TWO
# 642 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_EON_TICKET
	goto Clown_Two_text_1

Clown_Two_text_6:
# 646 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 648 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Two_text_1


Clown_One_text::
# 665 "data/maps/JubilifeCity/scripts.pory"
	lock
# 666 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_8
Clown_One_text_6:
# 693 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWNS, Clown_One_text_5
Clown_One_text_4:
# 702 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 705 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_One_text_1:
# 708 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_One_text_2:
# 668 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_One, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 669 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_0, MSGBOX_YESNO
# 673 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_One_text_11
# 686 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_One_text_12
	goto Clown_One_text_1

Clown_One_text_3:
# 694 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_2, MSGBOX_NPC
# 698 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1

Clown_One_text_5:
# 693 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_3
	goto Clown_One_text_4

Clown_One_text_8:
# 666 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWNS, Clown_One_text_2
	goto Clown_One_text_6

Clown_One_text_11:
# 675 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 677 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1
# 680 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 682 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 683 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_ONE
# 684 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
	goto Clown_One_text_1

Clown_One_text_12:
# 688 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 690 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1


Clown_Three_text::
# 712 "data/maps/JubilifeCity/scripts.pory"
	lock
# 713 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_THREE, Clown_Three_text_2
# 743 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 746 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Three_text_1:
# 749 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Three_text_2:
# 715 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Three, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 716 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_0, MSGBOX_YESNO
# 719 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Three_text_5
# 734 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Three_text_6
	goto Clown_Three_text_1

Clown_Three_text_5:
# 721 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 723 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_1
# 728 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 730 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 731 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_THREE
# 732 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_AURORA_TICKET
	goto Clown_Three_text_1

Clown_Three_text_6:
# 736 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 738 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Three_text_1


JubilifeCity_Text_MapSign::
# 756 "data/maps/JubilifeCity/scripts.pory"
	lock
# 757 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_MapSign_Text_0, MSGBOX_SIGN
# 760 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCondominiumsTenantsWanted::
# 764 "data/maps/JubilifeCity/scripts.pory"
	lock
# 765 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0, MSGBOX_SIGN
# 767 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld::
# 771 "data/maps/JubilifeCity/scripts.pory"
	lock
# 772 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0, MSGBOX_SIGN
# 774 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers::
# 779 "data/maps/JubilifeCity/scripts.pory"
	lock
# 780 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0, MSGBOX_SIGN
# 782 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation::
# 786 "data/maps/JubilifeCity/scripts.pory"
	lock
# 787 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0, MSGBOX_SIGN
# 789 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TheLocalTerminal::
# 793 "data/maps/JubilifeCity/scripts.pory"
	lock
# 794 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TheLocalTerminal_Text_0, MSGBOX_SIGN
# 796 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon::
# 802 "data/maps/JubilifeCity/scripts.pory"
	lock
# 803 "data/maps/JubilifeCity/scripts.pory"
	applymovement 3, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 804 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0, MSGBOX_YESNO
# 806 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2
# 816 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3
JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1:
# 825 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2:
# 808 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1, MSGBOX_AUTOCLOSE
# 814 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3:
# 818 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2, MSGBOX_AUTOCLOSE
# 823 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1


JubilifeCity_Text_ImTradingPokemonWithMyBuddy::
# 829 "data/maps/JubilifeCity/scripts.pory"
	lock
# 830 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0, MSGBOX_NPC
# 831 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt::
# 835 "data/maps/JubilifeCity/scripts.pory"
	lock
# 836 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0, MSGBOX_NPC
# 840 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou::
# 844 "data/maps/JubilifeCity/scripts.pory"
	lock
# 845 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0, MSGBOX_NPC
# 849 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain::
# 853 "data/maps/JubilifeCity/scripts.pory"
	lock
# 854 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0, MSGBOX_NPC
# 858 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HiyaWheredYouComeFrom::
# 862 "data/maps/JubilifeCity/scripts.pory"
	lock
# 863 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0, MSGBOX_NPC
# 869 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_DidYouSeeMeOnTV::
# 873 "data/maps/JubilifeCity/scripts.pory"
	lock
# 874 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_DidYouSeeMeOnTV_Text_0, MSGBOX_NPC
# 876 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier::
# 880 "data/maps/JubilifeCity/scripts.pory"
	lock
# 881 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0, MSGBOX_NPC
# 883 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike::
# 887 "data/maps/JubilifeCity/scripts.pory"
	lock
# 888 "data/maps/JubilifeCity/scripts.pory"
	applymovement 5, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 889 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0
# 893 "data/maps/JubilifeCity/scripts.pory"
	multichoice 25, 5, MULTI_FIRE_WATER_GRASS, 1
# 894 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 895 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2
# 903 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3
# 911 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4
JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1:
# 920 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2:
# 897 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1, MSGBOX_AUTOCLOSE
# 901 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3:
# 905 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2, MSGBOX_AUTOCLOSE
# 909 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4:
# 913 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3, MSGBOX_AUTOCLOSE
# 917 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1


# 55 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_0:
# 55 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 55 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 55 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_1:
# 57 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_2:
# 61 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 61 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 68 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Left_Movement_0:
# 68 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 68 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 68 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 68 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 82 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Right_Movement_0:
# 82 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 82 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 82 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 82 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 136 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 143 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 143 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 143 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 143 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 143 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 143 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 143 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 143 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 145 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 145 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 145 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 145 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 146 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 146 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 147 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 147 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 147 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 152 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 152 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 203 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 203 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 209 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 209 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 210 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 310 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 310 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 310 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 310 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 310 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 310 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 310 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 322 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 322 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 322 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 322 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 323 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 323 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 323 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 323 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 323 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 345 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 345 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 345 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 345 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 346 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 346 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 366 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 366 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 366 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 366 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 387 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 387 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 409 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 409 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 478 "data/maps/JubilifeCity/scripts.pory"
Jubilife_TradeStation_Stop_Movement_0:
# 478 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 511 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_Right_Movement_0:
# 511 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 511 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 511 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 511 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 511 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 533 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_left_Movement_0:
# 533 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 533 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 533 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 533 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 533 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 563 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_0:
# 563 "data/maps/JubilifeCity/scripts.pory"
	face_player
	step_end

# 588 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_1:
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 588 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 593 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_2:
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 593 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

test_event_Text_0:
# 48 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 49 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 103 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 109 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 121 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 128 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 140 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 150 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 157 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 158 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 159 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 163 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 171 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 177 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 189 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 194 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 220 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 230 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 243 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 246 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 247 "data/maps/JubilifeCity/scripts.pory"
	.string "...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_19:
# 257 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 266 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 271 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 277 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 285 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 296 "data/maps/JubilifeCity/scripts.pory"
	.string "That nifty is card used to\n"
	.string "track points earned from varous games.\p"
	.string "Games that can be played in the new\n"
	.string "Pokémon Center's basement area.\p"
	.string "I obtained it because it is quite\n"
	.string "popular these days.\p"
	.string "But myself, I do not have time for\n"
	.string "silly little games like that.\p"
	.string "Plus most of the prizes are items for\n"
	.string "trainers such as TMs and Held Items.\p "
	.string "I do not do Pokémon battling very\n"
	.string "often so I have no use for that stuff.\p"
	.string "It will be in better hands with you.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_25:
# 313 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 333 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 341 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 352 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 361 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 372 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 382 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 404 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTwo_Text_0:
# 423 "data/maps/JubilifeCity/scripts.pory"
	.string "Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_lookerStopTalk_Text_0:
# 438 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTalk_Text_1:
# 449 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_TradeStation_Stop_Text_0:
# 471 "data/maps/JubilifeCity/scripts.pory"
	.string "Past here is the Local Trading Terminal\n"
	.string "your gateway to the community!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Local Trading Terminal is off-limits\n"
	.string " if you don’t have a Gym Badge. Sorry!$"

Jubilife_Poketkch_man_Cont_Text_0:
# 540 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!$"

Jubilife_Poketkch_man_Cont_Text_1:
# 547 "data/maps/JubilifeCity/scripts.pory"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_Poketkch_man_During_Hunt_Text_0:
# 564 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_Poketkch_man_During_Hunt_Text_1:
# 573 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokétch{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Jubilife_Poketkch_man_During_Hunt_Text_2:
# 580 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"

Jubilife_Poketkch_man_During_Hunt_Text_3:
# 606 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Clown_Two_text_Text_0:
# 625 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Clown_Two_text_Text_1:
# 631 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!$"

Clown_Two_text_Text_2:
# 633 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown_Two_text_Text_3:
# 638 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Clown_Two_text_Text_4:
# 646 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Clown_One_text_Text_0:
# 669 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Clown_One_text_Text_1:
# 677 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Clown_One_text_Text_2:
# 694 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Clown_Three_text_Text_0:
# 716 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Clown_Three_text_Text_1:
# 723 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p$"

JubilifeCity_Text_MapSign_Text_0:
# 757 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0:
# 765 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0:
# 772 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0:
# 780 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers’ School\n"
	.string "The First Step for Trainers!$"

JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0:
# 787 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

JubilifeCity_Text_TheLocalTerminal_Text_0:
# 794 "data/maps/JubilifeCity/scripts.pory"
	.string "The Local Terminal\n"
	.string "Your Gateway to the Community$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0:
# 804 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1:
# 808 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn’t see the need\n"
	.string "to visit the Trainers’ School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2:
# 818 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you’re not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There’s the Trainers’ School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0:
# 830 "data/maps/JubilifeCity/scripts.pory"
	.string "I’m trading Pokémon with my buddy!$"

JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0:
# 836 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0:
# 845 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that’ll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0:
# 854 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City’s built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0:
# 863 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where’d you come from?\p"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It’s a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_Text_DidYouSeeMeOnTV_Text_0:
# 874 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0:
# 881 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0:
# 889 "data/maps/JubilifeCity/scripts.pory"
	.string "The way you look...\n"
	.string "You’re obviously a Trainer!\p"
	.string "Can you tell me what type of Pokémon\n"
	.string "you like?$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1:
# 897 "data/maps/JubilifeCity/scripts.pory"
	.string "The Fire type?\n"
	.string "You must have a fiery personality.\p"
	.string "You’d better watch out that fire isn’t\n"
	.string "doused by water, though.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2:
# 905 "data/maps/JubilifeCity/scripts.pory"
	.string "A person that likes the Water type\n"
	.string "must be somewhat cool.\p"
	.string "But beware of being drained dry by\n"
	.string "thirsty grass.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3:
# 913 "data/maps/JubilifeCity/scripts.pory"
	.string "You chose the Grass type?\n"
	.string "No wonder you look so calm.\p"
	.string "I think you need to watch out you don’t\n"
	.string "get burned by fire.$"
