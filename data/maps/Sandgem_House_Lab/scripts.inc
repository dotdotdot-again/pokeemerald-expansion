Sandgem_House_Lab_MapScripts::
	.byte 0


Intro_In_Sandgem_Lab::
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_0
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_1
# 7 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 8 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 9 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 13 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_2
# 14 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 15 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 16 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_1, MSGBOX_AUTOCLOSE
# 21 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 22 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_2
# 23 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 24 "data/maps/Sandgem_House_Lab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 25 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 26 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_2
# 29 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 30 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_3, MSGBOX_YESNO
# 32 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_In_Sandgem_Lab_2
Intro_In_Sandgem_Lab_1:
# 37 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 38 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 39 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_4, MSGBOX_AUTOCLOSE
# 53 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 54 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_3
# 55 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_4
# 56 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 57 "data/maps/Sandgem_House_Lab/scripts.pory"
	checkplayergender
# 58 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Intro_In_Sandgem_Lab_5
# 65 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_In_Sandgem_Lab_6
Intro_In_Sandgem_Lab_4:
# 72 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_4
# 73 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 74 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabRowan, Intro_In_Sandgem_Lab_Movement_5
# 75 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_6
# 76 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 77 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 78 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_5, MSGBOX_YESNO
Intro_In_Sandgem_Lab_10:
# 96 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Intro_In_Sandgem_Lab_11
# 112 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 113 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_7
# 115 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 116 "data/maps/Sandgem_House_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_8
# 119 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitfanfare
# 120 "data/maps/Sandgem_House_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 121 "data/maps/Sandgem_House_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 122 "data/maps/Sandgem_House_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 123 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 124 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_9
# 136 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 137 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_4
# 138 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 139 "data/maps/Sandgem_House_Lab/scripts.pory"
	checkplayergender
# 140 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Intro_In_Sandgem_Lab_14
# 147 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_In_Sandgem_Lab_15
Intro_In_Sandgem_Lab_13:
# 154 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 155 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_10
# 165 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement Lab_Cedrus, Intro_In_Sandgem_Lab_Movement_7
# 167 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_11
# 169 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 170 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Intro_In_Sandgem_Lab_Text_12
# 171 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_13, MSGBOX_AUTOCLOSE
# 174 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_8
# 175 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_8
# 176 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabRowan, Intro_In_Sandgem_Lab_Movement_8
# 177 "data/maps/Sandgem_House_Lab/scripts.pory"
	playse SE_PIN
# 178 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitse
# 179 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 180 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 181 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_6
# 182 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabRowan, Intro_In_Sandgem_Lab_Movement_3
# 183 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Intro_In_Sandgem_Lab_Text_12
# 184 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_14
# 186 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 187 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_15
# 190 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 191 "data/maps/Sandgem_House_Lab/scripts.pory"
	closemessage
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement Lab_Cedrus, Intro_In_Sandgem_Lab_Movement_9
# 193 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovementall
# 194 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_CEDRUS
# 195 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_16, MSGBOX_AUTOCLOSE
# 199 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement Lab_Cedrus, Intro_In_Sandgem_Lab_Movement_10
# 201 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 202 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_11
# 203 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabRowan, Intro_In_Sandgem_Lab_Movement_12
# 204 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 205 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_17
# 224 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
# 225 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Intro_In_Sandgem_Lab_Movement_3
# 226 "data/maps/Sandgem_House_Lab/scripts.pory"
	checkplayergender
# 227 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Intro_In_Sandgem_Lab_19
# 242 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_In_Sandgem_Lab_20
Intro_In_Sandgem_Lab_18:
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement LabLuda, Intro_In_Sandgem_Lab_Movement_13
# 250 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmovement
# 251 "data/maps/Sandgem_House_Lab/scripts.pory"
	removeobject LabLuda
# 252 "data/maps/Sandgem_House_Lab/scripts.pory"
	setflag LUDA_SANDGEM_LAB
# 253 "data/maps/Sandgem_House_Lab/scripts.pory"
	clearflag LUDA_SANDGEM
# 254 "data/maps/Sandgem_House_Lab/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 1
# 255 "data/maps/Sandgem_House_Lab/scripts.pory"
	releaseall
	return

Intro_In_Sandgem_Lab_2:
# 34 "data/maps/Sandgem_House_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 35 "data/maps/Sandgem_House_Lab/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
	goto Intro_In_Sandgem_Lab_1

Intro_In_Sandgem_Lab_5:
# 61 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_DAWN
# 62 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_DawnImSoGladThatYourKindTowardPokemon, MSGBOX_AUTOCLOSE
# 63 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_4

Intro_In_Sandgem_Lab_6:
# 68 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 69 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_LucasBoyAmIGladYoureKindTowardPokemon, MSGBOX_AUTOCLOSE
# 70 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_4

Intro_In_Sandgem_Lab_11:
# 98 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 99 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Intro_In_Sandgem_Lab_Text_6, MSGBOX_YESNO
# 110 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_10

Intro_In_Sandgem_Lab_14:
# 143 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_DAWN
# 144 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_DawnIveGotOneToo, MSGBOX_AUTOCLOSE
# 145 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_13

Intro_In_Sandgem_Lab_15:
# 150 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 151 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_LucasIveGotTheSameKindOfPokedex, MSGBOX_AUTOCLOSE
# 152 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_13

Intro_In_Sandgem_Lab_19:
# 229 "data/maps/Sandgem_House_Lab/scripts.pory"
	switch VAR_STARTER_MON
# 230 "data/maps/Sandgem_House_Lab/scripts.pory"
	case 0, Intro_In_Sandgem_Lab_25
# 232 "data/maps/Sandgem_House_Lab/scripts.pory"
	case 1, Intro_In_Sandgem_Lab_26
# 234 "data/maps/Sandgem_House_Lab/scripts.pory"
	case 2, Intro_In_Sandgem_Lab_27
Intro_In_Sandgem_Lab_23:
# 238 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_DAWN
# 239 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_DawnIllBeHappyToTeachYouThings, MSGBOX_AUTOCLOSE
# 240 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_18

Intro_In_Sandgem_Lab_20:
# 245 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 246 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox SandgemTownLab_Text_LucasIllTeachYouStuffLater, MSGBOX_AUTOCLOSE
# 247 "data/maps/Sandgem_House_Lab/scripts.pory"
	waitmessage
	goto Intro_In_Sandgem_Lab_18

Intro_In_Sandgem_Lab_25:
# 231 "data/maps/Sandgem_House_Lab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_PIPLUP
	goto Intro_In_Sandgem_Lab_23

Intro_In_Sandgem_Lab_26:
# 233 "data/maps/Sandgem_House_Lab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TURTWIG
	goto Intro_In_Sandgem_Lab_23

Intro_In_Sandgem_Lab_27:
# 235 "data/maps/Sandgem_House_Lab/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIMCHAR
	goto Intro_In_Sandgem_Lab_23


Rowan_Lab::
# 262 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_eq Rowan_Lab_1
# 270 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_gt Rowan_Lab_2
# 312 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 313 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_7, MSGBOX_NPC
# 314 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return

Rowan_Lab_1:
# 263 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 264 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 265 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_0, MSGBOX_NPC
# 268 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return

Rowan_Lab_2:
# 272 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement 3, Rowan_Lab_Movement_0
# 273 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 274 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_1, MSGBOX_YESNO
# 277 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rowan_Lab_6
# 304 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rowan_Lab_7
	return

Rowan_Lab_6:
# 278 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 279 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_2
# 280 "data/maps/Sandgem_House_Lab/scripts.pory"
	specialvar VAR_RESULT, countMons
# 281 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge Rowan_Lab_10
# 295 "data/maps/Sandgem_House_Lab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 296 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_5, MSGBOX_AUTOCLOSE
	return

Rowan_Lab_7:
# 305 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_6, MSGBOX_AUTOCLOSE
	return

Rowan_Lab_10:
# 282 "data/maps/Sandgem_House_Lab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 283 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_3
# 288 "data/maps/Sandgem_House_Lab/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 289 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Rowan_Lab_Text_4, MSGBOX_AUTOCLOSE
# 291 "data/maps/Sandgem_House_Lab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_COMPLETE_DEX, SUB_QUEST_30_MONS_CAUGHT
# 292 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return


LuDa_Dad_Lab::
# 321 "data/maps/Sandgem_House_Lab/scripts.pory"
	checkplayergender
# 322 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LuDa_Dad_Lab_1
# 334 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LuDa_Dad_Lab_2
	return

LuDa_Dad_Lab_1:
# 325 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 326 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker LuDa_Dad_Lab_Text_0
# 327 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox LuDa_Dad_Lab_Text_1, MSGBOX_NPC
# 332 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return

LuDa_Dad_Lab_2:
# 338 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 339 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker LuDa_Dad_Lab_Text_2
# 340 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox LuDa_Dad_Lab_Text_3, MSGBOX_NPC
# 345 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return


Roseanne_Lab::
# 350 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 351 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_eq Roseanne_Lab_1
# 361 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_gt Roseanne_Lab_2
# 390 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Roseanne_Lab_Text_0
# 391 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_1, MSGBOX_NPC
# 397 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return

Roseanne_Lab_1:
# 352 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Roseanne_Lab_Text_0
# 353 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_1, MSGBOX_NPC
# 359 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return

Roseanne_Lab_2:
# 363 "data/maps/Sandgem_House_Lab/scripts.pory"
	applymovement 3, Rowan_Lab_Movement_0
# 364 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Roseanne_Lab_Text_0
# 365 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_2, MSGBOX_YESNO
# 368 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Roseanne_Lab_6
# 383 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Roseanne_Lab_7
	return

Roseanne_Lab_6:
# 369 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker Roseanne_Lab_Text_0
# 370 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_3
# 371 "data/maps/Sandgem_House_Lab/scripts.pory"
	specialvar VAR_RESULT, countMons
# 372 "data/maps/Sandgem_House_Lab/scripts.pory"
	compare VAR_RESULT, 30
	goto_if_ge Roseanne_Lab_10
# 376 "data/maps/Sandgem_House_Lab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 377 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_4, MSGBOX_AUTOCLOSE
	return

Roseanne_Lab_7:
# 384 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Roseanne_Lab_Text_5, MSGBOX_AUTOCLOSE
	return

Roseanne_Lab_10:
	return


Lab_PC::
# 402 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 403 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Lab_PC_Text_0, MSGBOX_SIGN
# 404 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return


Ced_Lab::
# 408 "data/maps/Sandgem_House_Lab/scripts.pory"
	lock
# 409 "data/maps/Sandgem_House_Lab/scripts.pory"
	setspeaker SP_NAME_CEDRUS
# 410 "data/maps/Sandgem_House_Lab/scripts.pory"
	msgbox Ced_Lab_Text_0
# 412 "data/maps/Sandgem_House_Lab/scripts.pory"
	release
	return


# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_0:
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_right
# 5 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_left
	step_end

# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_1:
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 6 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
	step_end

# 13 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_2:
# 13 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 54 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_3:
# 54 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_right
	step_end

# 55 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_4:
# 55 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 74 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_5:
# 74 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 75 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_6:
# 75 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_up
	step_end

# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_7:
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_left
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_left
# 166 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_8:
# 174 "data/maps/Sandgem_House_Lab/scripts.pory"
	emote_exclamation_mark
	step_end

# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_9:
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_8
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_down
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_left
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_down
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_left
# 192 "data/maps/Sandgem_House_Lab/scripts.pory"
	delay_16
	step_end

# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_10:
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_right
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_right
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_right
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
# 200 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_up
	step_end

# 202 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_11:
# 202 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_left
	step_end

# 203 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_12:
# 203 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_down
	step_end

# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
Intro_In_Sandgem_Lab_Movement_13:
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
# 249 "data/maps/Sandgem_House_Lab/scripts.pory"
	walk_down
	step_end

# 272 "data/maps/Sandgem_House_Lab/scripts.pory"
Rowan_Lab_Movement_0:
# 272 "data/maps/Sandgem_House_Lab/scripts.pory"
	face_player
	step_end

Intro_In_Sandgem_Lab_Text_0:
# 9 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Well, well, look who’s here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let’s have a look at your Pokémon.$"

Intro_In_Sandgem_Lab_Text_1:
# 16 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "...\p"
	.string "Hmm...\n"
	.string "I see...\p"
	.string "This Pokémon seems to be rather\n"
	.string "happy.$"

Intro_In_Sandgem_Lab_Text_2:
# 26 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hm!\p"
	.string "Entrusting you with that {STR_VAR_1}\n"
	.string "was no mistake, it seems!$"

Intro_In_Sandgem_Lab_Text_3:
# 30 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Well, would you like to give\n"
	.string "it a nickname?$"

Intro_In_Sandgem_Lab_Text_4:
# 39 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "When I first saw you two \n"
	.string "about to step into the tall grass\l"
	.string "without Pokémon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you’ve astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokémon.\p"
	.string "I feel privileged to have met you.\p"
	.string "I’m sure {STR_VAR_1} feels the same\n"
	.string "way about you.\p"
	.string "That’s why I’ll ask you to cherish that\n"
	.string "Pokémon of yours.$"

Intro_In_Sandgem_Lab_Text_5:
# 78 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Er-hem!\n"
	.string "Let’s move on to the main topic.\p"
	.string "There is something I want you to do\n"
	.string "for me.\p"
	.string "Allow me to properly introduce myself\n"
	.string "first.\p"
	.string "My name, as you know, is Rowan.\n"
	.string "I study Pokémon.\p"
	.string "First of all, I want to know exactly\n"
	.string "what kinds of Pokémon live in the\l"
	.string "Sinnoh region.\p"
	.string "To do so, it is necessary to collect\n"
	.string "data using the Pokédex.\p"
	.string "This is what I wish to ask of you.\p"
	.string "I want to entrust you with this\n"
	.string "Pokédex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokémon in Sinnoh for me?$"

Intro_In_Sandgem_Lab_Text_6:
# 99 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Rowan: ...\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I can stand here without speaking for\n"
	.string "hours. I’m a very patient man.\p"
	.string "Let me ask you again, {PLAYER}.\p"
	.string "I want to entrust you with this\n"
	.string "Pokédex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokémon in Sinnoh for me?$"

Intro_In_Sandgem_Lab_Text_7:
# 113 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hm!\p"
	.string "Good answer!$"

Intro_In_Sandgem_Lab_Text_8:
# 117 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the {COLOR RED}{SHADOW LIGHT_RED}Pokédex{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Intro_In_Sandgem_Lab_Text_9:
# 124 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "That Pokédex is a very\n"
	.string "high-tech device.\p"
	.string "It will automatically record data on\n"
	.string "every kind of Pokémon you encounter.\p"
	.string "{PLAYER}, I ask that you go\n"
	.string "everywhere and meet every kind of\l"
	.string "Pokémon in this region!\p"
	.string "Also as an incentive I'll giave you some\n"
	.string "rewards after certain milestones.\p"
	.string "Show me your dex after you catch about\n"
	.string "hmmmm...\plets say 30 Pokémon?\n"
	.string "and I'll give you a fine reward.$"

Intro_In_Sandgem_Lab_Text_10:
# 155 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "When you walked up Route 201\n"
	.string "with your Pokémon, what did you feel?\p"
	.string "I’ve lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I’m with a Pokémon.\p"
	.string "Now, you should know that there are\n"
	.string "countless Pokémon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out there!\p"
	.string "Now go!$"

Intro_In_Sandgem_Lab_Text_11:
# 167 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins rig-$"

Intro_In_Sandgem_Lab_Text_12:
# 170 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Rude Woman$"

Intro_In_Sandgem_Lab_Text_13:
# 171 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Proffesor Rowan.\p"
	.string "I require your assistance with\n"
	.string "something on your personal computer.$"

Intro_In_Sandgem_Lab_Text_14:
# 184 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Should not take but a momment\n"
	.string "of your time.$"

Intro_In_Sandgem_Lab_Text_15:
# 187 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Um, well Professor Cedrus, I'd be glad to\n"
	.string "but, as it so happens I'm a little well\l"
	.string "preoccupied at this exact momment...$"

Intro_In_Sandgem_Lab_Text_16:
# 195 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I see...\p"
	.string "My apologies.\p"
	.string "I will be waiting by the your\n"
	.string "personal computer when you are done.$"

Intro_In_Sandgem_Lab_Text_17:
# 205 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Ahem...\p"
	.string "Sorry about that {PLAYER},\n"
	.string "she's... new around here.\n"
	.string "Well technically she's only a temp here.\p"
	.string "After today she'll mainly be doing\n"
	.string "field research around the region.\p"
	.string "There's a good chance you'll run into\n"
	.string "her a few times on your journey in fact.\p"
	.string "She was called in to aid us in the\n"
	.string "research of a recent resurgence of\l"
	.string "Pokémon thought to be long extinct.\p"
	.string "Pokémon from back when this land was\n"
	.string "still called Hisui.\p"
	.string "Oh, sorry, your not here for a lecture.\p"
	.string "In fact I'm pretty sure I was about to\n"
	.string "see you off before we where intrupted.\p"
	.string "Ahem...\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

Rowan_Lab_Text_0:
# 265 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Go on!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "awaits you!$"

Rowan_Lab_Text_1:
# 274 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Ah, {PLAYER}!\p"
	.string "You've come to show me the Progress\n"
	.string "you've made on your Pokédex?$"

Rowan_Lab_Text_2:
# 279 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hmmm...$"

Rowan_Lab_Text_3:
# 283 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Oh, it seems you've caught {STR_VAR_1}\n"
	.string "Pokémon!\p"
	.string "Well done {PLAYER}!\p"
	.string "Here, accept this reward for this\n"
	.string "wonderful accomplishment!$"

Rowan_Lab_Text_4:
# 289 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I'll give you another reward after you\p"
	.string "catch 50 more Pokémon.$"

Rowan_Lab_Text_5:
# 296 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "You've caught {STR_VAR_1} Pokémon in \n"
	.string "Sinnoh...\p"
	.string "Look harder for wild Pokémon.\p"
	.string "Don't be afraid of going into tall\n"
	.string "grass.$"

Rowan_Lab_Text_6:
# 305 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "What's wrong?\p"
	.string "You're not suggesting you've seen so\n"
	.string "few that you're afraid to show me?\p$"

Rowan_Lab_Text_7:
# 313 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hello, {PLAYER}!$"

LuDa_Dad_Lab_Text_0:
# 326 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Dawn’s Father$"

LuDa_Dad_Lab_Text_1:
# 327 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I’m Dawn’s father.\p"
	.string "I’ll be happy to assist you on your\n"
	.string "quest for the professor.\p"
	.string "Hahaha. Eh...\n"
	.string "I’m sure we can count on you!$"

LuDa_Dad_Lab_Text_2:
# 339 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Lucas’ Father$"

LuDa_Dad_Lab_Text_3:
# 340 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I’m Lucas’ father.\p"
	.string "I’ll be happy to assist you on your\n"
	.string "quest for the professor.\p"
	.string "Hahaha. Eh...\n"
	.string "I’m sure we can count on you!$"

Roseanne_Lab_Text_0:
# 352 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Roseanne$"

Roseanne_Lab_Text_1:
# 353 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Professor Rowan invented a new\n"
	.string "Pokédex while working alongside a\l"
	.string "professor from the Kanto region.\p"
	.string "Oh, my name is Roseanne.\p"
	.string "It’s an honor to be an assistant to\n"
	.string "our professor!$"

Roseanne_Lab_Text_2:
# 365 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hello {PLAYER}\p"
	.string "Do you want me to check if you've\n"
	.string "hit a reward milestone yet?$"

Roseanne_Lab_Text_3:
# 370 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Hmmm let me look here...\p$"

Roseanne_Lab_Text_4:
# 377 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Sorry you only have {STR_VAR_1} \n"
	.string "Pokémon registred as caught.\p"
	.string "That's not enough for a reward yet.$"

Roseanne_Lab_Text_5:
# 384 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Ok, well you know where to find\n"
	.string "me when you do.$"

Lab_PC_Text_0:
# 403 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "It's Rowan's Computer$"

Ced_Lab_Text_0:
# 410 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Sorry I am too busy to converse\n"
	.string "right now.$"

SandgemTownLab_Text_DawnImSoGladThatYourKindTowardPokemon::
# 425 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I’m so glad that you’re kind\n"
	.string "toward Pokémon!\p"
	.string "If you weren’t, I’d have to...\n"
	.string "Oh, I just can’t say it...$"

SandgemTownLab_Text_DawnIveGotOneToo::
# 432 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I’ve got one, too!$"

SandgemTownLab_Text_DawnIllBeHappyToTeachYouThings::
# 436 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "The Pokémon that I met for\n"
	.string "the first time was {STR_VAR_2}!\p"
	.string "If you would have chosen {STR_VAR_2}\n"
	.string "on Route 201, we’d have the same\l"
	.string "Pokémon now!\p"
	.string "Not that it matters, but...\p"
	.string "Anyway, I’m Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokédex.\p"
	.string "So, in a sense, I’m just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that’s all.\p"
	.string "I’ll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}!$"

SandgemTownLab_Text_LucasBoyAmIGladYoureKindTowardPokemon::
# 455 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "Boy, am I glad you’re kind\n"
	.string "toward Pokémon.\p"
	.string "If you weren’t, well...\n"
	.string "I don’t even want to think about it.$"

SandgemTownLab_Text_LucasIveGotTheSameKindOfPokedex::
# 462 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "I’ve got the same kind of\n"
	.string "Pokédex as you.$"

SandgemTownLab_Text_LucasIllTeachYouStuffLater::
# 467 "data/maps/Sandgem_House_Lab/scripts.pory"
	.string "The professor asked me to help,\n"
	.string "so I’m filling the Pokédex pages, too.\p"
	.string "That makes us comrades working toward\n"
	.string "the same goal.\p"
	.string "I’ll teach you stuff later, OK?$"
