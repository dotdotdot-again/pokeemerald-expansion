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
	setflag FLAG_CLOWNS
# 54 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 55 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_2
# 123 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_3
Jubilife_Enterence_LuDa_Event_Cont_1:
# 203 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 204 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_18
# 213 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_17
# 214 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_19
# 222 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 223 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_20, MSGBOX_YESNO
# 225 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_7
# 231 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_8
Jubilife_Enterence_LuDa_Event_Cont_6:
# 241 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 242 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_23
# 250 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 251 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_RAINBOW_PASS
# 252 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 253 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_24, MSGBOX_AUTOCLOSE
# 260 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 261 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_10
# 262 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 263 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 264 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_25, MSGBOX_AUTOCLOSE
# 272 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 273 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_11
# 274 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 275 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_12
# 276 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 277 "data/maps/JubilifeCity/scripts.pory"
	removeobject LookerJubilife
# 278 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 279 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 280 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_26
# 288 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_27
Jubilife_Enterence_LuDa_Event_Cont_25:
# 296 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_13
# 297 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_14
# 298 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 299 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_37
# 308 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_38
Jubilife_Enterence_LuDa_Event_Cont_36:
# 317 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_15
# 318 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 319 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_42
# 329 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_43
Jubilife_Enterence_LuDa_Event_Cont_41:
# 338 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_16
# 339 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 340 "data/maps/JubilifeCity/scripts.pory"
	removeobject JubLuda
# 341 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_LUDA_JUBILIFE
# 342 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 1
# 343 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Enterence_LuDa_Event_Cont_2:
# 58 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 59 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 60 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_0
# 62 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 63 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 63 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_12
# 74 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_13
Jubilife_Enterence_LuDa_Event_Cont_11:
# 84 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 85 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_3, MSGBOX_AUTOCLOSE
# 91 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 93 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 94 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 95 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 96 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 97 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_4, MSGBOX_AUTOCLOSE
# 99 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 100 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 101 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 102 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 103 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 104 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 105 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 106 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 107 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_5
# 108 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 109 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 110 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 111 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 112 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 113 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 114 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 115 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 116 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 119 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 120 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_9
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_3:
# 126 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 127 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 128 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_10
# 130 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 131 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 131 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_19
# 142 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Jubilife_Enterence_LuDa_Event_Cont_20
Jubilife_Enterence_LuDa_Event_Cont_18:
# 150 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 151 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_13, MSGBOX_AUTOCLOSE
# 157 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 158 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 2
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_31
# 164 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_Enterence_LuDa_Event_Cont_32
# 171 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
# 172 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_0
Jubilife_Enterence_LuDa_Event_Cont_30:
# 175 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 176 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 177 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_14, MSGBOX_AUTOCLOSE
# 179 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 180 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_1
# 181 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 182 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_2
# 183 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_3
# 184 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_4
# 185 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 186 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 187 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_15
# 188 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 189 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilife, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 190 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 191 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 192 "data/maps/JubilifeCity/scripts.pory"
	waitmovementall
# 193 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_PL_LOOKER, 0
# 194 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_6
# 195 "data/maps/JubilifeCity/scripts.pory"
	setspeaker Jubilife_Enterence_LuDa_Event_Cont_Text_7
# 196 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_8
# 199 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 200 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_16
	goto Jubilife_Enterence_LuDa_Event_Cont_1

Jubilife_Enterence_LuDa_Event_Cont_7:
# 227 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 228 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_21
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_8:
# 233 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 234 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_22
	goto Jubilife_Enterence_LuDa_Event_Cont_6

Jubilife_Enterence_LuDa_Event_Cont_12:
# 65 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 66 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_1
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_13:
# 76 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 77 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 78 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_2
	goto Jubilife_Enterence_LuDa_Event_Cont_11

Jubilife_Enterence_LuDa_Event_Cont_19:
# 133 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 134 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_11
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_20:
# 144 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 145 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 146 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_12
	goto Jubilife_Enterence_LuDa_Event_Cont_18

Jubilife_Enterence_LuDa_Event_Cont_26:
# 283 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 284 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_26, MSGBOX_AUTOCLOSE
# 286 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_27:
# 291 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 292 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_27, MSGBOX_AUTOCLOSE
# 294 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_25

Jubilife_Enterence_LuDa_Event_Cont_31:
# 160 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_6
# 161 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_7
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_32:
# 166 "data/maps/JubilifeCity/scripts.pory"
	applymovement JubLuda, Jubilife_Enterence_LuDa_Event_Cont_Movement_8
# 167 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_Enterence_LuDa_Event_Cont_Movement_9
	goto Jubilife_Enterence_LuDa_Event_Cont_30

Jubilife_Enterence_LuDa_Event_Cont_37:
# 302 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 303 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_28, MSGBOX_AUTOCLOSE
# 306 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_38:
# 311 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 312 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_29, MSGBOX_AUTOCLOSE
# 315 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_36

Jubilife_Enterence_LuDa_Event_Cont_42:
# 322 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_DAWN
# 323 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_30, MSGBOX_AUTOCLOSE
# 327 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41

Jubilife_Enterence_LuDa_Event_Cont_43:
# 332 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 333 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Enterence_LuDa_Event_Cont_Text_31, MSGBOX_AUTOCLOSE
# 336 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_Enterence_LuDa_Event_Cont_41


Jubilife_lookerStop::
# 348 "data/maps/JubilifeCity/scripts.pory"
	lock
# 349 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 350 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 351 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 352 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 353 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 354 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 355 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStop_Text_0, MSGBOX_AUTOCLOSE
# 359 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 360 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 361 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 362 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTwo::
# 367 "data/maps/JubilifeCity/scripts.pory"
	lock
# 368 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 369 "data/maps/JubilifeCity/scripts.pory"
	applymovement LookerJubilifeBlock, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 370 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 371 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 372 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 373 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 374 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTwo_Text_0, MSGBOX_AUTOCLOSE
# 378 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 379 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_lookerStop_Movement_0
# 380 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 381 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilife_lookerStopTalk::
# 385 "data/maps/JubilifeCity/scripts.pory"
	lock
# 386 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_lookerStopTalk_2
# 397 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 3
	goto_if_eq Jubilife_lookerStopTalk_3
Jubilife_lookerStopTalk_1:
# 409 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_lookerStopTalk_2:
# 388 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 389 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_0, MSGBOX_NPC
# 395 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1

Jubilife_lookerStopTalk_3:
# 399 "data/maps/JubilifeCity/scripts.pory"
	setspeaker SP_NAME_LOOKER
# 400 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_lookerStopTalk_Text_1, MSGBOX_NPC
# 406 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Jubilife_lookerStopTalk_1


Jubilife_TradeStation_Stop::
# 413 "data/maps/JubilifeCity/scripts.pory"
	lock
# 414 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Jubilife_TradeStation_Stop_2
Jubilife_TradeStation_Stop_1:
# 418 "data/maps/JubilifeCity/scripts.pory"
	applymovement 4, Jubilife_Enterence_LuDa_Event_Mid_Movement_1
# 419 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 420 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 421 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 422 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_TradeStation_Stop_Text_0, MSGBOX_AUTOCLOSE
# 428 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 429 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_TradeStation_Stop_Movement_0
# 430 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 431 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_TradeStation_Stop_2:
	goto Jubilife_TradeStation_Stop_1


Jubilife_Poketkch_man::
# 435 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 436 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 437 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 438 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 439 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 440 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Mid_Movement_0
# 441 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 442 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Right::
# 446 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 447 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 448 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 449 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 450 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 451 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Right_Movement_0
# 452 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 453 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_Right::
# 457 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 458 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 459 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 460 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 461 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 462 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_Right_Movement_0
# 463 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 464 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_left::
# 468 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 469 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 470 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 471 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 472 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 473 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Left_Movement_0
# 474 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 475 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_far_left::
# 479 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 480 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Enterence_LuDa_Event_Cont_Movement_5
# 481 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 482 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 483 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 484 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_far_left_Movement_0
# 485 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
# 486 "data/maps/JubilifeCity/scripts.pory"
	call Jubilife_Poketkch_man_Cont
	return


Jubilife_Poketkch_man_Cont::
# 491 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_0
# 498 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_Cont_Text_1, MSGBOX_AUTOCLOSE
# 506 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 3
# 507 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


Jubilife_Poketkch_man_During_Hunt::
# 511 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_TWO, Jubilife_Poketkch_man_During_Hunt_4
Jubilife_Poketkch_man_During_Hunt_2:
# 556 "data/maps/JubilifeCity/scripts.pory"
	lock
# 557 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_3, MSGBOX_NPC
# 565 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Jubilife_Poketkch_man_During_Hunt_1:
# 513 "data/maps/JubilifeCity/scripts.pory"
	lockall
# 514 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 515 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_0
# 522 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 523 "data/maps/JubilifeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 524 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_1
# 526 "data/maps/JubilifeCity/scripts.pory"
	waitfanfare
# 527 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_EON_TICKET
# 528 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_MYSTIC_TICKET
# 529 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_AURORA_TICKET
# 530 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 531 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilife_Poketkch_man_During_Hunt_Text_2, MSGBOX_AUTOCLOSE
# 535 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 536 "data/maps/JubilifeCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_JUBILIFE_STATE
# 537 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_STATE, 1
	goto_if_eq Jubilife_Poketkch_man_During_Hunt_9
# 544 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_2
# 545 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
Jubilife_Poketkch_man_During_Hunt_8:
# 547 "data/maps/JubilifeCity/scripts.pory"
	removeobject poketch_president_outside
# 548 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 4
# 549 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_POKETKCH
# 550 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_JUBILIFE_LOOKER_BLOCK
# 551 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return

Jubilife_Poketkch_man_During_Hunt_3:
# 511 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_THREE, Jubilife_Poketkch_man_During_Hunt_1
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_4:
# 511 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWN_ONE, Jubilife_Poketkch_man_During_Hunt_3
	goto Jubilife_Poketkch_man_During_Hunt_2

Jubilife_Poketkch_man_During_Hunt_9:
# 539 "data/maps/JubilifeCity/scripts.pory"
	applymovement poketch_president_outside, Jubilife_Poketkch_man_During_Hunt_Movement_1
# 540 "data/maps/JubilifeCity/scripts.pory"
	waitmovement
	goto Jubilife_Poketkch_man_During_Hunt_8


Clown_Two_text::
# 572 "data/maps/JubilifeCity/scripts.pory"
	lock
# 573 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_TWO, Clown_Two_text_2
# 604 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2, MSGBOX_NPC
# 609 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Two_text_1:
# 612 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Two_text_2:
# 575 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Two, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 576 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_0, MSGBOX_YESNO
# 580 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Two_text_5
# 595 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Two_text_6
	goto Clown_Two_text_1

Clown_Two_text_5:
# 582 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 584 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_2
# 589 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 591 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 592 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_TWO
# 593 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_EON_TICKET
	goto Clown_Two_text_1

Clown_Two_text_6:
# 597 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 599 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Two_text_1


Clown_One_text::
# 616 "data/maps/JubilifeCity/scripts.pory"
	lock
# 617 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_8
Clown_One_text_6:
# 644 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_CLOWNS, Clown_One_text_5
Clown_One_text_4:
# 653 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 656 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_One_text_1:
# 659 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_One_text_2:
# 619 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_One, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 620 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_0, MSGBOX_YESNO
# 624 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_One_text_11
# 637 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_One_text_12
	goto Clown_One_text_1

Clown_One_text_3:
# 645 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_2, MSGBOX_NPC
# 649 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1

Clown_One_text_5:
# 644 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_ONE, Clown_One_text_3
	goto Clown_One_text_4

Clown_One_text_8:
# 617 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWNS, Clown_One_text_2
	goto Clown_One_text_6

Clown_One_text_11:
# 626 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 628 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1
# 631 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 633 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 634 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_ONE
# 635 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
	goto Clown_One_text_1

Clown_One_text_12:
# 639 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 641 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_One_text_1


Clown_Three_text::
# 663 "data/maps/JubilifeCity/scripts.pory"
	lock
# 664 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_CLOWN_THREE, Clown_Three_text_2
# 694 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_One_text_Text_1, MSGBOX_NPC
# 697 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
Clown_Three_text_1:
# 700 "data/maps/JubilifeCity/scripts.pory"
	release
	return

Clown_Three_text_2:
# 666 "data/maps/JubilifeCity/scripts.pory"
	applymovement Clown_Three, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 667 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_0, MSGBOX_YESNO
# 670 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Clown_Three_text_5
# 685 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Clown_Three_text_6
	goto Clown_Three_text_1

Clown_Three_text_5:
# 672 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_1
# 674 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Three_text_Text_1
# 679 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_3
# 681 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
# 682 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_CLOWN_THREE
# 683 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_AURORA_TICKET
	goto Clown_Three_text_1

Clown_Three_text_6:
# 687 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown_Two_text_Text_4, MSGBOX_AUTOCLOSE
# 689 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto Clown_Three_text_1


JubilifeCity_Text_MapSign::
# 707 "data/maps/JubilifeCity/scripts.pory"
	lock
# 708 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_MapSign_Text_0, MSGBOX_SIGN
# 711 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCondominiumsTenantsWanted::
# 715 "data/maps/JubilifeCity/scripts.pory"
	lock
# 716 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0, MSGBOX_SIGN
# 718 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld::
# 722 "data/maps/JubilifeCity/scripts.pory"
	lock
# 723 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0, MSGBOX_SIGN
# 725 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers::
# 730 "data/maps/JubilifeCity/scripts.pory"
	lock
# 731 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0, MSGBOX_SIGN
# 733 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation::
# 737 "data/maps/JubilifeCity/scripts.pory"
	lock
# 738 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0, MSGBOX_SIGN
# 740 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_TheLocalTerminal::
# 744 "data/maps/JubilifeCity/scripts.pory"
	lock
# 745 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_TheLocalTerminal_Text_0, MSGBOX_SIGN
# 747 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon::
# 753 "data/maps/JubilifeCity/scripts.pory"
	lock
# 754 "data/maps/JubilifeCity/scripts.pory"
	applymovement 3, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 755 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0, MSGBOX_YESNO
# 757 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2
# 767 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3
JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1:
# 776 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_2:
# 759 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1, MSGBOX_AUTOCLOSE
# 765 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_3:
# 769 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2, MSGBOX_AUTOCLOSE
# 774 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_1


JubilifeCity_Text_ImTradingPokemonWithMyBuddy::
# 780 "data/maps/JubilifeCity/scripts.pory"
	lock
# 781 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0, MSGBOX_NPC
# 782 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt::
# 786 "data/maps/JubilifeCity/scripts.pory"
	lock
# 787 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0, MSGBOX_NPC
# 791 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou::
# 795 "data/maps/JubilifeCity/scripts.pory"
	lock
# 796 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0, MSGBOX_NPC
# 800 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain::
# 804 "data/maps/JubilifeCity/scripts.pory"
	lock
# 805 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0, MSGBOX_NPC
# 809 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_HiyaWheredYouComeFrom::
# 813 "data/maps/JubilifeCity/scripts.pory"
	lock
# 814 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0, MSGBOX_NPC
# 820 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_DidYouSeeMeOnTV::
# 824 "data/maps/JubilifeCity/scripts.pory"
	lock
# 825 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_DidYouSeeMeOnTV_Text_0, MSGBOX_NPC
# 827 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier::
# 831 "data/maps/JubilifeCity/scripts.pory"
	lock
# 832 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0, MSGBOX_NPC
# 834 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike::
# 838 "data/maps/JubilifeCity/scripts.pory"
	lock
# 839 "data/maps/JubilifeCity/scripts.pory"
	applymovement 5, Jubilife_Poketkch_man_During_Hunt_Movement_0
# 840 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0
# 844 "data/maps/JubilifeCity/scripts.pory"
	multichoice 25, 5, MULTI_FIRE_WATER_GRASS, 1
# 845 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 846 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2
# 854 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3
# 862 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4
JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1:
# 871 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_2:
# 848 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1, MSGBOX_AUTOCLOSE
# 852 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_3:
# 856 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2, MSGBOX_AUTOCLOSE
# 860 "data/maps/JubilifeCity/scripts.pory"
	waitmessage
	goto JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_1

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_4:
# 864 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3, MSGBOX_AUTOCLOSE
# 868 "data/maps/JubilifeCity/scripts.pory"
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

# 93 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_0:
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_1:
# 100 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 100 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 100 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 100 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 100 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 100 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 102 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_2:
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 103 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_3:
# 103 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_4:
# 104 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 104 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 104 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_5:
# 109 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 109 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 160 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_6:
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
# 160 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 161 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_7:
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 161 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 166 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_8:
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
# 166 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 167 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_9:
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 167 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 261 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_10:
# 261 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 261 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 261 "data/maps/JubilifeCity/scripts.pory"
	delay_8
# 261 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 261 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 261 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 273 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_11:
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 273 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 273 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 274 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_12:
# 274 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 274 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 274 "data/maps/JubilifeCity/scripts.pory"
	delay_4
# 274 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 296 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_13:
# 296 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 296 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 296 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 297 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_14:
# 297 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 317 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_15:
# 317 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 317 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 317 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 338 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Enterence_LuDa_Event_Cont_Movement_16:
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/JubilifeCity/scripts.pory"
Jubilife_lookerStop_Movement_0:
# 360 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 429 "data/maps/JubilifeCity/scripts.pory"
Jubilife_TradeStation_Stop_Movement_0:
# 429 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 462 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_Right_Movement_0:
# 462 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 462 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 462 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 462 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 462 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_far_left_Movement_0:
# 484 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 484 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 484 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 484 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 484 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 514 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_0:
# 514 "data/maps/JubilifeCity/scripts.pory"
	face_player
	step_end

# 539 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_1:
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 539 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 544 "data/maps/JubilifeCity/scripts.pory"
Jubilife_Poketkch_man_During_Hunt_Movement_2:
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 544 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

test_event_Text_0:
# 5 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 6 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"

Jubilife_Enterence_LuDa_Event_Cont_Text_0:
# 60 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_1:
# 66 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_2:
# 78 "data/maps/JubilifeCity/scripts.pory"
	.string "Wow! You’ve already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_3:
# 85 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, I know! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don’t be shy. Follow me!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_4:
# 97 "data/maps/JubilifeCity/scripts.pory"
	.string "That man...\n"
	.string "What is he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_5:
# 107 "data/maps/JubilifeCity/scripts.pory"
	.string "Um...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_6:
# 114 "data/maps/JubilifeCity/scripts.pory"
	.string "WHAAAT?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_7:
# 115 "data/maps/JubilifeCity/scripts.pory"
	.string "Mystery man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_8:
# 116 "data/maps/JubilifeCity/scripts.pory"
	.string "...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_9:
# 120 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_10:
# 128 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_11:
# 134 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it’s worth it. The more Pokémon\n"
	.string "you have, the happier you’ll be.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_12:
# 146 "data/maps/JubilifeCity/scripts.pory"
	.string "Whoa! You already have {STR_VAR_1} Pokémon\n"
	.string "with you!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_13:
# 151 "data/maps/JubilifeCity/scripts.pory"
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There’s this great place for that.\p"
	.string "Come on! It’s all right.\n"
	.string "Follow me.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_14:
# 177 "data/maps/JubilifeCity/scripts.pory"
	.string "That guy...\n"
	.string "What’s he doing?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_15:
# 187 "data/maps/JubilifeCity/scripts.pory"
	.string "Uh, excuse...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_16:
# 200 "data/maps/JubilifeCity/scripts.pory"
	.string "Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_Enterence_LuDa_Event_Cont_Text_17:
# 203 "data/maps/JubilifeCity/scripts.pory"
	.string "Shady man$"

Jubilife_Enterence_LuDa_Event_Cont_Text_18:
# 204 "data/maps/JubilifeCity/scripts.pory"
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
# 214 "data/maps/JubilifeCity/scripts.pory"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p$"

Jubilife_Enterence_LuDa_Event_Cont_Text_20:
# 223 "data/maps/JubilifeCity/scripts.pory"
	.string "Incidentally, is the saying, “Don’t be\n"
	.string "a thief!” familiar to you?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_21:
# 228 "data/maps/JubilifeCity/scripts.pory"
	.string "Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_22:
# 234 "data/maps/JubilifeCity/scripts.pory"
	.string "No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_23:
# 242 "data/maps/JubilifeCity/scripts.pory"
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_Enterence_LuDa_Event_Cont_Text_24:
# 253 "data/maps/JubilifeCity/scripts.pory"
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite\n"
	.string "popular these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_25:
# 264 "data/maps/JubilifeCity/scripts.pory"
	.string "Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_26:
# 284 "data/maps/JubilifeCity/scripts.pory"
	.string "...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_27:
# 292 "data/maps/JubilifeCity/scripts.pory"
	.string "Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_Enterence_LuDa_Event_Cont_Text_28:
# 303 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here it is.\n"
	.string "It’s the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_29:
# 312 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers’ School.\l"
	.string "The name says it all!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_30:
# 323 "data/maps/JubilifeCity/scripts.pory"
	.string "I saw your friend Barry go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_Enterence_LuDa_Event_Cont_Text_31:
# 333 "data/maps/JubilifeCity/scripts.pory"
	.string "Your pal Barry went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_lookerStop_Text_0:
# 355 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, my friend.\n"
	.string "Have you visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTwo_Text_0:
# 374 "data/maps/JubilifeCity/scripts.pory"
	.string "Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_lookerStopTalk_Text_0:
# 389 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_lookerStopTalk_Text_1:
# 400 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

Jubilife_TradeStation_Stop_Text_0:
# 422 "data/maps/JubilifeCity/scripts.pory"
	.string "Past here is the Local Trading Terminal\n"
	.string "your gateway to the community!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Local Trading Terminal is off-limits\n"
	.string " if you don’t have a Gym Badge. Sorry!$"

Jubilife_Poketkch_man_Cont_Text_0:
# 491 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!$"

Jubilife_Poketkch_man_Cont_Text_1:
# 498 "data/maps/JubilifeCity/scripts.pory"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_Poketkch_man_During_Hunt_Text_0:
# 515 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_Poketkch_man_During_Hunt_Text_1:
# 524 "data/maps/JubilifeCity/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokétch{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Jubilife_Poketkch_man_During_Hunt_Text_2:
# 531 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"

Jubilife_Poketkch_man_During_Hunt_Text_3:
# 557 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Clown_Two_text_Text_0:
# 576 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Clown_Two_text_Text_1:
# 582 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!$"

Clown_Two_text_Text_2:
# 584 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown_Two_text_Text_3:
# 589 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Clown_Two_text_Text_4:
# 597 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Clown_One_text_Text_0:
# 620 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Clown_One_text_Text_1:
# 628 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Clown_One_text_Text_2:
# 645 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Clown_Three_text_Text_0:
# 667 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Clown_Three_text_Text_1:
# 674 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p$"

JubilifeCity_Text_MapSign_Text_0:
# 708 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

JubilifeCity_Text_JubilifeCondominiumsTenantsWanted_Text_0:
# 716 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

JubilifeCity_Text_ThePoketchCompanyPokemonWatchesForTheWorld_Text_0:
# 723 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

JubilifeCity_Text_TrainersSchoolTheFirstStepForTrainers_Text_0:
# 731 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers’ School\n"
	.string "The First Step for Trainers!$"

JubilifeCity_Text_JubilifeTVTheFunAndGamesTVStation_Text_0:
# 738 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

JubilifeCity_Text_TheLocalTerminal_Text_0:
# 745 "data/maps/JubilifeCity/scripts.pory"
	.string "The Local Terminal\n"
	.string "Your Gateway to the Community$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_0:
# 755 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_1:
# 759 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn’t see the need\n"
	.string "to visit the Trainers’ School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_Text_HelloTrainerDoYouKnowMuchAboutPokemon_Text_2:
# 769 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you’re not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There’s the Trainers’ School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_Text_ImTradingPokemonWithMyBuddy_Text_0:
# 781 "data/maps/JubilifeCity/scripts.pory"
	.string "I’m trading Pokémon with my buddy!$"

JubilifeCity_TextIMadeMyPokemonHoldAnItemBeforeTradingIt_Text_0:
# 787 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_Text_AtMostYouCanHaveSixPokemonWithYou_Text_0:
# 796 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that’ll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_Text_JubilifeCitysBuiltOnLandTheyCarvedOutOfAMountain_Text_0:
# 805 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City’s built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_Text_HiyaWheredYouComeFrom_Text_0:
# 814 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where’d you come from?\p"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It’s a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_Text_DidYouSeeMeOnTV_Text_0:
# 825 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_Text_WhenYouWalkWithYourPokemonTheyGraduallyGrowFriendlier_Text_0:
# 832 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_0:
# 840 "data/maps/JubilifeCity/scripts.pory"
	.string "The way you look...\n"
	.string "You’re obviously a Trainer!\p"
	.string "Can you tell me what type of Pokémon\n"
	.string "you like?$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_1:
# 848 "data/maps/JubilifeCity/scripts.pory"
	.string "The Fire type?\n"
	.string "You must have a fiery personality.\p"
	.string "You’d better watch out that fire isn’t\n"
	.string "doused by water, though.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_2:
# 856 "data/maps/JubilifeCity/scripts.pory"
	.string "A person that likes the Water type\n"
	.string "must be somewhat cool.\p"
	.string "But beware of being drained dry by\n"
	.string "thirsty grass.$"

JubilifeCity_Text_CanYouTellMeWhatTypeOfPokemonYouLike_Text_3:
# 864 "data/maps/JubilifeCity/scripts.pory"
	.string "You chose the Grass type?\n"
	.string "No wonder you look so calm.\p"
	.string "I think you need to watch out you don’t\n"
	.string "get burned by fire.$"
