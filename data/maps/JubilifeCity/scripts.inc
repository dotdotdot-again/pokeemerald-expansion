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
	random 2
# 13 "data/maps/JubilifeCity/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/JubilifeCity/scripts.pory"
	case 0, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 23 "data/maps/JubilifeCity/scripts.pory"
	case 1, JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 15 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 16 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 21 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 24 "data/maps/JubilifeCity/scripts.pory"
	special GetTimeOfDaySpecial
# 25 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 30 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_5
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 18 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_2
	return

JubilifeCity_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 27 "data/maps/JubilifeCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return


test_event::
# 37 "data/maps/JubilifeCity/scripts.pory"
	lock
# 38 "data/maps/JubilifeCity/scripts.pory"
	setspeaker test_event_Text_0
# 39 "data/maps/JubilifeCity/scripts.pory"
	msgbox test_event_Text_1, MSGBOX_NPC
# 40 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Enterence_LuDa_Event_Mid::
# 44 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 45 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 46 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 47 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 48 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 49 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 50 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 51 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 52 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 53 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Left::
# 57 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 58 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 59 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 60 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 61 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 62 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 63 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 64 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 65 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 66 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 2
# 67 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Right::
# 71 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 72 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 73 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 74 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 75 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 76 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 77 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 78 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 79 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 80 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 81 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Cont::
# 85 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 86 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWNS
# 87 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUB_GAL_EVENT
# 88 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 89 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 157 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 237 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 238 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 247 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 248 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 256 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 257 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 259 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 265 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 275 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 276 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 284 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 285 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_RAINBOW_PASS
# 286 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 287 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 300 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 301 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 302 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 303 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 304 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 312 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 313 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 314 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 315 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 316 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 317 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 318 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 319 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 320 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 328 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 336 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 337 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 338 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 339 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 348 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 357 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 358 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 359 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 369 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 378 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 379 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 380 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 381 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 382 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 383 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 92 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 93 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 94 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 96 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 97 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 97 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 108 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 118 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 119 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 125 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 127 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 128 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 129 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 130 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 131 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 133 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 134 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 135 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 136 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 137 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 138 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 139 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 140 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 141 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 142 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 143 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 144 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 145 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 146 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 147 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 148 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 149 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 150 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 153 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 154 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 160 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 161 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 162 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 164 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 165 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 165 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 176 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 184 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 185 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 191 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 192 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 198 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 205 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 206 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 209 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 210 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 211 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 213 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 214 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 215 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 216 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 217 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 218 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 219 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 220 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 221 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 222 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 223 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 224 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 225 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 226 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 227 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 228 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 229 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 230 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 233 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 234 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 261 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 262 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 267 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 268 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 99 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 100 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 110 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 111 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 112 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 167 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 168 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 178 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 179 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 180 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 323 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 324 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 326 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 331 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 332 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 334 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 194 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 195 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 200 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 201 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 342 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 343 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 346 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 351 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 352 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 355 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 362 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 363 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 367 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 372 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 373 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 376 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 388 "data/maps/JubilifeCity/scripts.pory"
	lock
# 389 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 390 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_lookerStop_Movement_0
# 391 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 392 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 393 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 394 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 395 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 399 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 400 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_1
# 401 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 402 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTwo::
# 407 "data/maps/JubilifeCity/scripts.pory"
	lock
# 408 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 409 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_lookerStop_Movement_0
# 410 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 411 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 412 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 413 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 414 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTwo_Text_0, MSGBOX_AUTOCLOSE
# 418 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 419 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_1
# 420 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 421 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTalk::
# 425 "data/maps/JubilifeCity/scripts.pory"
	lock
# 426 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_lookerStopTalk_2
# 437 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_lookerStopTalk_3
Jubilife_lookerStopTalk_1:
# 449 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_lookerStopTalk_2:
# 428 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 429 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_0, MSGBOX_NPC
# 435 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1

Jubilife_lookerStopTalk_3:
# 439 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 440 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_1, MSGBOX_NPC
# 446 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1


Jubilife_TradeStation_Stop::
# 453 "data/maps/JubilifeCity/scripts.pory"
	lock
# 454 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Jubilife_TradeStation_Stop_2
Jubilife_TradeStation_Stop_1:
# 458 "data/maps/JubilifeCity/scripts.pory"
	applymovement 4, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 459 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 460 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 461 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 462 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_TradeStation_Stop_Text_0, MSGBOX_AUTOCLOSE
# 468 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 469 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_TradeStation_Stop_Movement_0
# 470 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 471 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_TradeStation_Stop_2:
	goto Jubilife_TradeStation_Stop_1


Jubilife_Poketkch_man::
# 475 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 476 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 477 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 478 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 479 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 480 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 481 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 482 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Right::
# 486 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 487 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 488 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 489 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 490 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 491 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 492 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 493 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_Right::
# 497 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 498 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 499 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 500 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 501 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 502 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_Right_Movement_0
# 503 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 504 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_left::
# 508 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 509 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 510 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 511 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 512 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 513 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 514 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 515 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_left::
# 519 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 520 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 521 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 522 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 523 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 524 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_left_Movement_0
# 525 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 526 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Cont::
# 531 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_0
# 538 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_1, MSGBOX_AUTOCLOSE
# 546 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 547 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Poketkch_man_During_Hunt::
# 551 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_TWO, Jubilife_Poketkch_man_During_Hunt_4
Jubilife_Poketkch_man_During_Hunt_2:
# 596 "data/maps/JubilifeCity/scripts.pory"
	lock
# 597 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_3, MSGBOX_NPC
# 605 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_Poketkch_man_During_Hunt_1:
# 553 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 554 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 555 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_0
# 562 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 563 "data/maps/JubilifeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 564 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_1
# 566 "data/maps/JubilifeCity/scripts.pory"
	waitfanfare
# 567 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_EON_TICKET
# 568 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_MYSTIC_TICKET
# 569 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_AURORA_TICKET
# 570 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 571 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_2, MSGBOX_AUTOCLOSE
# 575 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 576 "data/maps/JubilifeCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 577 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_Poketkch_man_During_Hunt_9
# 584 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_2
# 585 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
Jubilife_Poketkch_man_During_Hunt_8:
# 587 "data/maps/JubilifeCity/scripts.pory"
	removeobject poketch_president_outside
# 588 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 4
# 589 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 590 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_LOOKER_BLOCK
# 591 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Poketkch_man_During_Hunt_3:
# 551 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_THREE, Jubilife_Poketkch_man_During_Hunt_1
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_4:
# 551 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_ONE, Jubilife_Poketkch_man_During_Hunt_3
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_9:
# 579 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_1
# 580 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
	goto Jubilife_Poketkch_man_During_Hunt_8


Clown_Two_text::
# 612 "data/maps/JubilifeCity/scripts.pory"
	lock
# 613 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_TWO, Clown_Two_text_2
# 644 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2, MSGBOX_NPC
# 649 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Two_text_1:
# 652 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Two_text_2:
# 615 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Two, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 616 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_0, MSGBOX_YESNO
# 620 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Two_text_5
# 635 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Two_text_6
	goto Clown_Two_text_1

Clown_Two_text_5:
# 622 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 624 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2
# 629 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 631 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 632 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_TWO
# 633 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_EON_TICKET
	goto Clown_Two_text_1

Clown_Two_text_6:
# 637 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 639 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Two_text_1


Clown_One_text::
# 656 "data/maps/JubilifeCity/scripts.pory"
	lock
# 657 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_8
Clown_One_text_6:
# 684 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWNS, Clown_One_text_5
Clown_One_text_4:
# 693 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 696 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_One_text_1:
# 699 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_One_text_2:
# 659 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_One, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 660 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_0, MSGBOX_YESNO
# 664 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_One_text_11
# 677 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_One_text_12
	goto Clown_One_text_1

Clown_One_text_3:
# 685 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_2, MSGBOX_NPC
# 689 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1

Clown_One_text_5:
# 684 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_3
	goto Clown_One_text_4

Clown_One_text_8:
# 657 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWNS, Clown_One_text_2
	goto Clown_One_text_6

Clown_One_text_11:
# 666 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 668 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1
# 671 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 673 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 674 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_ONE
# 675 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
	goto Clown_One_text_1

Clown_One_text_12:
# 679 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 681 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1


Clown_Three_text::
# 703 "data/maps/JubilifeCity/scripts.pory"
	lock
# 704 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_THREE, Clown_Three_text_2
# 734 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 737 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Three_text_1:
# 740 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Three_text_2:
# 706 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Three, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 707 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_0, MSGBOX_YESNO
# 710 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Three_text_5
# 725 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Three_text_6
	goto Clown_Three_text_1

Clown_Three_text_5:
# 712 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 714 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_1
# 719 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 721 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 722 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_THREE
# 723 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_AURORA_TICKET
	goto Clown_Three_text_1

Clown_Three_text_6:
# 727 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 729 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Three_text_1


JubilifeCity_Text_MapSign::
# 747 "data/maps/JubilifeCity/scripts.pory"
	lock
# 748 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_MapSign_Text_0, MSGBOX_SIGN
# 751 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCondominiumsTenantsWanted::
# 755 "data/maps/JubilifeCity/scripts.pory"
	lock
# 756 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0, MSGBOX_SIGN
# 758 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld::
# 762 "data/maps/JubilifeCity/scripts.pory"
	lock
# 763 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0, MSGBOX_SIGN
# 765 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers::
# 770 "data/maps/JubilifeCity/scripts.pory"
	lock
# 771 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0, MSGBOX_SIGN
# 773 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation::
# 777 "data/maps/JubilifeCity/scripts.pory"
	lock
# 778 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0, MSGBOX_SIGN
# 780 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TheLocalTerminal::
# 784 "data/maps/JubilifeCity/scripts.pory"
	lock
# 785 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TheLocalTerminal_Text_0, MSGBOX_SIGN
# 787 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon::
# 793 "data/maps/JubilifeCity/scripts.pory"
	lock
# 794 "data/maps/JubilifeCity/scripts.pory"
	applymovement 3, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 795 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0, MSGBOX_YESNO
# 797 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2
# 807 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3
JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1:
# 816 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2:
# 799 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1, MSGBOX_AUTOCLOSE
# 805 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3:
# 809 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2, MSGBOX_AUTOCLOSE
# 814 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1


JubilifeCity_Text_ImTradingPokemonWithMyBuddy::
# 820 "data/maps/JubilifeCity/scripts.pory"
	lock
# 821 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0, MSGBOX_NPC
# 822 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_AcetrainerGirl::
# 826 "data/maps/JubilifeCity/scripts.pory"
	lock
# 827 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_AcetrainerGirl_Text_0, MSGBOX_NPC
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


JubilifeCity_Galatic_Event::
# 925 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 926 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Galatic_Event_Text_0, MSGBOX_NPC
# 929 "data/maps/JubilifeCity/scripts.pory"
	release
	return


# 45 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_0:
# 45 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 45 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 45 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_1:
# 47 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 51 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_2:
# 51 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 51 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 58 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Left_Movement_0:
# 58 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 58 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 58 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 58 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Right_Movement_0:
# 72 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 72 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 72 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 72 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 127 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 127 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 134 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 134 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 134 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 134 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 134 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 134 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 134 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 134 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 136 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 137 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 137 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 138 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 138 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 138 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 138 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 143 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 143 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 194 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 194 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 195 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 201 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 301 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 301 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 301 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 301 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 301 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 301 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 301 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 313 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 313 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 313 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 313 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 314 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 314 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 314 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 314 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 314 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 336 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 337 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 337 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 357 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 357 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 357 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 357 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 378 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 390 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 390 "data/maps/JubilifeCity/scripts.pory"
	face_player
# 390 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 400 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_1:
# 400 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 469 "data/maps/JubilifeCity/scripts.pory"
Jubilife_TradeStation_Stop_Movement_0:
# 469 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 502 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_Right_Movement_0:
# 502 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 502 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 502 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 502 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 502 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 524 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_left_Movement_0:
# 524 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 524 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 524 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 524 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 524 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 554 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_0:
# 554 "data/maps/JubilifeCity/scripts.pory"
	face_player
	step_end

# 579 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_1:
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 579 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_2:
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 584 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

test_event_Text_0:
# 38 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 39 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 94 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 100 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 112 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 119 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 131 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 141 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 148 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 149 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 150 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 154 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 162 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 168 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 180 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 185 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 211 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 221 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 234 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 237 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 238 "data/maps/JubilifeCity/scripts.pory"
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
# 248 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 257 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 262 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 268 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 276 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 287 "data/maps/JubilifeCity/scripts.pory"
	.string "That nifty card is used to track\n"
	.string "points earned from varous games.\p"
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
# 304 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 324 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 332 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 343 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 352 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 363 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 373 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 395 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTwo_Text_0:
# 414 "data/maps/JubilifeCity/scripts.pory"
	.string "Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_lookerStopTalk_Text_0:
# 429 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTalk_Text_1:
# 440 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_TradeStation_Stop_Text_0:
# 462 "data/maps/JubilifeCity/scripts.pory"
	.string "Past here is the Local Trading Terminal\n"
	.string "your gateway to the community!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Local Trading Terminal is off-limits\n"
	.string " if you don’t have a Gym Badge. Sorry!$"

Jubilife_Poketkch_man_Cont_Text_0:
# 531 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!$"

Jubilife_Poketkch_man_Cont_Text_1:
# 538 "data/maps/JubilifeCity/scripts.pory"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_Poketkch_man_During_Hunt_Text_0:
# 555 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_Poketkch_man_During_Hunt_Text_1:
# 564 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokétch{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Jubilife_Poketkch_man_During_Hunt_Text_2:
# 571 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"

Jubilife_Poketkch_man_During_Hunt_Text_3:
# 597 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Clown_Two_text_Text_0:
# 616 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Clown_Two_text_Text_1:
# 622 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!$"

Clown_Two_text_Text_2:
# 624 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown_Two_text_Text_3:
# 629 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Clown_Two_text_Text_4:
# 637 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Clown_One_text_Text_0:
# 660 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Clown_One_text_Text_1:
# 668 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Clown_One_text_Text_2:
# 685 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Clown_Three_text_Text_0:
# 707 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Clown_Three_text_Text_1:
# 714 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p$"

JubilifeCity_Text_MapSign_Text_0:
# 748 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0:
# 756 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0:
# 763 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0:
# 771 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers’ School\n"
	.string "The First Step for Trainers!$"

JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0:
# 778 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

JubilifeCity_Text_TheLocalTerminal_Text_0:
# 785 "data/maps/JubilifeCity/scripts.pory"
	.string "The Local Terminal\n"
	.string "Your Gateway to the Community$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0:
# 795 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1:
# 799 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn’t see the need\n"
	.string "to visit the Trainers’ School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2:
# 809 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you’re not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There’s the Trainers’ School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0:
# 821 "data/maps/JubilifeCity/scripts.pory"
	.string "I’m trading Pokémon with my buddy!$"

JubilifeCity_Text_AcetrainerGirl_Text_0:
# 827 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you know this was the first city in\n"
	.string "In all of Sinnoh?\p"
	.string "Tho It was just a humble village\n"
	.string "back then.$"

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

JubilifeCity_Galatic_Event_Text_0:
# 926 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch is a watch that lets you\n"
	.string "do all sorts of things.\p"
	.string "It’s a must-have for Trainers!$"
