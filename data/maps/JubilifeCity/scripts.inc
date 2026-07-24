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
	checkplayergender
# 88 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 156 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 236 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 237 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 246 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 247 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 255 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 256 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 258 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 264 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 274 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 275 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 283 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 284 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_RAINBOW_PASS
# 285 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 286 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 299 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 300 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 301 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 302 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 303 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 311 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 312 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 313 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 314 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 315 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 316 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 317 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 318 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 319 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 327 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 335 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 336 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 337 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 338 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 347 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 356 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 357 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 358 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 368 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 377 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 378 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 379 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 380 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 381 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 382 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 91 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 92 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 93 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 95 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 96 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 96 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 107 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 117 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 118 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 124 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 126 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 127 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 128 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 129 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 130 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 132 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 133 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 134 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 135 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 136 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 137 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 138 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 139 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 140 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 141 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 142 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 143 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 144 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 145 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 146 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 147 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 148 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 149 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 152 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 153 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 159 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 160 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 161 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 163 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 164 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 164 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 175 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 183 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 184 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 190 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 191 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 197 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 204 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 205 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 208 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 209 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 210 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 212 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 213 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 214 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 215 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 216 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 217 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 218 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 219 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 220 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 221 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 222 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 223 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 224 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 225 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 226 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 227 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 228 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 229 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 232 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 233 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 260 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 261 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 266 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 267 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 98 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 99 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 109 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 110 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 111 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 166 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 167 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 177 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 178 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 179 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 322 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 323 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 325 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 330 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 331 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 333 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 193 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 194 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 199 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 200 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 341 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 342 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 345 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 350 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 351 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 354 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 361 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 362 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 366 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 371 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 372 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 375 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 387 "data/maps/JubilifeCity/scripts.pory"
	lock
# 388 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 389 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 390 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 391 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 392 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 393 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 394 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 399 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 400 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 401 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTwo::
# 406 "data/maps/JubilifeCity/scripts.pory"
	lock
# 407 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 408 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 409 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 410 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 411 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 412 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 413 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTwo_Text_0, MSGBOX_AUTOCLOSE
# 417 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 418 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 419 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 420 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTalk::
# 424 "data/maps/JubilifeCity/scripts.pory"
	lock
# 425 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_lookerStopTalk_2
# 436 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_lookerStopTalk_3
Jubilife_lookerStopTalk_1:
# 448 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_lookerStopTalk_2:
# 427 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 428 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_0, MSGBOX_NPC
# 434 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1

Jubilife_lookerStopTalk_3:
# 438 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 439 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_1, MSGBOX_NPC
# 445 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1


Jubilife_TradeStation_Stop::
# 452 "data/maps/JubilifeCity/scripts.pory"
	lock
# 453 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Jubilife_TradeStation_Stop_2
Jubilife_TradeStation_Stop_1:
# 457 "data/maps/JubilifeCity/scripts.pory"
	applymovement 4, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 458 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 459 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 460 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 461 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_TradeStation_Stop_Text_0, MSGBOX_AUTOCLOSE
# 467 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 468 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_TradeStation_Stop_Movement_0
# 469 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 470 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_TradeStation_Stop_2:
	goto Jubilife_TradeStation_Stop_1


Jubilife_Poketkch_man::
# 474 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 475 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 476 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 477 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 478 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 479 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 480 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 481 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Right::
# 485 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 486 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 487 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 488 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 489 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 490 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 491 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 492 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_Right::
# 496 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 497 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 498 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 499 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 500 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 501 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_Right_Movement_0
# 502 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 503 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_left::
# 507 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 508 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 509 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 510 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 511 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 512 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 513 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 514 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_left::
# 518 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 519 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 520 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 521 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 522 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 523 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_left_Movement_0
# 524 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 525 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Cont::
# 530 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_0
# 537 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_1, MSGBOX_AUTOCLOSE
# 545 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 546 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Poketkch_man_During_Hunt::
# 550 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_TWO, Jubilife_Poketkch_man_During_Hunt_4
Jubilife_Poketkch_man_During_Hunt_2:
# 595 "data/maps/JubilifeCity/scripts.pory"
	lock
# 596 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_3, MSGBOX_NPC
# 604 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_Poketkch_man_During_Hunt_1:
# 552 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 553 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 554 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_0
# 561 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 562 "data/maps/JubilifeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 563 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_1
# 565 "data/maps/JubilifeCity/scripts.pory"
	waitfanfare
# 566 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_EON_TICKET
# 567 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_MYSTIC_TICKET
# 568 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_AURORA_TICKET
# 569 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 570 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_2, MSGBOX_AUTOCLOSE
# 574 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 575 "data/maps/JubilifeCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 576 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_Poketkch_man_During_Hunt_9
# 583 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_2
# 584 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
Jubilife_Poketkch_man_During_Hunt_8:
# 586 "data/maps/JubilifeCity/scripts.pory"
	removeobject poketch_president_outside
# 587 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 4
# 588 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 589 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_LOOKER_BLOCK
# 590 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Poketkch_man_During_Hunt_3:
# 550 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_THREE, Jubilife_Poketkch_man_During_Hunt_1
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_4:
# 550 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_ONE, Jubilife_Poketkch_man_During_Hunt_3
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_9:
# 578 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_1
# 579 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
	goto Jubilife_Poketkch_man_During_Hunt_8


Clown_Two_text::
# 611 "data/maps/JubilifeCity/scripts.pory"
	lock
# 612 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_TWO, Clown_Two_text_2
# 643 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2, MSGBOX_NPC
# 648 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Two_text_1:
# 651 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Two_text_2:
# 614 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Two, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 615 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_0, MSGBOX_YESNO
# 619 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Two_text_5
# 634 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Two_text_6
	goto Clown_Two_text_1

Clown_Two_text_5:
# 621 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 623 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2
# 628 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 630 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 631 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_TWO
# 632 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_EON_TICKET
	goto Clown_Two_text_1

Clown_Two_text_6:
# 636 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 638 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Two_text_1


Clown_One_text::
# 655 "data/maps/JubilifeCity/scripts.pory"
	lock
# 656 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_8
Clown_One_text_6:
# 683 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWNS, Clown_One_text_5
Clown_One_text_4:
# 692 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 695 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_One_text_1:
# 698 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_One_text_2:
# 658 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_One, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 659 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_0, MSGBOX_YESNO
# 663 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_One_text_11
# 676 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_One_text_12
	goto Clown_One_text_1

Clown_One_text_3:
# 684 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_2, MSGBOX_NPC
# 688 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1

Clown_One_text_5:
# 683 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_3
	goto Clown_One_text_4

Clown_One_text_8:
# 656 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWNS, Clown_One_text_2
	goto Clown_One_text_6

Clown_One_text_11:
# 665 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 667 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1
# 670 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 672 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 673 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_ONE
# 674 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
	goto Clown_One_text_1

Clown_One_text_12:
# 678 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 680 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1


Clown_Three_text::
# 702 "data/maps/JubilifeCity/scripts.pory"
	lock
# 703 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_THREE, Clown_Three_text_2
# 733 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 736 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Three_text_1:
# 739 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Three_text_2:
# 705 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Three, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 706 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_0, MSGBOX_YESNO
# 709 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Three_text_5
# 724 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Three_text_6
	goto Clown_Three_text_1

Clown_Three_text_5:
# 711 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 713 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_1
# 718 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 720 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 721 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_THREE
# 722 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_AURORA_TICKET
	goto Clown_Three_text_1

Clown_Three_text_6:
# 726 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 728 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Three_text_1


JubilifeCity_Text_MapSign::
# 746 "data/maps/JubilifeCity/scripts.pory"
	lock
# 747 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_MapSign_Text_0, MSGBOX_SIGN
# 750 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCondominiumsTenantsWanted::
# 754 "data/maps/JubilifeCity/scripts.pory"
	lock
# 755 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0, MSGBOX_SIGN
# 757 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld::
# 761 "data/maps/JubilifeCity/scripts.pory"
	lock
# 762 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0, MSGBOX_SIGN
# 764 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers::
# 769 "data/maps/JubilifeCity/scripts.pory"
	lock
# 770 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0, MSGBOX_SIGN
# 772 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation::
# 776 "data/maps/JubilifeCity/scripts.pory"
	lock
# 777 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0, MSGBOX_SIGN
# 779 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TheLocalTerminal::
# 783 "data/maps/JubilifeCity/scripts.pory"
	lock
# 784 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TheLocalTerminal_Text_0, MSGBOX_SIGN
# 786 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon::
# 792 "data/maps/JubilifeCity/scripts.pory"
	lock
# 793 "data/maps/JubilifeCity/scripts.pory"
	applymovement 3, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 794 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0, MSGBOX_YESNO
# 796 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2
# 806 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3
JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1:
# 815 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2:
# 798 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1, MSGBOX_AUTOCLOSE
# 804 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3:
# 808 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2, MSGBOX_AUTOCLOSE
# 813 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1


JubilifeCity_Text_ImTradingPokemonWithMyBuddy::
# 819 "data/maps/JubilifeCity/scripts.pory"
	lock
# 820 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0, MSGBOX_NPC
# 821 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt::
# 825 "data/maps/JubilifeCity/scripts.pory"
	lock
# 826 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0, MSGBOX_NPC
# 830 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou::
# 834 "data/maps/JubilifeCity/scripts.pory"
	lock
# 835 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0, MSGBOX_NPC
# 839 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain::
# 843 "data/maps/JubilifeCity/scripts.pory"
	lock
# 844 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0, MSGBOX_NPC
# 848 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HiyaWheredYouComeFrom::
# 852 "data/maps/JubilifeCity/scripts.pory"
	lock
# 853 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0, MSGBOX_NPC
# 859 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_DidYouSeeMeOnTV::
# 863 "data/maps/JubilifeCity/scripts.pory"
	lock
# 864 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_DidYouSeeMeOnTV_Text_0, MSGBOX_NPC
# 866 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier::
# 870 "data/maps/JubilifeCity/scripts.pory"
	lock
# 871 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0, MSGBOX_NPC
# 873 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike::
# 877 "data/maps/JubilifeCity/scripts.pory"
	lock
# 878 "data/maps/JubilifeCity/scripts.pory"
	applymovement 5, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 879 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0
# 883 "data/maps/JubilifeCity/scripts.pory"
	multichoice 25, 5, MULTI_FIRE_WATER_GRASS, 1
# 884 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 885 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2
# 893 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3
# 901 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4
JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1:
# 910 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2:
# 887 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1, MSGBOX_AUTOCLOSE
# 891 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3:
# 895 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2, MSGBOX_AUTOCLOSE
# 899 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4:
# 903 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3, MSGBOX_AUTOCLOSE
# 907 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1


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

# 126 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 126 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 133 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 133 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 133 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 133 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 133 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 133 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 133 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 133 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 135 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 135 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 135 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 135 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 136 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 136 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 137 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 137 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 137 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 142 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 142 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 142 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 193 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 193 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
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
	step_end

# 199 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
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
	step_end

# 300 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 300 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 300 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 300 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 300 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 300 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 300 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 312 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 312 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 312 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 312 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 313 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 313 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 313 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 313 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 313 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 335 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 336 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 336 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 356 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 356 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 356 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 356 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 377 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 377 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 399 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 399 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 468 "data/maps/JubilifeCity/scripts.pory"
Jubilife_TradeStation_Stop_Movement_0:
# 468 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 501 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_Right_Movement_0:
# 501 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 501 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 501 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 501 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 501 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 523 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_left_Movement_0:
# 523 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 523 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 523 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 523 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 523 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 553 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_0:
# 553 "data/maps/JubilifeCity/scripts.pory"
	face_player
	step_end

# 578 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_1:
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 578 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 583 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_2:
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 583 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

test_event_Text_0:
# 38 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 39 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 93 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 99 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 111 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 118 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 130 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 140 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 147 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 148 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 149 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 153 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 161 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 167 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 179 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 184 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 210 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 220 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 233 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 236 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 237 "data/maps/JubilifeCity/scripts.pory"
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
# 247 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 256 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 261 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 267 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 275 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 286 "data/maps/JubilifeCity/scripts.pory"
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
# 303 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 323 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 331 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 342 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 351 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 362 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 372 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 394 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTwo_Text_0:
# 413 "data/maps/JubilifeCity/scripts.pory"
	.string "Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_lookerStopTalk_Text_0:
# 428 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTalk_Text_1:
# 439 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_TradeStation_Stop_Text_0:
# 461 "data/maps/JubilifeCity/scripts.pory"
	.string "Past here is the Local Trading Terminal\n"
	.string "your gateway to the community!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Local Trading Terminal is off-limits\n"
	.string " if you don’t have a Gym Badge. Sorry!$"

Jubilife_Poketkch_man_Cont_Text_0:
# 530 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!$"

Jubilife_Poketkch_man_Cont_Text_1:
# 537 "data/maps/JubilifeCity/scripts.pory"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_Poketkch_man_During_Hunt_Text_0:
# 554 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_Poketkch_man_During_Hunt_Text_1:
# 563 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokétch{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Jubilife_Poketkch_man_During_Hunt_Text_2:
# 570 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"

Jubilife_Poketkch_man_During_Hunt_Text_3:
# 596 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Clown_Two_text_Text_0:
# 615 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Clown_Two_text_Text_1:
# 621 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!$"

Clown_Two_text_Text_2:
# 623 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown_Two_text_Text_3:
# 628 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Clown_Two_text_Text_4:
# 636 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Clown_One_text_Text_0:
# 659 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Clown_One_text_Text_1:
# 667 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Clown_One_text_Text_2:
# 684 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Clown_Three_text_Text_0:
# 706 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Clown_Three_text_Text_1:
# 713 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p$"

JubilifeCity_Text_MapSign_Text_0:
# 747 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0:
# 755 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0:
# 762 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0:
# 770 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers’ School\n"
	.string "The First Step for Trainers!$"

JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0:
# 777 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

JubilifeCity_Text_TheLocalTerminal_Text_0:
# 784 "data/maps/JubilifeCity/scripts.pory"
	.string "The Local Terminal\n"
	.string "Your Gateway to the Community$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0:
# 794 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1:
# 798 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn’t see the need\n"
	.string "to visit the Trainers’ School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2:
# 808 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you’re not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There’s the Trainers’ School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0:
# 820 "data/maps/JubilifeCity/scripts.pory"
	.string "I’m trading Pokémon with my buddy!$"

JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0:
# 826 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0:
# 835 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that’ll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0:
# 844 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City’s built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0:
# 853 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where’d you come from?\p"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It’s a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_Text_DidYouSeeMeOnTV_Text_0:
# 864 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0:
# 871 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0:
# 879 "data/maps/JubilifeCity/scripts.pory"
	.string "The way you look...\n"
	.string "You’re obviously a Trainer!\p"
	.string "Can you tell me what type of Pokémon\n"
	.string "you like?$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1:
# 887 "data/maps/JubilifeCity/scripts.pory"
	.string "The Fire type?\n"
	.string "You must have a fiery personality.\p"
	.string "You’d better watch out that fire isn’t\n"
	.string "doused by water, though.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2:
# 895 "data/maps/JubilifeCity/scripts.pory"
	.string "A person that likes the Water type\n"
	.string "must be somewhat cool.\p"
	.string "But beware of being drained dry by\n"
	.string "thirsty grass.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3:
# 903 "data/maps/JubilifeCity/scripts.pory"
	.string "You chose the Grass type?\n"
	.string "No wonder you look so calm.\p"
	.string "I think you need to watch out you don’t\n"
	.string "get burned by fire.$"
