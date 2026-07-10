JubilifeCity_MapScripts::
	.byte 0


test_event::
# 4 "data/maps/JubilifeCity/scripts.pory"
	lock
# 5 "data/maps/JubilifeCity/scripts.pory"
	setspeaker test_event_Text_0
# 6 "data/maps/JubilifeCity/scripts.pory"
	msgbox test_event_Text_1, MSGBOX_NPC
# 7 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Enterence_LuDa_Event_Mid::
# 11 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 12 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 13 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 14 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 15 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 16 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 17 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 18 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 19 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 20 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Left::
# 24 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 25 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 26 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 27 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 28 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 29 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 30 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 31 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 32 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 33 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 2
# 34 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Right::
# 38 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 39 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 40 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 41 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 42 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 43 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 44 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 45 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Mid_Movement_2
# 46 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 47 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 48 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Enterence_LuDa_Event_Cont
	return


Jubilife_Enterence_LuDa_Event_Cont::
# 52 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 53 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 54 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 122 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 202 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 203 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 212 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 213 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 221 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 222 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 224 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 230 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 240 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 241 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 249 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 250 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 251 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 252 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 259 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 260 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 261 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 262 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 263 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 271 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 272 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 273 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 274 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 275 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 276 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 277 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 278 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 279 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 287 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 295 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 296 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 297 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 298 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 307 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 316 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 317 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 318 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 328 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 337 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 338 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 339 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 340 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 341 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 342 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 57 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 58 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 59 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 61 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 62 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 62 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 73 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 83 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 84 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 90 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 92 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 93 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 94 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 95 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 96 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 98 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 99 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 100 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 101 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 102 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 103 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 104 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 105 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 106 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 107 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 108 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 109 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 110 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 111 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 112 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 113 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 114 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 115 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 118 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 119 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 125 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 126 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 127 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 129 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 130 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 130 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 141 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 149 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 150 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 156 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 157 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 163 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 170 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 171 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 174 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 175 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 176 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 178 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 179 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 180 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 181 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 182 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 183 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 184 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 185 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 186 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 187 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 188 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 189 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 190 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 191 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 192 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 193 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 194 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 195 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 198 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 199 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 226 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 227 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 232 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 233 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 64 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 65 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 75 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 76 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 77 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 132 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 133 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 143 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 144 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 145 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 282 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 283 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 285 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 290 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 291 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 293 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 159 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 160 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 165 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 166 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 301 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 302 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 305 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 310 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 311 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 314 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 321 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 322 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 326 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 331 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 332 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 335 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 347 "data/maps/JubilifeCity/scripts.pory"
	lock
# 348 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 349 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 350 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 351 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 352 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 353 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 354 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 358 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 359 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 360 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 361 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTwo::
# 365 "data/maps/JubilifeCity/scripts.pory"
	lock
# 366 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 367 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 368 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 369 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 370 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 371 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 372 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTwo_Text_0, MSGBOX_AUTOCLOSE
# 376 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 377 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 378 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 379 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_TradeStation_Stop::
# 383 "data/maps/JubilifeCity/scripts.pory"
	lock
# 384 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Jubilife_TradeStation_Stop_2
Jubilife_TradeStation_Stop_1:
# 388 "data/maps/JubilifeCity/scripts.pory"
	applymovement 4, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 389 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 390 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 391 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 392 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_TradeStation_Stop_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 399 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_TradeStation_Stop_Movement_0
# 400 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 401 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_TradeStation_Stop_2:
	goto Jubilife_TradeStation_Stop_1


Jubilife_Poketkch_man::
# 405 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 406 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 407 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 408 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 409 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 410 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 411 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 412 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Right::
# 416 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 417 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 418 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 419 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 420 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 421 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 422 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 423 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_Right::
# 427 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 428 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 429 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 430 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 431 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 432 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_Right_Movement_0
# 433 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 434 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_left::
# 438 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 439 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 440 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 441 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 442 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 443 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 444 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 445 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_left::
# 449 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 450 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 451 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 452 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 453 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 454 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_left_Movement_0
# 455 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 456 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Cont::
# 461 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_0
# 468 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_1, MSGBOX_AUTOCLOSE
# 476 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 477 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Poketkch_man_During_Hunt::
# 481 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_TWO, Jubilife_Poketkch_man_During_Hunt_4
Jubilife_Poketkch_man_During_Hunt_2:
# 525 "data/maps/JubilifeCity/scripts.pory"
	lock
# 526 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_3, MSGBOX_NPC
# 534 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_Poketkch_man_During_Hunt_1:
# 483 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 484 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 485 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_0
# 492 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 493 "data/maps/JubilifeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 494 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_1
# 496 "data/maps/JubilifeCity/scripts.pory"
	waitfanfare
# 497 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_EON_TICKET
# 498 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_MYSTIC_TICKET
# 499 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_AURORA_TICKET
# 500 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 501 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_2, MSGBOX_AUTOCLOSE
# 505 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 506 "data/maps/JubilifeCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 507 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_Poketkch_man_During_Hunt_9
# 514 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_2
# 515 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
Jubilife_Poketkch_man_During_Hunt_8:
# 517 "data/maps/JubilifeCity/scripts.pory"
	removeobject poketch_president_outside
# 518 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 4
# 519 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 520 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Poketkch_man_During_Hunt_3:
# 481 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_THREE, Jubilife_Poketkch_man_During_Hunt_1
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_4:
# 481 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_ONE, Jubilife_Poketkch_man_During_Hunt_3
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_9:
# 509 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_1
# 510 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
	goto Jubilife_Poketkch_man_During_Hunt_8


Clown_Two_text::
# 541 "data/maps/JubilifeCity/scripts.pory"
	lock
# 542 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_TWO, Clown_Two_text_2
# 573 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2, MSGBOX_NPC
# 578 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Two_text_1:
# 581 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Two_text_2:
# 544 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Two, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 545 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_0, MSGBOX_YESNO
# 549 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Two_text_5
# 564 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Two_text_6
	goto Clown_Two_text_1

Clown_Two_text_5:
# 551 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 553 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2
# 558 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 560 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 561 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_TWO
# 562 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_EON_TICKET
	goto Clown_Two_text_1

Clown_Two_text_6:
# 566 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 568 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Two_text_1


Clown_One_text::
# 585 "data/maps/JubilifeCity/scripts.pory"
	lock
# 586 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_2
# 615 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 618 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_One_text_1:
# 621 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_One_text_2:
# 588 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_One, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 589 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_0, MSGBOX_YESNO
# 593 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_One_text_5
# 606 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_One_text_6
	goto Clown_One_text_1

Clown_One_text_5:
# 595 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 597 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1
# 600 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 602 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 603 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_ONE
# 604 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
	goto Clown_One_text_1

Clown_One_text_6:
# 608 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 610 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1


Clown_Three_text::
# 625 "data/maps/JubilifeCity/scripts.pory"
	lock
# 626 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_THREE, Clown_Three_text_2
# 656 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 659 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Three_text_1:
# 662 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Three_text_2:
# 628 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Three, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 629 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_0, MSGBOX_YESNO
# 632 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Three_text_5
# 647 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Three_text_6
	goto Clown_Three_text_1

Clown_Three_text_5:
# 634 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 636 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_1
# 641 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 643 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 644 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_THREE
# 645 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_AURORA_TICKET
	goto Clown_Three_text_1

Clown_Three_text_6:
# 649 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 651 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Three_text_1


JubilifeCity_Text_MapSign::
# 669 "data/maps/JubilifeCity/scripts.pory"
	lock
# 670 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_MapSign_Text_0, MSGBOX_SIGN
# 672 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCondominiumsTenantsWanted::
# 676 "data/maps/JubilifeCity/scripts.pory"
	lock
# 677 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0, MSGBOX_SIGN
# 679 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld::
# 683 "data/maps/JubilifeCity/scripts.pory"
	lock
# 684 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0, MSGBOX_SIGN
# 686 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers::
# 691 "data/maps/JubilifeCity/scripts.pory"
	lock
# 692 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0, MSGBOX_SIGN
# 694 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation::
# 698 "data/maps/JubilifeCity/scripts.pory"
	lock
# 699 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0, MSGBOX_SIGN
# 701 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TheLocalTerminal::
# 705 "data/maps/JubilifeCity/scripts.pory"
	lock
# 706 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TheLocalTerminal_Text_0, MSGBOX_SIGN
# 708 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon::
# 714 "data/maps/JubilifeCity/scripts.pory"
	lock
# 715 "data/maps/JubilifeCity/scripts.pory"
	applymovement 3, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 716 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0, MSGBOX_YESNO
# 718 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2
# 728 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3
JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1:
# 737 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2:
# 720 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1, MSGBOX_AUTOCLOSE
# 726 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3:
# 730 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2, MSGBOX_AUTOCLOSE
# 735 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1


JubilifeCity_Text_ImTradingPokemonWithMyBuddy::
# 741 "data/maps/JubilifeCity/scripts.pory"
	lock
# 742 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0, MSGBOX_NPC
# 743 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt::
# 747 "data/maps/JubilifeCity/scripts.pory"
	lock
# 748 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0, MSGBOX_NPC
# 752 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou::
# 756 "data/maps/JubilifeCity/scripts.pory"
	lock
# 757 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0, MSGBOX_NPC
# 761 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain::
# 765 "data/maps/JubilifeCity/scripts.pory"
	lock
# 766 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0, MSGBOX_NPC
# 770 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HiyaWheredYouComeFrom::
# 774 "data/maps/JubilifeCity/scripts.pory"
	lock
# 775 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0, MSGBOX_NPC
# 781 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_DidYouSeeMeOnTV::
# 785 "data/maps/JubilifeCity/scripts.pory"
	lock
# 786 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_DidYouSeeMeOnTV_Text_0, MSGBOX_NPC
# 788 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier::
# 792 "data/maps/JubilifeCity/scripts.pory"
	lock
# 793 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0, MSGBOX_NPC
# 795 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike::
# 799 "data/maps/JubilifeCity/scripts.pory"
	lock
# 800 "data/maps/JubilifeCity/scripts.pory"
	applymovement 5, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 801 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0
# 805 "data/maps/JubilifeCity/scripts.pory"
	multichoice 25, 5, MULTI_FIRE_WATER_GRASS, 1
# 806 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 807 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2
# 815 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3
# 823 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4
JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1:
# 832 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2:
# 809 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1, MSGBOX_AUTOCLOSE
# 813 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3:
# 817 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2, MSGBOX_AUTOCLOSE
# 821 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4:
# 825 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3, MSGBOX_AUTOCLOSE
# 829 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1


# 12 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_0:
# 12 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 12 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 12 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 14 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_1:
# 14 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Mid_Movement_2:
# 18 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 18 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 25 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Left_Movement_0:
# 25 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 25 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 25 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 25 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Right_Movement_0:
# 39 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 39 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 39 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 39 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 99 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 99 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 99 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 99 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 99 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 99 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 99 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 99 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 101 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 101 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 101 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 101 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 102 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 103 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 103 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 103 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 108 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 108 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 108 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 159 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 159 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 165 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 166 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 260 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 260 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 260 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 260 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 260 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 260 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 260 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 272 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 272 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 272 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 272 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 273 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 273 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 273 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 273 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 273 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 295 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 295 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 295 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 295 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 296 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 296 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 316 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 316 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 316 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 316 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 337 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 359 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 359 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 399 "data/maps/JubilifeCity/scripts.pory"
Jubilife_TradeStation_Stop_Movement_0:
# 399 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 432 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_Right_Movement_0:
# 432 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 432 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 432 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 432 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 432 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_left_Movement_0:
# 454 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 454 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 454 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 454 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 454 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_0:
# 484 "data/maps/JubilifeCity/scripts.pory"
	face_player
	step_end

# 509 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_1:
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 509 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 514 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_2:
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 514 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

test_event_Text_0:
# 5 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 6 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 59 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 65 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 77 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 84 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 96 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 106 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 113 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 114 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 115 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 119 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 127 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 133 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 145 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 150 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 176 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 186 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 199 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 202 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 203 "data/maps/JubilifeCity/scripts.pory"
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
# 213 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 222 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 227 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 233 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 241 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 252 "data/maps/JubilifeCity/scripts.pory"
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite\n"
	.string "popular these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_25:
# 263 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 283 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 291 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 302 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 311 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 322 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 332 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 354 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTwo_Text_0:
# 372 "data/maps/JubilifeCity/scripts.pory"
	.string "Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_TradeStation_Stop_Text_0:
# 392 "data/maps/JubilifeCity/scripts.pory"
	.string "Past here is the Local Trading Terminal\n"
	.string "your gateway to the community!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Local Trading Terminal is off-limits\n"
	.string " if you don’t have a Gym Badge. Sorry!$"

Jubilife_Poketkch_man_Cont_Text_0:
# 461 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!$"

Jubilife_Poketkch_man_Cont_Text_1:
# 468 "data/maps/JubilifeCity/scripts.pory"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_Poketkch_man_During_Hunt_Text_0:
# 485 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_Poketkch_man_During_Hunt_Text_1:
# 494 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokétch{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Jubilife_Poketkch_man_During_Hunt_Text_2:
# 501 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"

Jubilife_Poketkch_man_During_Hunt_Text_3:
# 526 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Clown_Two_text_Text_0:
# 545 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Clown_Two_text_Text_1:
# 551 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!$"

Clown_Two_text_Text_2:
# 553 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown_Two_text_Text_3:
# 558 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Clown_Two_text_Text_4:
# 566 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Clown_One_text_Text_0:
# 589 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Clown_One_text_Text_1:
# 597 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Clown_Three_text_Text_0:
# 629 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Clown_Three_text_Text_1:
# 636 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p$"

JubilifeCity_Text_MapSign_Text_0:
# 670 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0:
# 677 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0:
# 684 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0:
# 692 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers’ School\n"
	.string "The First Step for Trainers!$"

JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0:
# 699 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

JubilifeCity_Text_TheLocalTerminal_Text_0:
# 706 "data/maps/JubilifeCity/scripts.pory"
	.string "The Local Terminal\n"
	.string "Your Gateway to the Community$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0:
# 716 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1:
# 720 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn’t see the need\n"
	.string "to visit the Trainers’ School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2:
# 730 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you’re not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There’s the Trainers’ School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0:
# 742 "data/maps/JubilifeCity/scripts.pory"
	.string "I’m trading Pokémon with my buddy!$"

JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0:
# 748 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0:
# 757 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that’ll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0:
# 766 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City’s built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0:
# 775 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where’d you come from?\p"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It’s a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_Text_DidYouSeeMeOnTV_Text_0:
# 786 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0:
# 793 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0:
# 801 "data/maps/JubilifeCity/scripts.pory"
	.string "The way you look...\n"
	.string "You’re obviously a Trainer!\p"
	.string "Can you tell me what type of Pokémon\n"
	.string "you like?$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1:
# 809 "data/maps/JubilifeCity/scripts.pory"
	.string "The Fire type?\n"
	.string "You must have a fiery personality.\p"
	.string "You’d better watch out that fire isn’t\n"
	.string "doused by water, though.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2:
# 817 "data/maps/JubilifeCity/scripts.pory"
	.string "A person that likes the Water type\n"
	.string "must be somewhat cool.\p"
	.string "But beware of being drained dry by\n"
	.string "thirsty grass.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3:
# 825 "data/maps/JubilifeCity/scripts.pory"
	.string "You chose the Grass type?\n"
	.string "No wonder you look so calm.\p"
	.string "I think you need to watch out you don’t\n"
	.string "get burned by fire.$"
