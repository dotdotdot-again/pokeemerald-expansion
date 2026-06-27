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
	playbgm MUS_DP_ROWAN, 0
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
	addobject LuDa_Route_201_again
# 188 "data/maps/Route201/scripts.pory"
	checkplayergender
# 189 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_Barry_11
# 236 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_12
Route201_Barry_10:
# 281 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_15
# 282 "data/maps/Route201/scripts.pory"
	waitmovement
# 283 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 284 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_33
# 286 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_16
# 287 "data/maps/Route201/scripts.pory"
	waitmovement
# 288 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 289 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_34, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route201/scripts.pory"
	waitmessage
# 294 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 295 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 296 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_35
# 300 "data/maps/Route201/scripts.pory"
	waitmessage
# 301 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 7
# 302 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 303 "data/maps/Route201/scripts.pory"
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
	playbgm MUS_DP_DAWN, 0
# 194 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 195 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_20
# 196 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 197 "data/maps/Route201/scripts.pory"
	waitmovement
# 198 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 199 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_21
# 200 "data/maps/Route201/scripts.pory"
	waitmessage
# 201 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 202 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 203 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 204 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 205 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 206 "data/maps/Route201/scripts.pory"
	waitmovement
# 207 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 208 "data/maps/Route201/scripts.pory"
	waitmovement
# 209 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 210 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_22
# 212 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 213 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_23
# 217 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 218 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 219 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_24
# 221 "data/maps/Route201/scripts.pory"
	waitmovement
# 222 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 223 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_25
# 225 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 226 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
	goto Route201_Barry_10

Route201_Barry_12:
# 239 "data/maps/Route201/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
# 240 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 241 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_27
# 242 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 243 "data/maps/Route201/scripts.pory"
	waitmovement
# 244 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 245 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_28
# 247 "data/maps/Route201/scripts.pory"
	waitmessage
# 248 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 249 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 250 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 251 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 252 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 253 "data/maps/Route201/scripts.pory"
	waitmovement
# 254 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 255 "data/maps/Route201/scripts.pory"
	waitmovement
# 256 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 257 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_29
# 258 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 259 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_30
# 263 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 264 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 265 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 266 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_31
# 267 "data/maps/Route201/scripts.pory"
	waitmovement
# 268 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 269 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_32
# 271 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 272 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
	goto Route201_Barry_10


Route201_Barry_Trigger_Far_Right::
# 307 "data/maps/Route201/scripts.pory"
	lockall
# 308 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 309 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 310 "data/maps/Route201/scripts.pory"
	waitse
# 311 "data/maps/Route201/scripts.pory"
	waitmovement
# 312 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 313 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route201/scripts.pory"
	waitmessage
# 315 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 316 "data/maps/Route201/scripts.pory"
	waitmovement
# 317 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 318 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route201/scripts.pory"
	waitmessage
# 321 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_2
# 322 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Right_Movement_3
# 323 "data/maps/Route201/scripts.pory"
	waitmovementall
# 324 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Middle::
# 330 "data/maps/Route201/scripts.pory"
	lockall
# 331 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 332 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 333 "data/maps/Route201/scripts.pory"
	waitse
# 334 "data/maps/Route201/scripts.pory"
	waitmovement
# 335 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 336 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route201/scripts.pory"
	waitmessage
# 338 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_0
# 339 "data/maps/Route201/scripts.pory"
	waitmovement
# 340 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 341 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route201/scripts.pory"
	waitmessage
# 344 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_1
# 345 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Middle_Movement_2
# 346 "data/maps/Route201/scripts.pory"
	waitmovementall
# 347 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Left::
# 352 "data/maps/Route201/scripts.pory"
	lockall
# 353 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 354 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 355 "data/maps/Route201/scripts.pory"
	waitse
# 356 "data/maps/Route201/scripts.pory"
	waitmovement
# 357 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 358 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route201/scripts.pory"
	waitmessage
# 360 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Left_Movement_0
# 361 "data/maps/Route201/scripts.pory"
	waitmovement
# 362 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 363 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route201/scripts.pory"
	waitmessage
# 366 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Left_Movement_1
# 367 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Left_Movement_2
# 368 "data/maps/Route201/scripts.pory"
	waitmovementall
# 369 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Barry_Trigger_Far_Left::
# 374 "data/maps/Route201/scripts.pory"
	lockall
# 375 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 376 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 377 "data/maps/Route201/scripts.pory"
	waitse
# 378 "data/maps/Route201/scripts.pory"
	waitmovement
# 379 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 380 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route201/scripts.pory"
	waitmessage
# 382 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Left_Movement_0
# 383 "data/maps/Route201/scripts.pory"
	waitmovement
# 384 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 385 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 387 "data/maps/Route201/scripts.pory"
	waitmessage
# 388 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Left_Movement_1
# 389 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Left_Movement_2
# 390 "data/maps/Route201/scripts.pory"
	waitmovementall
# 391 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Try_to_not_get_pokemon_trigger_down::
# 396 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 397 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 398 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
	return


Route201_Try_to_not_get_pokemon_trigger_right::
# 404 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 405 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 406 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
	return


RownsBag::
# 412 "data/maps/Route201/scripts.pory"
	lock
# 413 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 414 "data/maps/Route201/scripts.pory"
	removeobject Rowans_Bag_Route201
# 415 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 416 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 417 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 418 "data/maps/Route201/scripts.pory"
	waitstate
# 419 "data/maps/Route201/scripts.pory"
	playbgm MUS_DP_ROUTE201_DAY, 0
# 420 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_7
# 421 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 422 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 423 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RownsBag_2
# 429 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RownsBag_3
# 435 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RownsBag_4
RownsBag_1:
# 441 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 442 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_3, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route201/scripts.pory"
	waitmessage
# 455 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_0
# 456 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, RownsBag_Movement_1
# 457 "data/maps/Route201/scripts.pory"
	waitmovementall
# 458 "data/maps/Route201/scripts.pory"
	checkplayergender
# 459 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RownsBag_9
# 471 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RownsBag_10
RownsBag_8:
# 482 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_3
# 483 "data/maps/Route201/scripts.pory"
	waitmovement
# 484 "data/maps/Route201/scripts.pory"
	removeobject Rowan_Route_201
# 485 "data/maps/Route201/scripts.pory"
	removeobject LuDa_Route_201_again
# 486 "data/maps/Route201/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_2
# 487 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 488 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_8, MSGBOX_AUTOCLOSE
# 491 "data/maps/Route201/scripts.pory"
	waitmessage
# 492 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 493 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, RownsBag_Movement_4
# 494 "data/maps/Route201/scripts.pory"
	waitmovementall
# 495 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 496 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_9, MSGBOX_YESNO
# 500 "data/maps/Route201/scripts.pory"
	waitmessage
RownsBag_14:
# 501 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne RownsBag_15
# 511 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 512 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_11
# 517 "data/maps/Route201/scripts.pory"
	waitmessage
# 518 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 519 "data/maps/Route201/scripts.pory"
	case 0, RownsBag_19
# 521 "data/maps/Route201/scripts.pory"
	case 1, RownsBag_20
# 523 "data/maps/Route201/scripts.pory"
	case 2, RownsBag_21
RownsBag_17:
# 526 "data/maps/Route201/scripts.pory"
	call RivalBattleOver
	return

RownsBag_2:
# 425 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 426 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_0, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_3:
# 431 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 432 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_1, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_4:
# 437 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 438 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_2, MSGBOX_AUTOCLOSE
	goto RownsBag_1

RownsBag_9:
# 461 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 462 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_4, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route201/scripts.pory"
	waitmessage
# 465 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_2
# 466 "data/maps/Route201/scripts.pory"
	waitmovement
# 467 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 468 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_5, MSGBOX_AUTOCLOSE
	goto RownsBag_8

RownsBag_10:
# 473 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 474 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_6, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route201/scripts.pory"
	waitmessage
# 477 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, RownsBag_Movement_2
# 478 "data/maps/Route201/scripts.pory"
	waitmovement
# 479 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 480 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_7, MSGBOX_AUTOCLOSE
	goto RownsBag_8

RownsBag_15:
# 503 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 504 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_10, MSGBOX_YESNO
# 509 "data/maps/Route201/scripts.pory"
	waitmessage
	goto RownsBag_14

RownsBag_19:
# 520 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, RownsBag_Text_12
	goto RownsBag_17

RownsBag_20:
# 522 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, RownsBag_Text_12
	goto RownsBag_17

RownsBag_21:
# 524 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, RownsBag_Text_12
	goto RownsBag_17


RivalBattleOver::
# 532 "data/maps/Route201/scripts.pory"
	lockall
# 533 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 534 "data/maps/Route201/scripts.pory"
	msgbox RivalBattleOver_Text_0
# 539 "data/maps/Route201/scripts.pory"
	waitmessage
# 540 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 541 "data/maps/Route201/scripts.pory"
	playse SE_EXIT
# 542 "data/maps/Route201/scripts.pory"
	waitse
# 543 "data/maps/Route201/scripts.pory"
	warpcontinuescript MAP_PLAYER_HOUSE_F1, 2, 6, GoingHomeAfterBarryFight
	return


GoingHomeAfterBarryFight::
# 547 "data/maps/Route201/scripts.pory"
	setobjectxy Mom, 2, 4
# 548 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 549 "data/maps/Route201/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 550 "data/maps/Route201/scripts.pory"
	call after_starter
	return


BarryIntro::
# 554 "data/maps/Route201/scripts.pory"
	msgbox BarryIntro_Text_0
	return


Barry_Loss::
# 559 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_12
	return


toSlowAgain_Far_Right::
# 563 "data/maps/Route201/scripts.pory"
	lockall
# 564 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 565 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 566 "data/maps/Route201/scripts.pory"
	waitse
# 567 "data/maps/Route201/scripts.pory"
	waitmovementall
# 568 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 569 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route201/scripts.pory"
	waitmessage
# 571 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 572 "data/maps/Route201/scripts.pory"
	waitmovement
# 573 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 574 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 576 "data/maps/Route201/scripts.pory"
	waitmessage
# 577 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 578 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 579 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Middle::
# 583 "data/maps/Route201/scripts.pory"
	lockall
# 584 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 585 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 586 "data/maps/Route201/scripts.pory"
	waitse
# 587 "data/maps/Route201/scripts.pory"
	waitmovementall
# 588 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 589 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 590 "data/maps/Route201/scripts.pory"
	waitmessage
# 591 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Middle_Movement_0
# 592 "data/maps/Route201/scripts.pory"
	waitmovement
# 593 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 594 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 596 "data/maps/Route201/scripts.pory"
	waitmessage
# 597 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 598 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 599 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Left::
# 603 "data/maps/Route201/scripts.pory"
	lockall
# 604 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 605 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 606 "data/maps/Route201/scripts.pory"
	waitse
# 607 "data/maps/Route201/scripts.pory"
	waitmovementall
# 608 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 609 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 610 "data/maps/Route201/scripts.pory"
	waitmessage
# 611 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, toSlowAgain_Left_Movement_0
# 612 "data/maps/Route201/scripts.pory"
	waitmovement
# 613 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 614 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 616 "data/maps/Route201/scripts.pory"
	waitmessage
# 617 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 618 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 619 "data/maps/Route201/scripts.pory"
	releaseall
	return


toSlowAgain_Far_Left::
# 623 "data/maps/Route201/scripts.pory"
	lockall
# 624 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 625 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 626 "data/maps/Route201/scripts.pory"
	waitse
# 627 "data/maps/Route201/scripts.pory"
	waitmovementall
# 628 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 629 "data/maps/Route201/scripts.pory"
	msgbox barryToSlowText, MSGBOX_AUTOCLOSE
# 630 "data/maps/Route201/scripts.pory"
	waitmessage
# 631 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, toSlowAgain_Far_Left_Movement_0
# 632 "data/maps/Route201/scripts.pory"
	waitmovement
# 633 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 634 "data/maps/Route201/scripts.pory"
	msgbox toSlowAgain_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 636 "data/maps/Route201/scripts.pory"
	waitmessage
# 637 "data/maps/Route201/scripts.pory"
	setfollowernpc Barry_201, 0
# 638 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 639 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_talk_barry::
# 660 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 661 "data/maps/Route201/scripts.pory"
	msgbox route201_talk_barry_Text_0, MSGBOX_AUTOCLOSE
	return


route201_barry_not_that_way_down::
# 669 "data/maps/Route201/scripts.pory"
	lockall
# 670 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 671 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 672 "data/maps/Route201/scripts.pory"
	msgbox route201_barry_not_that_way_text, MSGBOX_NPC
# 673 "data/maps/Route201/scripts.pory"
	waitmessage
# 674 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
# 675 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
# 676 "data/maps/Route201/scripts.pory"
	waitmovementall
# 677 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_barry_not_that_way_right::
# 681 "data/maps/Route201/scripts.pory"
	lockall
# 682 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_3
# 683 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 684 "data/maps/Route201/scripts.pory"
	msgbox route201_barry_not_that_way_text, MSGBOX_NPC
# 685 "data/maps/Route201/scripts.pory"
	waitmessage
# 686 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
# 687 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
# 688 "data/maps/Route201/scripts.pory"
	waitmovementall
# 689 "data/maps/Route201/scripts.pory"
	releaseall
	return


route201_sign_one::
# 700 "data/maps/Route201/scripts.pory"
	lock
# 701 "data/maps/Route201/scripts.pory"
	msgbox route201_sign_one_Text_0, MSGBOX_SIGN
# 703 "data/maps/Route201/scripts.pory"
	release
	return


route201_sign_two::
# 707 "data/maps/Route201/scripts.pory"
	lock
# 708 "data/maps/Route201/scripts.pory"
	msgbox route201_sign_two_Text_0, MSGBOX_SIGN
# 710 "data/maps/Route201/scripts.pory"
	release
	return


route201_this_ledge::
# 714 "data/maps/Route201/scripts.pory"
	lock
# 715 "data/maps/Route201/scripts.pory"
	msgbox route201_this_ledge_Text_0, MSGBOX_NPC
# 717 "data/maps/Route201/scripts.pory"
	release
	return


Route201_Text_WildPokemonLurkInTallGrass::
# 721 "data/maps/Route201/scripts.pory"
	lock
# 722 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_WildPokemonLurkInTallGrass_Text_0, MSGBOX_NPC
# 728 "data/maps/Route201/scripts.pory"
	release
	return


Route201_Text_HereAPotionAsAFreeSample::
# 732 "data/maps/Route201/scripts.pory"
	lock
# 733 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, Route201_Text_HereAPotionAsAFreeSample_2
# 750 "data/maps/Route201/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, Route201_Text_HereAPotionAsAFreeSample_3
# 756 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_HereAPotionAsAFreeSample_Text_2, MSGBOX_NPC
Route201_Text_HereAPotionAsAFreeSample_1:
# 759 "data/maps/Route201/scripts.pory"
	release
	return

Route201_Text_HereAPotionAsAFreeSample_2:
# 735 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_HereAPotionAsAFreeSample_Text_0, MSGBOX_NPC
# 747 "data/maps/Route201/scripts.pory"
	giveitem ITEM_POTION
# 748 "data/maps/Route201/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
	goto Route201_Text_HereAPotionAsAFreeSample_1

Route201_Text_HereAPotionAsAFreeSample_3:
# 752 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_HereAPotionAsAFreeSample_Text_1, MSGBOX_NPC
	goto Route201_Text_HereAPotionAsAFreeSample_1


Route201_Text_IfYourPokemonsHPIsLowGoHome::
# 763 "data/maps/Route201/scripts.pory"
	lock
# 764 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_IfYourPokemonsHPIsLowGoHome_Text_0, MSGBOX_NPC
# 767 "data/maps/Route201/scripts.pory"
	release
	return


Route201_Text_TrainerTipsTalkToAnyone::
# 771 "data/maps/Route201/scripts.pory"
	lock
# 772 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_TrainerTipsTalkToAnyone_Text_0, MSGBOX_NPC
# 777 "data/maps/Route201/scripts.pory"
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

# 196 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_11:
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 202 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_12:
# 202 "data/maps/Route201/scripts.pory"
	face_down
# 202 "data/maps/Route201/scripts.pory"
	delay_16
	step_end

# 207 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_13:
# 207 "data/maps/Route201/scripts.pory"
	delay_16
# 207 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 218 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_14:
# 218 "data/maps/Route201/scripts.pory"
	emote_question_mark
	step_end

# 281 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_15:
# 281 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 286 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_16:
# 286 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 308 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_0:
# 308 "data/maps/Route201/scripts.pory"
	face_down
# 308 "data/maps/Route201/scripts.pory"
	emote_exclamation_mark
	step_end

# 315 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_1:
# 315 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 315 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 321 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_2:
# 321 "data/maps/Route201/scripts.pory"
	walk_up
# 321 "data/maps/Route201/scripts.pory"
	walk_up
# 321 "data/maps/Route201/scripts.pory"
	walk_right
# 321 "data/maps/Route201/scripts.pory"
	walk_right
# 321 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 322 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_3:
# 322 "data/maps/Route201/scripts.pory"
	walk_up
# 322 "data/maps/Route201/scripts.pory"
	walk_up
# 322 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 338 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_0:
# 338 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 344 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_1:
# 344 "data/maps/Route201/scripts.pory"
	walk_up
# 344 "data/maps/Route201/scripts.pory"
	walk_up
# 344 "data/maps/Route201/scripts.pory"
	walk_right
# 344 "data/maps/Route201/scripts.pory"
	walk_right
# 344 "data/maps/Route201/scripts.pory"
	walk_right
# 344 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 345 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Middle_Movement_2:
# 345 "data/maps/Route201/scripts.pory"
	walk_up
# 345 "data/maps/Route201/scripts.pory"
	walk_up
# 345 "data/maps/Route201/scripts.pory"
	walk_right
# 345 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_0:
# 360 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 360 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 366 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_1:
# 366 "data/maps/Route201/scripts.pory"
	walk_up
# 366 "data/maps/Route201/scripts.pory"
	walk_up
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	walk_right
# 366 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 367 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Left_Movement_2:
# 367 "data/maps/Route201/scripts.pory"
	walk_up
# 367 "data/maps/Route201/scripts.pory"
	walk_up
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
# 367 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 382 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_0:
# 382 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 388 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_1:
# 388 "data/maps/Route201/scripts.pory"
	walk_up
# 388 "data/maps/Route201/scripts.pory"
	walk_up
# 388 "data/maps/Route201/scripts.pory"
	walk_right
# 388 "data/maps/Route201/scripts.pory"
	walk_right
# 388 "data/maps/Route201/scripts.pory"
	walk_right
# 388 "data/maps/Route201/scripts.pory"
	walk_right
# 388 "data/maps/Route201/scripts.pory"
	walk_right
# 388 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 389 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Left_Movement_2:
# 389 "data/maps/Route201/scripts.pory"
	walk_up
# 389 "data/maps/Route201/scripts.pory"
	walk_up
# 389 "data/maps/Route201/scripts.pory"
	walk_right
# 389 "data/maps/Route201/scripts.pory"
	walk_right
# 389 "data/maps/Route201/scripts.pory"
	walk_right
# 389 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_0:
# 396 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 400 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_1:
# 400 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_right_Movement_0:
# 408 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 455 "data/maps/Route201/scripts.pory"
RownsBag_Movement_0:
# 455 "data/maps/Route201/scripts.pory"
	walk_up
# 455 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 456 "data/maps/Route201/scripts.pory"
RownsBag_Movement_1:
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
# 456 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 465 "data/maps/Route201/scripts.pory"
RownsBag_Movement_2:
# 465 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 482 "data/maps/Route201/scripts.pory"
RownsBag_Movement_3:
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
# 482 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 493 "data/maps/Route201/scripts.pory"
RownsBag_Movement_4:
# 493 "data/maps/Route201/scripts.pory"
	walk_in_place_down
# 493 "data/maps/Route201/scripts.pory"
	walk_in_place_fast_down
# 493 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 493 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 493 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 611 "data/maps/Route201/scripts.pory"
toSlowAgain_Left_Movement_0:
# 611 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 611 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 611 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 631 "data/maps/Route201/scripts.pory"
toSlowAgain_Far_Left_Movement_0:
# 631 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 631 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 631 "data/maps/Route201/scripts.pory"
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
# 195 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan.$"

Route201_Barry_Text_21:
# 199 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase at the lake!\p$"

Route201_Barry_Text_22:
# 210 "data/maps/Route201/scripts.pory"
	.string "Oh?\n"
	.string "Is something wrong here?$"

Route201_Barry_Text_23:
# 213 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Dawn, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_24:
# 220 "data/maps/Route201/scripts.pory"
	.string "Pardon?!$"

Route201_Barry_Text_25:
# 223 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are hard to replace.\n"
	.string "Are you sure about giving them away?$"

Route201_Barry_Text_26:
# 226 "data/maps/Route201/scripts.pory"
	.string "Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Barry_Text_27:
# 241 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan!$"

Route201_Barry_Text_28:
# 245 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_Barry_Text_29:
# 257 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Barry_Text_30:
# 259 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_31:
# 266 "data/maps/Route201/scripts.pory"
	.string "Wha...?$"

Route201_Barry_Text_32:
# 269 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are crucial.\n"
	.string "You’re giving them away?$"

Route201_Barry_Text_33:
# 284 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and\n"
	.string "choose a Pokémon!$"

Route201_Barry_Text_34:
# 289 "data/maps/Route201/scripts.pory"
	.string "Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can’t believe it! I’m so happy now\n"
	.string "that I can’t keep a straight face!$"

Route201_Barry_Text_35:
# 296 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I’m practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Barry_Trigger_Far_Right_Text_0:
# 313 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Barry_Trigger_Far_Right_Text_1:
# 318 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get mocing to Prof. Rowan's lab.$"

Route201_Try_to_not_get_pokemon_trigger_down_Text_0:
# 398 "data/maps/Route201/scripts.pory"
	.string "What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

RownsBag_Text_0:
# 426 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Chimchar!$"

RownsBag_Text_1:
# 432 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Piplup!$"

RownsBag_Text_2:
# 438 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this Turtwig!$"

RownsBag_Text_3:
# 442 "data/maps/Route201/scripts.pory"
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
# 462 "data/maps/Route201/scripts.pory"
	.string "Professor!\n"
	.string "Wait for me, please!$"

RownsBag_Text_5:
# 468 "data/maps/Route201/scripts.pory"
	.string "I’m sorry...\n"
	.string "Please let me pass.$"

RownsBag_Text_6:
# 474 "data/maps/Route201/scripts.pory"
	.string "Professor!\n"
	.string "Wait for me!$"

RownsBag_Text_7:
# 480 "data/maps/Route201/scripts.pory"
	.string "Uh, sorry, folks.$"

RownsBag_Text_8:
# 488 "data/maps/Route201/scripts.pory"
	.string "How do you like that?\n"
	.string "Prof. Rowan’s really nice.\p"
	.string "On TV, he seems so stern and scary.$"

RownsBag_Text_9:
# 496 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}!\n"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_10:
# 504 "data/maps/Route201/scripts.pory"
	.string "What’s with that attitude?\n"
	.string "Don’t be that way!\p"
	.string "We’ve both got Pokémon now.\p"
	.string "There’s only one thing to do, right?\n"
	.string "Are you up for this?$"

RownsBag_Text_11:
# 512 "data/maps/Route201/scripts.pory"
	.string "I’ve always wanted to\n"
	.string "say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

RownsBag_Text_12:
# 520 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?!$"

RivalBattleOver_Text_0:
# 534 "data/maps/Route201/scripts.pory"
	.string "Whew!\n"
	.string "Let’s go home.\p"
	.string "I’m beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

BarryIntro_Text_0:
# 554 "data/maps/Route201/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

toSlowAgain_Far_Right_Text_0:
# 574 "data/maps/Route201/scripts.pory"
	.string "Me and you together,\n"
	.string "we’ve got nothing to fear!$"

route201_talk_barry_Text_0:
# 661 "data/maps/Route201/scripts.pory"
	.string "Pokeémon all have\n"
	.string "different moves, huh?\p"
	.string "A Trainer makes his Pokémon battle\n"
	.string "by ordering them to use moves.\p"
	.string "That's so awesomely cool.$"

route201_sign_one_Text_0:
# 701 "data/maps/Route201/scripts.pory"
	.string "Rt. 201\n"
	.string "Twinleaf Town {DOWN_ARROW}$"

route201_sign_two_Text_0:
# 708 "data/maps/Route201/scripts.pory"
	.string "Rt. 201\n"
	.string "Sandgem Town {RIGHT_ARROW}$"

route201_this_ledge_Text_0:
# 715 "data/maps/Route201/scripts.pory"
	.string "That ledge is one way. Jump down\n"
	.string "for a shortcut to Twinleaf Town!$"

Route201_Text_WildPokemonLurkInTallGrass_Text_0:
# 722 "data/maps/Route201/scripts.pory"
	.string "Wild Pokémon lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So, if you’re wanting to battle wild\n"
	.string "Pokémon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokémon,\n"
	.string "then stay out of the tall grass.$"

Route201_Text_HereAPotionAsAFreeSample_Text_0:
# 735 "data/maps/Route201/scripts.pory"
	.string "Hi!\n"
	.string "I work at a Pokémon Mart.\p"
	.string "Did you know that a Pokémon’s health\n"
	.string "is measured by Hit Points (HP)?\p"
	.string "If a Pokémon runs out of HP, it\n"
	.string "faints and can’t battle anymore.\p"
	.string "If a Pokémon’s HP gets low, you\n"
	.string "should heal it with a Potion.\p"
	.string "Here, let me give you a Potion as\n"
	.string "a free sample. First one’s free!\p"
	.string "It will automatically go in the\n"
	.string "Medicine Pocket of your Bag.$"

Route201_Text_HereAPotionAsAFreeSample_Text_1:
# 752 "data/maps/Route201/scripts.pory"
	.string "You can find a Pokémon Mart in cities\n"
	.string "and most major towns.$"

Route201_Text_HereAPotionAsAFreeSample_Text_2:
# 756 "data/maps/Route201/scripts.pory"
	.string "I AM ERROR$"

Route201_Text_IfYourPokemonsHPIsLowGoHome_Text_0:
# 764 "data/maps/Route201/scripts.pory"
	.string "If your Pokémon’s health--that’s its\n"
	.string "HP--is getting low, you should go\l"
	.string "home and get some rest.$"

Route201_Text_TrainerTipsTalkToAnyone_Text_0:
# 772 "data/maps/Route201/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Don’t be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invaluable information and advice.$"

barryToSlowText::
# 642 "data/maps/Route201/scripts.pory"
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
# 692 "data/maps/Route201/scripts.pory"
	.string "Heheh, {PLAYER}.\n"
	.string "The lake’s not that way!$"
