Route201_MapScripts::
# 2 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTrans
	.byte 0


Route201_OnTrans::
# 6 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 7 "data/maps/Route201/scripts.pory"
	removeobject Rowan_Route_201
# 8 "data/maps/Route201/scripts.pory"
	removeobject LuDa_Route_201_again
# 9 "data/maps/Route201/scripts.pory"
	removeobject Rowans_Bag_Route201
# 10 "data/maps/Route201/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_2
# 11 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	return


Route201_Barry::
# 15 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 16 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_0
# 27 "data/maps/Route201/scripts.pory"
	waitmessage
# 28 "data/maps/Route201/scripts.pory"
	closemessage
# 29 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_0
# 30 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 31 "data/maps/Route201/scripts.pory"
	waitmovementall
# 32 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 33 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_1
# 40 "data/maps/Route201/scripts.pory"
	waitmessage
# 41 "data/maps/Route201/scripts.pory"
	closemessage
# 42 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_2
# 43 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_3
# 44 "data/maps/Route201/scripts.pory"
	waitmovementall
# 45 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 46 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_4
# 49 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 50 "data/maps/Route201/scripts.pory"
	waitmovementall
# 51 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_3, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route201/scripts.pory"
	waitmessage
# 53 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_5
# 54 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_5
# 55 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Route201/scripts.pory"
	waitse
# 57 "data/maps/Route201/scripts.pory"
	waitmovement
# 58 "data/maps/Route201/scripts.pory"
	playbgm MUS_ROUTE122, 0
# 59 "data/maps/Route201/scripts.pory"
	clearflag FLAG_WONDER_CARD_UNUSED_2
# 60 "data/maps/Route201/scripts.pory"
	addobject Rowan_Route_201
# 61 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_6
# 62 "data/maps/Route201/scripts.pory"
	waitmovement
# 63 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 64 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_4
# 68 "data/maps/Route201/scripts.pory"
	waitmessage
# 69 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 70 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_5
# 72 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 73 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_6
# 77 "data/maps/Route201/scripts.pory"
	waitmessage
# 78 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 79 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 80 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_7, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route201/scripts.pory"
	waitmessage
# 85 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_3
# 86 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_8
# 87 "data/maps/Route201/scripts.pory"
	waitmovementall
# 88 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 89 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_8, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route201/scripts.pory"
	waitmessage
# 102 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_9
# 103 "data/maps/Route201/scripts.pory"
	waitmovement
# 104 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 105 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_9, MSGBOX_YESNO
# 107 "data/maps/Route201/scripts.pory"
	waitmessage
Route201_Barry_2:
# 108 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_Barry_3
# 123 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 124 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_12
# 126 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 127 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_13
# 130 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 131 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_14, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route201/scripts.pory"
	waitmessage
# 137 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 138 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 139 "data/maps/Route201/scripts.pory"
	waitmovementall
# 140 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 141 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_15, MSGBOX_YESNO
# 142 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_6
# 146 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_Barry_7
Route201_Barry_5:
# 152 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 153 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_17
# 158 "data/maps/Route201/scripts.pory"
	waitmessage
# 159 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_3
# 160 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_3
# 161 "data/maps/Route201/scripts.pory"
	waitmovementall
# 162 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 163 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_18
# 171 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 172 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_19
# 184 "data/maps/Route201/scripts.pory"
	waitmessage
# 185 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_10
# 186 "data/maps/Route201/scripts.pory"
	waitmovement
# 187 "data/maps/Route201/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 188 "data/maps/Route201/scripts.pory"
	addobject LuDa_Route_201_again
# 189 "data/maps/Route201/scripts.pory"
	checkplayergender
# 190 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_Barry_11
# 199 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_12
Route201_Barry_10:
# 242 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_15
# 243 "data/maps/Route201/scripts.pory"
	waitmovement
# 244 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 245 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_27
# 247 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_16
# 248 "data/maps/Route201/scripts.pory"
	waitmovement
# 249 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 250 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_28, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route201/scripts.pory"
	waitmessage
# 255 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 256 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 257 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_29
# 261 "data/maps/Route201/scripts.pory"
	waitmessage
# 262 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 7
# 263 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 264 "data/maps/Route201/scripts.pory"
	releaseall
	return

Route201_Barry_3:
# 110 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 111 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 112 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_10
# 114 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_3
# 115 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 116 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_11, MSGBOX_YESNO
# 121 "data/maps/Route201/scripts.pory"
	waitmessage
	goto Route201_Barry_2

Route201_Barry_6:
	goto Route201_Barry_5

Route201_Barry_7:
# 148 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 149 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_16
	goto Route201_Barry_5

Route201_Barry_11:
# 192 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 193 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_20
# 194 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 195 "data/maps/Route201/scripts.pory"
	waitmovement
# 196 "data/maps/Route201/scripts.pory"
	releaseall
	goto Route201_Barry_10

Route201_Barry_12:
# 201 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 202 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_20
# 203 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 204 "data/maps/Route201/scripts.pory"
	waitmovement
# 205 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 206 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_21
# 208 "data/maps/Route201/scripts.pory"
	waitmessage
# 209 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 210 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 211 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 212 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 213 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 214 "data/maps/Route201/scripts.pory"
	waitmovement
# 215 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 216 "data/maps/Route201/scripts.pory"
	waitmovement
# 217 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 218 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_22
# 219 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 220 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_23
# 224 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 225 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 226 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 227 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_24
# 228 "data/maps/Route201/scripts.pory"
	waitmovement
# 229 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 230 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_25
# 232 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 233 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
	goto Route201_Barry_10


Route201_Barry_Trigger_Far_Right::
# 268 "data/maps/Route201/scripts.pory"
	lockall
# 269 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 270 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 271 "data/maps/Route201/scripts.pory"
	waitse
# 272 "data/maps/Route201/scripts.pory"
	waitmovement
# 273 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 274 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route201/scripts.pory"
	waitmessage
# 276 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 277 "data/maps/Route201/scripts.pory"
	waitmovement
# 278 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 279 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route201/scripts.pory"
	waitmessage
# 282 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_2
# 283 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Right_Movement_3
# 284 "data/maps/Route201/scripts.pory"
	waitmovementall
# 285 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Try_to_not_get_pokemon_trigger_down::
# 290 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 291 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 292 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
	return


Route201_Try_to_not_get_pokemon_trigger_right::
# 298 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 299 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 300 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 302 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
	return


RownsBag::
# 306 "data/maps/Route201/scripts.pory"
	lock
# 307 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data/maps/Route201/scripts.pory"
	removeobject Rowans_Bag_Route201
# 309 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 310 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 311 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 312 "data/maps/Route201/scripts.pory"
	waitstate
# 313 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 314 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_7
# 315 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 316 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 317 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RownsBag_2
# 323 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RownsBag_3
# 329 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RownsBag_4
RownsBag_1:
# 335 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 336 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_3, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route201/scripts.pory"
	waitmessage
# 349 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_0
# 350 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, RownsBag_Movement_1
# 351 "data/maps/Route201/scripts.pory"
	waitmovementall
# 352 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RownsBag_9
# 356 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RownsBag_10
RownsBag_8:
# 367 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_3
# 368 "data/maps/Route201/scripts.pory"
	waitmovement
# 369 "data/maps/Route201/scripts.pory"
	removeobject Rowan_Route_201
# 370 "data/maps/Route201/scripts.pory"
	removeobject LuDa_Route_201_again
# 371 "data/maps/Route201/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_2
# 372 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 373 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_6, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route201/scripts.pory"
	waitmessage
# 377 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 378 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_4
# 379 "data/maps/Route201/scripts.pory"
	waitmovementall
# 380 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 381 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_7, MSGBOX_YESNO
# 385 "data/maps/Route201/scripts.pory"
	waitmessage
RownsBag_14:
# 386 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne RownsBag_15
# 396 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 397 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_9
# 402 "data/maps/Route201/scripts.pory"
	waitmessage
# 403 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 404 "data/maps/Route201/scripts.pory"
	case 0, RownsBag_19
# 406 "data/maps/Route201/scripts.pory"
	case 1, RownsBag_20
# 408 "data/maps/Route201/scripts.pory"
	case 2, RownsBag_21
RownsBag_17:
# 411 "data/maps/Route201/scripts.pory"
	call RivalBattleOver
	return

RownsBag_2:
# 319 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 320 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_0, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_3:
# 325 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 326 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_1, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_4:
# 331 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 332 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_2, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_9:
	goto RownsBag_8

RownsBag_10:
# 358 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 359 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_4, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route201/scripts.pory"
	waitmessage
# 362 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_2
# 363 "data/maps/Route201/scripts.pory"
	waitmovement
# 364 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 365 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_5, MSGBOX_AUTOCLOSE
	goto RownsBag_8

RownsBag_15:
# 388 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 389 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_8, MSGBOX_YESNO
# 394 "data/maps/Route201/scripts.pory"
	waitmessage
	goto RownsBag_14

RownsBag_19:
# 405 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, RownsBag_Text_10
	goto RownsBag_17

RownsBag_20:
# 407 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, RownsBag_Text_10
	goto RownsBag_17

RownsBag_21:
# 409 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, RownsBag_Text_10
	goto RownsBag_17


RivalBattleOver::
# 417 "data/maps/Route201/scripts.pory"
	lockall
# 418 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 419 "data/maps/Route201/scripts.pory"
	msgbox RivalBattleOver_Text_0
# 424 "data/maps/Route201/scripts.pory"
	waitmessage
# 425 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 426 "data/maps/Route201/scripts.pory"
	warpcontinuescript MAP_PLAYER_HOUSE_F1, 2, 6, GoingHomeAfterBarryFight
	return


GoingHomeAfterBarryFight::
# 430 "data/maps/Route201/scripts.pory"
	setobjectxy Mom, 2, 4
# 431 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 432 "data/maps/Route201/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 433 "data/maps/Route201/scripts.pory"
	call after_starter
	return


BarryIntro::
# 437 "data/maps/Route201/scripts.pory"
	msgbox BarryIntro_Text_0
	return


Barry_Loss::
# 442 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_10
	return


# 29 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_0:
# 29 "data/maps/Route201/scripts.pory"
	walk_left
# 29 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 30 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_1:
# 30 "data/maps/Route201/scripts.pory"
	face_up
	step_end

# 42 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_2:
# 42 "data/maps/Route201/scripts.pory"
	walk_left
# 42 "data/maps/Route201/scripts.pory"
	walk_left
# 42 "data/maps/Route201/scripts.pory"
	walk_left
# 42 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 43 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_3:
# 43 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 48 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_4:
# 48 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 48 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 48 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 53 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_5:
# 53 "data/maps/Route201/scripts.pory"
	face_left
# 53 "data/maps/Route201/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_6:
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
# 61 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_7:
# 78 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 86 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_8:
# 86 "data/maps/Route201/scripts.pory"
	walk_left
# 86 "data/maps/Route201/scripts.pory"
	walk_left
# 86 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 102 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_9:
# 102 "data/maps/Route201/scripts.pory"
	walk_right
# 102 "data/maps/Route201/scripts.pory"
	walk_right
# 102 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_10:
# 185 "data/maps/Route201/scripts.pory"
	face_left
# 185 "data/maps/Route201/scripts.pory"
	delay_16
# 185 "data/maps/Route201/scripts.pory"
	face_right
# 185 "data/maps/Route201/scripts.pory"
	delay_16
	step_end

# 194 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_11:
# 194 "data/maps/Route201/scripts.pory"
	walk_right
# 194 "data/maps/Route201/scripts.pory"
	walk_right
# 194 "data/maps/Route201/scripts.pory"
	walk_right
# 194 "data/maps/Route201/scripts.pory"
	walk_right
# 194 "data/maps/Route201/scripts.pory"
	walk_right
# 194 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_12:
# 210 "data/maps/Route201/scripts.pory"
	face_down
# 210 "data/maps/Route201/scripts.pory"
	delay_16
	step_end

# 215 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_13:
# 215 "data/maps/Route201/scripts.pory"
	delay_16
# 215 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 225 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_14:
# 225 "data/maps/Route201/scripts.pory"
	emote_question_mark
	step_end

# 242 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_15:
# 242 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 247 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_16:
# 247 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 269 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_0:
# 269 "data/maps/Route201/scripts.pory"
	face_down
# 269 "data/maps/Route201/scripts.pory"
	emote_exclamation_mark
	step_end

# 276 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_1:
# 276 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 276 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 276 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 282 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_2:
# 282 "data/maps/Route201/scripts.pory"
	walk_up
# 282 "data/maps/Route201/scripts.pory"
	walk_up
# 282 "data/maps/Route201/scripts.pory"
	walk_right
# 282 "data/maps/Route201/scripts.pory"
	walk_right
# 282 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 283 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_3:
# 283 "data/maps/Route201/scripts.pory"
	walk_up
# 283 "data/maps/Route201/scripts.pory"
	walk_up
# 283 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_0:
# 290 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 294 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_1:
# 294 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_right_Movement_0:
# 302 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 349 "data/maps/Route201/scripts.pory"
RownsBag_Movement_0:
# 349 "data/maps/Route201/scripts.pory"
	walk_up
# 349 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 350 "data/maps/Route201/scripts.pory"
RownsBag_Movement_1:
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
# 350 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 362 "data/maps/Route201/scripts.pory"
RownsBag_Movement_2:
# 362 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 367 "data/maps/Route201/scripts.pory"
RownsBag_Movement_3:
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 378 "data/maps/Route201/scripts.pory"
RownsBag_Movement_4:
# 378 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 378 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 378 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 378 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 378 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

Route201_Barry_Text_0:
# 16 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "What?\n"
	.string "Don’t go into the grass, right?\l"
	.string "No worries! No problem!\p"
	.string "It doesn’t matter that we don’t have\n"
	.string "any Pokémon.\p"
	.string "Trust me on this one.\n"
	.string "I’ve got an idea!\p"
	.string "Now listen. You know how wild Pokémon\n"
	.string "jump out when you go into tall grass?$"

Route201_Barry_Text_1:
# 33 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_Barry_Text_2:
# 46 "data/maps/Route201/scripts.pory"
	.string "Ok, here goes!\p"
	.string "On your makes...$"

Route201_Barry_Text_3:
# 51 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!!!\n$"

Route201_Barry_Text_4:
# 64 "data/maps/Route201/scripts.pory"
	.string "You two don’t seem to have\n"
	.string "any Pokémon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!\n$"

Route201_Barry_Text_5:
# 70 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "...$"

Route201_Barry_Text_6:
# 73 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "...\l"
	.string "...$"

Route201_Barry_Text_7:
# 80 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "This old guy...\p"
	.string "It’s Prof. Rowan, isn’t it?\n"
	.string "What’s he doing here...?$"

Route201_Barry_Text_8:
# 89 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted Pokémon...\p"
	.string "Hmm...\n"
	.string "What to do...?\p"
	.string "Their world would surely change if\n"
	.string "they were to meet Pokémon...\p"
	.string "Is it right for me to put them on that\n"
	.string "path...?\p"
	.string "...\n"
	.string "...$"

Route201_Barry_Text_9:
# 105 "data/maps/Route201/scripts.pory"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_Barry_Text_10:
# 112 "data/maps/Route201/scripts.pory"
	.string "Whoa, hold up!\n"
	.string "You’re not making any sense here!$"

Route201_Barry_Text_11:
# 116 "data/maps/Route201/scripts.pory"
	.string "Er-hem!\p"
	.string "I didn’t quite catch that, so I will\n"
	.string "ask you again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_Barry_Text_12:
# 124 "data/maps/Route201/scripts.pory"
	.string "Me, too!\n"
	.string "I love Pokémon, too!\n$"

Route201_Barry_Text_13:
# 127 "data/maps/Route201/scripts.pory"
	.string "I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_Barry_Text_14:
# 131 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We’ll both answer a hundred times,\n"
	.string "we love Pokémon!$"

Route201_Barry_Text_15:
# 141 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_Barry_Text_16:
# 149 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "That joke's getting old!$"

Route201_Barry_Text_17:
# 153 "data/maps/Route201/scripts.pory"
	.string "...A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokémon.$"

Route201_Barry_Text_18:
# 163 "data/maps/Route201/scripts.pory"
	.string "...Uh...\n"
	.string "Well, I, uh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give\n"
	.string "a Pokémon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...$"

Route201_Barry_Text_19:
# 172 "data/maps/Route201/scripts.pory"
	.string "!\p"
	.string "How big of you...\p"
	.string "Very well, then!\n"
	.string "I will entrust you two with Pokémon!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourselves again.\p"
	.string "Now, then...\p"
	.string "Hm?\n"
	.string "Now, where...?$"

Route201_Barry_Text_20:
# 193 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan!$"

Route201_Barry_Text_21:
# 206 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_Barry_Text_22:
# 218 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Barry_Text_23:
# 220 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_24:
# 227 "data/maps/Route201/scripts.pory"
	.string "Wha...?$"

Route201_Barry_Text_25:
# 230 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are crucial.\n"
	.string "You’re giving them away?$"

Route201_Barry_Text_26:
# 233 "data/maps/Route201/scripts.pory"
	.string "Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Barry_Text_27:
# 245 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and\n"
	.string "choose a Pokémon!$"

Route201_Barry_Text_28:
# 250 "data/maps/Route201/scripts.pory"
	.string "Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can’t believe it! I’m so happy now\n"
	.string "that I can’t keep a straight face!$"

Route201_Barry_Text_29:
# 257 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I’m practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Barry_Trigger_Far_Right_Text_0:
# 274 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Barry_Trigger_Far_Right_Text_1:
# 279 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get mocing to Prof. Rowan's lab.$"

Route201_Try_to_not_get_pokemon_trigger_down_Text_0:
# 292 "data/maps/Route201/scripts.pory"
	.string "What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

RownsBag_Text_0:
# 320 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Chimchar!$"

RownsBag_Text_1:
# 326 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Piplup!$"

RownsBag_Text_2:
# 332 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Turtwig!$"

RownsBag_Text_3:
# 336 "data/maps/Route201/scripts.pory"
	.string "Very well! Both of you have\n"
	.string "chosen a good Pokémon, it seems.\p"
	.string "Now, listen well!\p"
	.string "The Pokémon you have been entrusted\n"
	.string "with are unfamiliar with the world.\p"
	.string "In that regard, they’re much\n"
	.string "like you.\p"
	.string "As fellow newcomers to the world,\n"
	.string "I hope you’ll do well together.\p"
	.string "If you have any trouble, come see me\n"
	.string "at my lab in Sandgem Town.\p"
	.string "And now, we’ll be on our way.$"

RownsBag_Text_4:
# 359 "data/maps/Route201/scripts.pory"
	.string "Professor!\n"
	.string "Wait for me!$"

RownsBag_Text_5:
# 365 "data/maps/Route201/scripts.pory"
	.string "Uh, sorry, folks.$"

RownsBag_Text_6:
# 373 "data/maps/Route201/scripts.pory"
	.string "How do you like that?\n"
	.string "Prof. Rowan’s really nice.\p"
	.string "On TV, he seems so stern and scary.$"

RownsBag_Text_7:
# 381 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}!\n"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_8:
# 389 "data/maps/Route201/scripts.pory"
	.string "What’s with that attitude?\n"
	.string "Don’t be that way!\p"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_9:
# 397 "data/maps/Route201/scripts.pory"
	.string "I’ve always wanted to\n"
	.string "say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

RownsBag_Text_10:
# 405 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?!$"

RivalBattleOver_Text_0:
# 419 "data/maps/Route201/scripts.pory"
	.string "Whew!\n"
	.string "Let’s go home.\p"
	.string "I’m beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

BarryIntro_Text_0:
# 437 "data/maps/Route201/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"
