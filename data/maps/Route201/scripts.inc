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
	compare VAR_RESULT, 0
	goto_if_eq Route201_Barry_6
# 148 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_7
Route201_Barry_5:
# 154 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 155 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_18
# 160 "data/maps/Route201/scripts.pory"
	waitmessage
# 161 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_3
# 162 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_3
# 163 "data/maps/Route201/scripts.pory"
	waitmovementall
# 164 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 165 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_19
# 173 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 174 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_20
# 186 "data/maps/Route201/scripts.pory"
	waitmessage
# 187 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_10
# 188 "data/maps/Route201/scripts.pory"
	waitmovement
# 189 "data/maps/Route201/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 190 "data/maps/Route201/scripts.pory"
	addobject LuDa_Route_201_again
# 191 "data/maps/Route201/scripts.pory"
	checkplayergender
# 192 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route201_Barry_11
# 201 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route201_Barry_12
Route201_Barry_10:
# 244 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_15
# 245 "data/maps/Route201/scripts.pory"
	waitmovement
# 246 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 247 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_28
# 249 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_16
# 250 "data/maps/Route201/scripts.pory"
	waitmovement
# 251 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 252 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_29, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route201/scripts.pory"
	waitmessage
# 257 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Movement_7
# 258 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 259 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_30
# 263 "data/maps/Route201/scripts.pory"
	waitmessage
# 264 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 7
# 265 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/Route201/scripts.pory"
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
# 144 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 145 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_16
	goto Route201_Barry_5

Route201_Barry_7:
# 150 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 151 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_17
	goto Route201_Barry_5

Route201_Barry_11:
# 194 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_DAWN
# 195 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_21
# 196 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 197 "data/maps/Route201/scripts.pory"
	waitmovement
# 198 "data/maps/Route201/scripts.pory"
	releaseall
	goto Route201_Barry_10

Route201_Barry_12:
# 203 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 204 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_21
# 205 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_11
# 206 "data/maps/Route201/scripts.pory"
	waitmovement
# 207 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 208 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_22
# 210 "data/maps/Route201/scripts.pory"
	waitmessage
# 211 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_3
# 212 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_12
# 213 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 214 "data/maps/Route201/scripts.pory"
	addobject Rowans_Bag_Route201
# 215 "data/maps/Route201/scripts.pory"
	setobjectxy Rowans_Bag_Route201, 16, 13
# 216 "data/maps/Route201/scripts.pory"
	waitmovement
# 217 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_13
# 218 "data/maps/Route201/scripts.pory"
	waitmovement
# 219 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 220 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_23
# 221 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 222 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_24
# 226 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 227 "data/maps/Route201/scripts.pory"
	applymovement LuDa_Route_201_again, Route201_Barry_Movement_14
# 228 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 229 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_25
# 230 "data/maps/Route201/scripts.pory"
	waitmovement
# 231 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 232 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_26
# 234 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 235 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Text_27
	goto Route201_Barry_10


Route201_Barry_Trigger_Far_Right::
# 270 "data/maps/Route201/scripts.pory"
	lockall
# 271 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_0
# 272 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 273 "data/maps/Route201/scripts.pory"
	waitse
# 274 "data/maps/Route201/scripts.pory"
	waitmovement
# 275 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 276 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_0, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route201/scripts.pory"
	waitmessage
# 278 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_1
# 279 "data/maps/Route201/scripts.pory"
	waitmovement
# 280 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 281 "data/maps/Route201/scripts.pory"
	msgbox Route201_Barry_Trigger_Far_Right_Text_1, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route201/scripts.pory"
	waitmessage
# 284 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Barry_Trigger_Far_Right_Movement_2
# 285 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Trigger_Far_Right_Movement_3
# 286 "data/maps/Route201/scripts.pory"
	waitmovementall
# 287 "data/maps/Route201/scripts.pory"
	call Route201_Barry
	return


Route201_Try_to_not_get_pokemon_trigger_down::
# 292 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 293 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 294 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_down_Movement_1
	return


Route201_Try_to_not_get_pokemon_trigger_right::
# 300 "data/maps/Route201/scripts.pory"
	applymovement Barry_201, Route201_Try_to_not_get_pokemon_trigger_down_Movement_0
# 301 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 302 "data/maps/Route201/scripts.pory"
	msgbox Route201_Try_to_not_get_pokemon_trigger_down_Text_0, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Try_to_not_get_pokemon_trigger_right_Movement_0
	return


RownsBag::
# 308 "data/maps/Route201/scripts.pory"
	lock
# 309 "data/maps/Route201/scripts.pory"
	removeobject Rowans_Bag_Route201
# 310 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 311 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 312 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 313 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 314 "data/maps/Route201/scripts.pory"
	waitstate
# 315 "data/maps/Route201/scripts.pory"
	applymovement Rowan_Route_201, Route201_Barry_Movement_7
# 316 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_Barry_Movement_1
# 317 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 318 "data/maps/Route201/scripts.pory"
	msgbox RownsBag_Text_0, MSGBOX_AUTOCLOSE
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

# 187 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_10:
# 187 "data/maps/Route201/scripts.pory"
	face_left
# 187 "data/maps/Route201/scripts.pory"
	delay_16
# 187 "data/maps/Route201/scripts.pory"
	face_right
# 187 "data/maps/Route201/scripts.pory"
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

# 212 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_12:
# 212 "data/maps/Route201/scripts.pory"
	face_down
# 212 "data/maps/Route201/scripts.pory"
	delay_16
	step_end

# 217 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_13:
# 217 "data/maps/Route201/scripts.pory"
	delay_16
# 217 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 227 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_14:
# 227 "data/maps/Route201/scripts.pory"
	emote_question_mark
	step_end

# 244 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_15:
# 244 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 249 "data/maps/Route201/scripts.pory"
Route201_Barry_Movement_16:
# 249 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 271 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_0:
# 271 "data/maps/Route201/scripts.pory"
	face_down
# 271 "data/maps/Route201/scripts.pory"
	emote_exclamation_mark
	step_end

# 278 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_1:
# 278 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 278 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 278 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 284 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_2:
# 284 "data/maps/Route201/scripts.pory"
	walk_up
# 284 "data/maps/Route201/scripts.pory"
	walk_up
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	walk_right
# 284 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 285 "data/maps/Route201/scripts.pory"
Route201_Barry_Trigger_Far_Right_Movement_3:
# 285 "data/maps/Route201/scripts.pory"
	walk_up
# 285 "data/maps/Route201/scripts.pory"
	walk_up
# 285 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 292 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_0:
# 292 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 296 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_down_Movement_1:
# 296 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 304 "data/maps/Route201/scripts.pory"
Route201_Try_to_not_get_pokemon_trigger_right_Movement_0:
# 304 "data/maps/Route201/scripts.pory"
	walk_left
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
	.string "HOLD IT!!!$"

Route201_Barry_Text_4:
# 64 "data/maps/Route201/scripts.pory"
	.string "Professor: You two don’t seem to have\n"
	.string "any Pokémon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!$"

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
	.string "I love Pokémon, too!$"

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
# 145 "data/maps/Route201/scripts.pory"
	.string "RIGHT!$"

Route201_Barry_Text_17:
# 151 "data/maps/Route201/scripts.pory"
	.string "...\n"
	.string "That joke's getting old!$"

Route201_Barry_Text_18:
# 155 "data/maps/Route201/scripts.pory"
	.string "...A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokémon.$"

Route201_Barry_Text_19:
# 165 "data/maps/Route201/scripts.pory"
	.string "...Uh...\n"
	.string "Well, I, uh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give\n"
	.string "a Pokémon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...$"

Route201_Barry_Text_20:
# 174 "data/maps/Route201/scripts.pory"
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

Route201_Barry_Text_21:
# 195 "data/maps/Route201/scripts.pory"
	.string "Professor Rowan!$"

Route201_Barry_Text_22:
# 208 "data/maps/Route201/scripts.pory"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_Barry_Text_23:
# 220 "data/maps/Route201/scripts.pory"
	.string "Is something wrong here?$"

Route201_Barry_Text_24:
# 222 "data/maps/Route201/scripts.pory"
	.string "Ah! There it is!\n"
	.string "Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_Barry_Text_25:
# 229 "data/maps/Route201/scripts.pory"
	.string "Wha...?$"

Route201_Barry_Text_26:
# 232 "data/maps/Route201/scripts.pory"
	.string "Those Pokémon are crucial.\n"
	.string "You’re giving them away?$"

Route201_Barry_Text_27:
# 235 "data/maps/Route201/scripts.pory"
	.string "Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_Barry_Text_28:
# 247 "data/maps/Route201/scripts.pory"
	.string "Go on! Open the briefcase and\n"
	.string "choose a Pokémon!$"

Route201_Barry_Text_29:
# 252 "data/maps/Route201/scripts.pory"
	.string "Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can’t believe it! I’m so happy now\n"
	.string "that I can’t keep a straight face!$"

Route201_Barry_Text_30:
# 259 "data/maps/Route201/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I’m practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_Barry_Trigger_Far_Right_Text_0:
# 276 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_Barry_Trigger_Far_Right_Text_1:
# 281 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get mocing to Prof. Rowan's lab.$"

Route201_Try_to_not_get_pokemon_trigger_down_Text_0:
# 294 "data/maps/Route201/scripts.pory"
	.string "What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

RownsBag_Text_0:
# 318 "data/maps/Route201/scripts.pory"
	.string "Then, I choose you!\n"
	.string "I'm picking this POKEMON!$"
