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
# 235 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_12
Route201_Barry_10:
# 279 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_15
# 280 "data/maps/Route201/scripts.pory"
	waitmovement
# 281 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 282 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_33
# 284 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_16
# 285 "data/maps/Route201/scripts.pory"
	waitmovement
# 286 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 287 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_34, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route201/scripts.pory"
	waitmessage
# 292 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 293 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 294 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_35
# 298 "data/maps/Route201/scripts.pory"
	waitmessage
# 299 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 7
# 300 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 301 "data/maps/Route201/scripts.pory"
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
# 193 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 194 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_20
# 195 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 196 "data/maps/Route201/scripts.pory"
	waitmovement
# 197 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 198 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_21
# 199 "data/maps/Route201/scripts.pory"
	waitmessage
# 200 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 201 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 202 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 203 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 204 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 205 "data/maps/Route201/scripts.pory"
	waitmovement
# 206 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 207 "data/maps/Route201/scripts.pory"
	waitmovement
# 208 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 209 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_22
# 211 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 212 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_23
# 216 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 217 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 218 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 219 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_24
# 220 "data/maps/Route201/scripts.pory"
	waitmovement
# 221 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 222 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_25
# 224 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 225 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
	goto Route201_Barry_10

Route201_Barry_12:
# 238 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 239 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_27
# 240 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 241 "data/maps/Route201/scripts.pory"
	waitmovement
# 242 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 243 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_28
# 245 "data/maps/Route201/scripts.pory"
	waitmessage
# 246 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 247 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 248 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 249 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 250 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 251 "data/maps/Route201/scripts.pory"
	waitmovement
# 252 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 253 "data/maps/Route201/scripts.pory"
	waitmovement
# 254 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 255 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_29
# 256 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 257 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_30
# 261 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 262 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 263 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 264 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_31
# 265 "data/maps/Route201/scripts.pory"
	waitmovement
# 266 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 267 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_32
# 269 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 270 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
	goto Route201_Barry_10


Route201_Barry_Trigger_Far_Right::
# 305 "data/maps/Route201/scripts.pory"
	lockall
# 306 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 307 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 308 "data/maps/Route201/scripts.pory"
	waitse
# 309 "data/maps/Route201/scripts.pory"
	waitmovement
# 310 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 311 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route201/scripts.pory"
	waitmessage
# 313 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 314 "data/maps/Route201/scripts.pory"
	waitmovement
# 315 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 316 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route201/scripts.pory"
	waitmessage
# 319 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_2
# 320 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Right_Movement_3
# 321 "data/maps/Route201/scripts.pory"
	waitmovementall
# 322 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Middle::
# 328 "data/maps/Route201/scripts.pory"
	lockall
# 329 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 330 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 331 "data/maps/Route201/scripts.pory"
	waitse
# 332 "data/maps/Route201/scripts.pory"
	waitmovement
# 333 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 334 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 335 "data/maps/Route201/scripts.pory"
	waitmessage
# 336 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_0
# 337 "data/maps/Route201/scripts.pory"
	waitmovement
# 338 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 339 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route201/scripts.pory"
	waitmessage
# 342 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_1
# 343 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Middle_Movement_2
# 344 "data/maps/Route201/scripts.pory"
	waitmovementall
# 345 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Left::
# 350 "data/maps/Route201/scripts.pory"
	lockall
# 351 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 352 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 353 "data/maps/Route201/scripts.pory"
	waitse
# 354 "data/maps/Route201/scripts.pory"
	waitmovement
# 355 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 356 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route201/scripts.pory"
	waitmessage
# 358 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Left_Movement_0
# 359 "data/maps/Route201/scripts.pory"
	waitmovement
# 360 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 361 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route201/scripts.pory"
	waitmessage
# 364 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Left_Movement_1
# 365 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Left_Movement_2
# 366 "data/maps/Route201/scripts.pory"
	waitmovementall
# 367 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Far_Left::
# 372 "data/maps/Route201/scripts.pory"
	lockall
# 373 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 374 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 375 "data/maps/Route201/scripts.pory"
	waitse
# 376 "data/maps/Route201/scripts.pory"
	waitmovement
# 377 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 378 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route201/scripts.pory"
	waitmessage
# 380 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Left_Movement_0
# 381 "data/maps/Route201/scripts.pory"
	waitmovement
# 382 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 383 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route201/scripts.pory"
	waitmessage
# 386 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Left_Movement_1
# 387 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Left_Movement_2
# 388 "data/maps/Route201/scripts.pory"
	waitmovementall
# 389 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Try_to_not_get_pokemon_trigger_down::
# 394 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 395 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 396 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
	return


Route201_Try_to_not_get_pokemon_trigger_right::
# 402 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 403 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 404 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
	return


RownsBag::
# 410 "data/maps/Route201/scripts.pory"
	lock
# 411 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 412 "data/maps/Route201/scripts.pory"
	removeobject Rowans_Bag_Route201
# 413 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 414 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 415 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 416 "data/maps/Route201/scripts.pory"
	waitstate
# 417 "data/maps/Route201/scripts.pory"
	playbgm MUS_ROUTE101, 0
# 418 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_7
# 419 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 420 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 421 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RownsBag_2
# 427 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RownsBag_3
# 433 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RownsBag_4
RownsBag_1:
# 439 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 440 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_3, MSGBOX_AUTOCLOSE
# 452 "data/maps/Route201/scripts.pory"
	waitmessage
# 453 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_0
# 454 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, RownsBag_Movement_1
# 455 "data/maps/Route201/scripts.pory"
	waitmovementall
# 456 "data/maps/Route201/scripts.pory"
	checkplayergender
# 457 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RownsBag_9
# 469 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RownsBag_10
RownsBag_8:
# 480 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_3
# 481 "data/maps/Route201/scripts.pory"
	waitmovement
# 482 "data/maps/Route201/scripts.pory"
	removeobject Rowan_Route_201
# 483 "data/maps/Route201/scripts.pory"
	removeobject LuDa_Route_201_again
# 484 "data/maps/Route201/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_2
# 485 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 486 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_8, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route201/scripts.pory"
	waitmessage
# 490 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 491 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_4
# 492 "data/maps/Route201/scripts.pory"
	waitmovementall
# 493 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 494 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_9, MSGBOX_YESNO
# 498 "data/maps/Route201/scripts.pory"
	waitmessage
RownsBag_14:
# 499 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne RownsBag_15
# 509 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 510 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_11
# 515 "data/maps/Route201/scripts.pory"
	waitmessage
# 516 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 517 "data/maps/Route201/scripts.pory"
	case 0, RownsBag_19
# 519 "data/maps/Route201/scripts.pory"
	case 1, RownsBag_20
# 521 "data/maps/Route201/scripts.pory"
	case 2, RownsBag_21
RownsBag_17:
# 524 "data/maps/Route201/scripts.pory"
	call RivalBattleOver
	return

RownsBag_2:
# 423 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 424 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_0, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_3:
# 429 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 430 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_1, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_4:
# 435 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 436 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_2, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_9:
# 459 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 460 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_4, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route201/scripts.pory"
	waitmessage
# 463 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_2
# 464 "data/maps/Route201/scripts.pory"
	waitmovement
# 465 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 466 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_5, MSGBOX_AUTOCLOSE
	goto RownsBag_8

RownsBag_10:
# 471 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 472 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_6, MSGBOX_AUTOCLOSE
# 474 "data/maps/Route201/scripts.pory"
	waitmessage
# 475 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_2
# 476 "data/maps/Route201/scripts.pory"
	waitmovement
# 477 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 478 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_7, MSGBOX_AUTOCLOSE
	goto RownsBag_8

RownsBag_15:
# 501 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 502 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_10, MSGBOX_YESNO
# 507 "data/maps/Route201/scripts.pory"
	waitmessage
	goto RownsBag_14

RownsBag_19:
# 518 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, RownsBag_Text_12
	goto RownsBag_17

RownsBag_20:
# 520 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, RownsBag_Text_12
	goto RownsBag_17

RownsBag_21:
# 522 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, RownsBag_Text_12
	goto RownsBag_17


RivalBattleOver::
# 530 "data/maps/Route201/scripts.pory"
	lockall
# 531 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 532 "data/maps/Route201/scripts.pory"
	msgbox RivalBattleOver_Text_0
# 537 "data/maps/Route201/scripts.pory"
	waitmessage
# 538 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 539 "data/maps/Route201/scripts.pory"
	playse SE_EXIT
# 540 "data/maps/Route201/scripts.pory"
	waitse
# 541 "data/maps/Route201/scripts.pory"
	warpcontinuescript MAP_PLAYER_HOUSE_F1, 2, 6, GoingHomeAfterBarryFight
	return


GoingHomeAfterBarryFight::
# 545 "data/maps/Route201/scripts.pory"
	setobjectxy Mom, 2, 4
# 546 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 547 "data/maps/Route201/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 548 "data/maps/Route201/scripts.pory"
	call after_starter
	return


BarryIntro::
# 552 "data/maps/Route201/scripts.pory"
	msgbox BarryIntro_Text_0
	return


Barry_Loss::
# 557 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_12
	return


toSlowAgain_Far_Right::
# 561 "data/maps/Route201/scripts.pory"
	lockall
# 562 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 563 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 564 "data/maps/Route201/scripts.pory"
	waitse
# 565 "data/maps/Route201/scripts.pory"
	waitmovementall
# 566 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 567 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 568 "data/maps/Route201/scripts.pory"
	waitmessage
# 569 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 570 "data/maps/Route201/scripts.pory"
	waitmovement
# 571 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 572 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 574 "data/maps/Route201/scripts.pory"
	waitmessage
# 575 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 576 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 577 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Middle::
# 581 "data/maps/Route201/scripts.pory"
	lockall
# 582 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 583 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 584 "data/maps/Route201/scripts.pory"
	waitse
# 585 "data/maps/Route201/scripts.pory"
	waitmovementall
# 586 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 587 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 588 "data/maps/Route201/scripts.pory"
	waitmessage
# 589 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_0
# 590 "data/maps/Route201/scripts.pory"
	waitmovement
# 591 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 592 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 594 "data/maps/Route201/scripts.pory"
	waitmessage
# 595 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 596 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 597 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Left::
# 601 "data/maps/Route201/scripts.pory"
	lockall
# 602 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 603 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 604 "data/maps/Route201/scripts.pory"
	waitse
# 605 "data/maps/Route201/scripts.pory"
	waitmovementall
# 606 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 607 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 608 "data/maps/Route201/scripts.pory"
	waitmessage
# 609 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, toSlowAgain_Left_Movement_0
# 610 "data/maps/Route201/scripts.pory"
	waitmovement
# 611 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 612 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 614 "data/maps/Route201/scripts.pory"
	waitmessage
# 615 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 616 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 617 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Far_Left::
# 621 "data/maps/Route201/scripts.pory"
	lockall
# 622 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 623 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 624 "data/maps/Route201/scripts.pory"
	waitse
# 625 "data/maps/Route201/scripts.pory"
	waitmovementall
# 626 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 627 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 628 "data/maps/Route201/scripts.pory"
	waitmessage
# 629 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, toSlowAgain_Far_Left_Movement_0
# 630 "data/maps/Route201/scripts.pory"
	waitmovement
# 631 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 632 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 634 "data/maps/Route201/scripts.pory"
	waitmessage
# 635 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 636 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 637 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_talk_barry::
# 658 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 659 "data/maps/Route201/scripts.pory"
	msgbox route201_talk_barry_Text_0, MSGBOX_AUTOCLOSE
	return


route201_barry_not_that_way_down::
# 667 "data/maps/Route201/scripts.pory"
	lockall
# 668 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 669 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 670 "data/maps/Route201/scripts.pory"
	msgbox route201_barry_not_that_way_text, MSGBOX_NPC
# 671 "data/maps/Route201/scripts.pory"
	waitmessage
# 672 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
# 673 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
# 674 "data/maps/Route201/scripts.pory"
	waitmovementall
# 675 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_barry_not_that_way_right::
# 679 "data/maps/Route201/scripts.pory"
	lockall
# 680 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_3
# 681 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 682 "data/maps/Route201/scripts.pory"
	msgbox route201_barry_not_that_way_text, MSGBOX_NPC
# 683 "data/maps/Route201/scripts.pory"
	waitmessage
# 684 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
# 685 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
# 686 "data/maps/Route201/scripts.pory"
	waitmovementall
# 687 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_sign_one::
# 698 "data/maps/Route201/scripts.pory"
	lock
# 699 "data/maps/Route201/scripts.pory"
	msgbox route201_sign_one_Text_0, MSGBOX_SIGN
# 701 "data/maps/Route201/scripts.pory"
	release
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

# 195 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_11:
# 195 "data/maps/Route201/scripts.pory"
	walk_right
# 195 "data/maps/Route201/scripts.pory"
	walk_right
# 195 "data/maps/Route201/scripts.pory"
	walk_right
# 195 "data/maps/Route201/scripts.pory"
	walk_right
# 195 "data/maps/Route201/scripts.pory"
	walk_right
# 195 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 201 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_12:
# 201 "data/maps/Route201/scripts.pory"
	face_down
# 201 "data/maps/Route201/scripts.pory"
	delay_16
	step_end

# 206 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_13:
# 206 "data/maps/Route201/scripts.pory"
	delay_16
# 206 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 217 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_14:
# 217 "data/maps/Route201/scripts.pory"
	emote_question_mark
	step_end

# 279 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_15:
# 279 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 284 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_16:
# 284 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 306 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_0:
# 306 "data/maps/Route201/scripts.pory"
	face_down
# 306 "data/maps/Route201/scripts.pory"
	emote_exclamation_mark
	step_end

# 313 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_1:
# 313 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 313 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 313 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 319 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_2:
# 319 "data/maps/Route201/scripts.pory"
	walk_up
# 319 "data/maps/Route201/scripts.pory"
	walk_up
# 319 "data/maps/Route201/scripts.pory"
	walk_right
# 319 "data/maps/Route201/scripts.pory"
	walk_right
# 319 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 320 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_3:
# 320 "data/maps/Route201/scripts.pory"
	walk_up
# 320 "data/maps/Route201/scripts.pory"
	walk_up
# 320 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_0:
# 336 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 342 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_1:
# 342 "data/maps/Route201/scripts.pory"
	walk_up
# 342 "data/maps/Route201/scripts.pory"
	walk_up
# 342 "data/maps/Route201/scripts.pory"
	walk_right
# 342 "data/maps/Route201/scripts.pory"
	walk_right
# 342 "data/maps/Route201/scripts.pory"
	walk_right
# 342 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 343 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_2:
# 343 "data/maps/Route201/scripts.pory"
	walk_up
# 343 "data/maps/Route201/scripts.pory"
	walk_up
# 343 "data/maps/Route201/scripts.pory"
	walk_right
# 343 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 358 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_0:
# 358 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 358 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 364 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_1:
# 364 "data/maps/Route201/scripts.pory"
	walk_up
# 364 "data/maps/Route201/scripts.pory"
	walk_up
# 364 "data/maps/Route201/scripts.pory"
	walk_right
# 364 "data/maps/Route201/scripts.pory"
	walk_right
# 364 "data/maps/Route201/scripts.pory"
	walk_right
# 364 "data/maps/Route201/scripts.pory"
	walk_right
# 364 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 365 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_2:
# 365 "data/maps/Route201/scripts.pory"
	walk_up
# 365 "data/maps/Route201/scripts.pory"
	walk_up
# 365 "data/maps/Route201/scripts.pory"
	walk_right
# 365 "data/maps/Route201/scripts.pory"
	walk_right
# 365 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 380 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_0:
# 380 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 380 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 380 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 386 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_1:
# 386 "data/maps/Route201/scripts.pory"
	walk_up
# 386 "data/maps/Route201/scripts.pory"
	walk_up
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	walk_right
# 386 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 387 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_2:
# 387 "data/maps/Route201/scripts.pory"
	walk_up
# 387 "data/maps/Route201/scripts.pory"
	walk_up
# 387 "data/maps/Route201/scripts.pory"
	walk_right
# 387 "data/maps/Route201/scripts.pory"
	walk_right
# 387 "data/maps/Route201/scripts.pory"
	walk_right
# 387 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 394 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_0:
# 394 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 398 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_1:
# 398 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 406 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_right_Movement_0:
# 406 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 453 "data/maps/Route201/scripts.pory"
RownsBag_Movement_0:
# 453 "data/maps/Route201/scripts.pory"
	walk_up
# 453 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 454 "data/maps/Route201/scripts.pory"
RownsBag_Movement_1:
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
# 454 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 463 "data/maps/Route201/scripts.pory"
RownsBag_Movement_2:
# 463 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 480 "data/maps/Route201/scripts.pory"
RownsBag_Movement_3:
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
# 480 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 491 "data/maps/Route201/scripts.pory"
RownsBag_Movement_4:
# 491 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 491 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 491 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 491 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 491 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 609 "data/maps/Route201/scripts.pory"
toSlowAgain_Left_Movement_0:
# 609 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 609 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 609 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 629 "data/maps/Route201/scripts.pory"
toSlowAgain_Far_Left_Movement_0:
# 629 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 629 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 629 "data/maps/Route201/scripts.pory"
	face_down
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
	.string "On your maarks...$"

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
# 194 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan.$"

Route201_Barry_Text_21:
# 198 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase at the lake!\p$"

Route201_Barry_Text_22:
# 209 "data/maps/Route201/scripts.pory"
	.string "Oh?\n"
	.string "Is something wrong here?$"

Route201_Barry_Text_23:
# 212 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Dawn, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_24:
# 219 "data/maps/Route201/scripts.pory"
	.string "Pardon?!$"

Route201_Barry_Text_25:
# 222 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are hard to replace.\n"
	.string "Are you sure about giving them away?$"

Route201_Barry_Text_26:
# 225 "data/maps/Route201/scripts.pory"
	.string "Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Barry_Text_27:
# 239 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan!$"

Route201_Barry_Text_28:
# 243 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_Barry_Text_29:
# 255 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Barry_Text_30:
# 257 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_31:
# 264 "data/maps/Route201/scripts.pory"
	.string "Wha...?$"

Route201_Barry_Text_32:
# 267 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are crucial.\n"
	.string "You’re giving them away?$"

Route201_Barry_Text_33:
# 282 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and\n"
	.string "choose a Pokémon!$"

Route201_Barry_Text_34:
# 287 "data/maps/Route201/scripts.pory"
	.string "Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can’t believe it! I’m so happy now\n"
	.string "that I can’t keep a straight face!$"

Route201_Barry_Text_35:
# 294 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I’m practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Barry_Trigger_Far_Right_Text_0:
# 311 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Barry_Trigger_Far_Right_Text_1:
# 316 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get mocing to Prof. Rowan's lab.$"

Route201_Try_to_not_get_pokemon_trigger_down_Text_0:
# 396 "data/maps/Route201/scripts.pory"
	.string "What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

RownsBag_Text_0:
# 424 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Chimchar!$"

RownsBag_Text_1:
# 430 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Piplup!$"

RownsBag_Text_2:
# 436 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Turtwig!$"

RownsBag_Text_3:
# 440 "data/maps/Route201/scripts.pory"
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
# 460 "data/maps/Route201/scripts.pory"
	.string "Professor!\n"
	.string "Wait for me, please!$"

RownsBag_Text_5:
# 466 "data/maps/Route201/scripts.pory"
	.string "I’m sorry...\n"
	.string "Please let me pass.$"

RownsBag_Text_6:
# 472 "data/maps/Route201/scripts.pory"
	.string "Professor!\n"
	.string "Wait for me!$"

RownsBag_Text_7:
# 478 "data/maps/Route201/scripts.pory"
	.string "Uh, sorry, folks.$"

RownsBag_Text_8:
# 486 "data/maps/Route201/scripts.pory"
	.string "How do you like that?\n"
	.string "Prof. Rowan’s really nice.\p"
	.string "On TV, he seems so stern and scary.$"

RownsBag_Text_9:
# 494 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}!\n"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_10:
# 502 "data/maps/Route201/scripts.pory"
	.string "What’s with that attitude?\n"
	.string "Don’t be that way!\p"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_11:
# 510 "data/maps/Route201/scripts.pory"
	.string "I’ve always wanted to\n"
	.string "say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

RownsBag_Text_12:
# 518 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?!$"

RivalBattleOver_Text_0:
# 532 "data/maps/Route201/scripts.pory"
	.string "Whew!\n"
	.string "Let’s go home.\p"
	.string "I’m beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

BarryIntro_Text_0:
# 552 "data/maps/Route201/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

toSlowAgain_Far_Right_Text_0:
# 572 "data/maps/Route201/scripts.pory"
	.string "Me and you together,\n"
	.string "we’ve got nothing to fear!$"

route201_talk_barry_Text_0:
# 659 "data/maps/Route201/scripts.pory"
	.string "Pokeémon all have\n"
	.string "different moves, huh?\p"
	.string "A Trainer makes his Pokémon battle\n"
	.string "by ordering them to use moves.\p"
	.string "That's so awesomely cool.$"

route201_sign_one_Text_0:
# 699 "data/maps/Route201/scripts.pory"
	.string "Rt. 201\n"
	.string "Twinleaf Town {DOWN_ARROW}$"

barryToSlowText::
# 640 "data/maps/Route201/scripts.pory"
	.string "Too slow!\n"
	.string "{PLAYER}, I’m sick of waiting!\p"
	.string "I’m going to go see Prof. Rowan, so I\n"
	.string "can thank him properly.\p"
	.string "So, I had this great idea.\n"
	.string "Listen up, OK?\p"
	.string "You know that lake where we always\n"
	.string "play at?\p"
	.string "You know how they say a legendary\n"
	.string "Pokémon lives there?\p"
	.string "You guessed it!\n"
	.string "Let’s catch that Pokémon.\p"
	.string "That’ll make Prof. Rowan happy.\n"
	.string "I’m sure of that!$"

route201_barry_not_that_way_text::
# 690 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}.\n"
	.string "The lake’s not that way!$"
