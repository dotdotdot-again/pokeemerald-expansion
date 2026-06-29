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
	checkplayergender
# 53 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 121 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 201 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 202 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 211 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 212 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 220 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 221 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 223 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 229 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 239 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 240 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 248 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 249 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 250 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 251 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 258 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 259 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 260 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 261 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 262 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 270 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 271 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 272 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 273 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 274 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 275 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 276 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 277 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 278 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 286 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 294 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 295 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 296 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 297 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 306 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 315 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 316 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 317 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 327 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 336 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 337 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 338 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 339 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 340 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 341 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 56 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 57 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 58 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 60 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 61 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 61 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 72 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 82 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 83 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 89 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 91 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 92 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 93 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 94 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 95 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 97 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 98 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 99 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 100 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 101 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 102 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 103 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 104 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 105 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 106 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 107 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 108 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 109 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 110 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 111 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 112 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 113 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 114 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 117 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 118 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 124 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 125 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 126 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 128 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 129 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 129 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 140 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 148 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 149 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 155 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 156 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 162 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 169 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 170 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 173 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 174 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 175 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 177 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 178 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 179 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 180 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 181 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 182 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 183 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 184 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 185 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 186 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 187 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 188 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 189 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 190 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 191 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 192 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 193 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 194 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 197 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 198 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 225 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 226 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 231 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 232 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 63 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 64 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 74 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 75 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 76 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 131 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 132 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 142 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 143 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 144 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 281 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 282 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 284 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 289 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 290 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 292 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 158 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 159 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 164 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 165 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 300 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 301 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 304 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 309 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 310 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 313 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 320 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 321 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 325 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 330 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 331 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 334 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 346 "data/maps/JubilifeCity/scripts.pory"
	lock
# 347 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 348 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 349 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 350 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 351 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 352 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 353 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 357 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 358 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 359 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 360 "data/maps/JubilifeCity/scripts.pory"
	release
	return


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

# 91 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 98 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 98 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 98 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 98 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 98 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 98 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 98 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 100 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 101 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 101 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 102 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 107 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 107 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 107 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 158 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 158 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
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
	step_end

# 164 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 164 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
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
	step_end

# 259 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 259 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 259 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 259 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 259 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 259 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 259 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 271 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 271 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 271 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 271 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 272 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 272 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 272 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 272 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 272 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 294 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 294 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 294 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 294 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 295 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 295 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 315 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 315 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 315 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 315 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 358 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 358 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

test_event_Text_0:
# 5 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 6 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 58 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 64 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 76 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 83 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 95 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 105 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 112 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 113 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 114 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 118 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 126 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 132 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 144 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 149 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 175 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 185 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 198 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 201 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 202 "data/maps/JubilifeCity/scripts.pory"
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
# 212 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 221 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 226 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 232 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 240 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 251 "data/maps/JubilifeCity/scripts.pory"
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite\n"
	.string "popular these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_25:
# 262 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 282 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 290 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 301 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 310 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 321 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 331 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 353 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"
