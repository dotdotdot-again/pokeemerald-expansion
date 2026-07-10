Route202_MapScripts::
	.byte 0


testBattle::
# 7 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, testBattle_Text_0, testBattle_Text_1
# 8 "data/maps/Route202/scripts.pory"
	msgbox testBattle_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/Route202/scripts.pory"
	waitmessage
	end


Route202_Youngster_Tristan::
# 15 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route202_Youngster_Tristan_Text_0, Route202_Youngster_Tristan_Text_1
# 18 "data/maps/Route202/scripts.pory"
	msgbox Route202_Youngster_Tristan_Text_2, MSGBOX_NPC
# 22 "data/maps/Route202/scripts.pory"
	waitmessage
	end


Route202_Lass_Natalie::
# 28 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route202_Lass_Natalie_Text_0, Route202_Lass_Natalie_Text_1
# 32 "data/maps/Route202/scripts.pory"
	msgbox Route202_Lass_Natalie_Text_2, MSGBOX_NPC
# 34 "data/maps/Route202/scripts.pory"
	waitmessage
	end


Route202_Youngster_Logan::
# 40 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route202_Youngster_Logan_Text_0, Route202_Youngster_Logan_Text_1, Route202_Youngster_Logan_Text_2
# 43 "data/maps/Route202/scripts.pory"
	msgbox Route202_Youngster_Logan_Text_3, MSGBOX_NPC
# 45 "data/maps/Route202/scripts.pory"
	waitmessage
	end


Route202_Text_Rt202JubilifeCity::
# 50 "data/maps/Route202/scripts.pory"
	lock
# 51 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_Rt202JubilifeCity_Text_0, MSGBOX_SIGN
# 53 "data/maps/Route202/scripts.pory"
	waitmessage
# 54 "data/maps/Route202/scripts.pory"
	release
	return


Route202_Text_TrainerTipsPokemonInvolvedInBattleEarnExpPoints::
# 58 "data/maps/Route202/scripts.pory"
	lock
# 59 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_TrainerTipsPokemonInvolvedInBattleEarnExpPoints_Text_0, MSGBOX_SIGN
# 64 "data/maps/Route202/scripts.pory"
	waitmessage
# 65 "data/maps/Route202/scripts.pory"
	release
	return


Route202_Text_Rt202SandgemTown::
# 69 "data/maps/Route202/scripts.pory"
	lock
# 70 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_Rt202SandgemTown_Text_0, MSGBOX_SIGN
# 72 "data/maps/Route202/scripts.pory"
	waitmessage
# 73 "data/maps/Route202/scripts.pory"
	release
	return


Route202_Text_SomePokemonOnlyAppearInTheMorning::
# 77 "data/maps/Route202/scripts.pory"
	lock
# 78 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_SomePokemonOnlyAppearInTheMorning_Text_0, MSGBOX_NPC
# 83 "data/maps/Route202/scripts.pory"
	waitmessage
# 84 "data/maps/Route202/scripts.pory"
	release
	return


goSeeYourMom::
# 89 "data/maps/Route202/scripts.pory"
	lockall
# 90 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 91 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Route202/scripts.pory"
	waitse
# 93 "data/maps/Route202/scripts.pory"
	waitmovementall
# 94 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 95 "data/maps/Route202/scripts.pory"
	waitmovementall
# 96 "data/maps/Route202/scripts.pory"
	checkplayergender
# 97 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMom_2
# 104 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMom_3
goSeeYourMom_1:
# 111 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 112 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_3
# 113 "data/maps/Route202/scripts.pory"
	waitmovementall
# 114 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMom_2:
# 100 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 101 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1

goSeeYourMom_3:
# 107 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 108 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1


goSeeYourMomMid::
# 119 "data/maps/Route202/scripts.pory"
	lockall
# 120 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 121 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Route202/scripts.pory"
	waitse
# 123 "data/maps/Route202/scripts.pory"
	waitmovementall
# 124 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_0
# 125 "data/maps/Route202/scripts.pory"
	waitmovementall
# 126 "data/maps/Route202/scripts.pory"
	checkplayergender
# 127 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomMid_2
# 134 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomMid_3
goSeeYourMomMid_1:
# 141 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 142 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_1
# 143 "data/maps/Route202/scripts.pory"
	waitmovementall
# 144 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomMid_2:
# 130 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 131 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1

goSeeYourMomMid_3:
# 137 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 138 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1


goSeeYourMomTop::
# 149 "data/maps/Route202/scripts.pory"
	lockall
# 150 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 151 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Route202/scripts.pory"
	waitse
# 153 "data/maps/Route202/scripts.pory"
	waitmovementall
# 154 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_0
# 155 "data/maps/Route202/scripts.pory"
	waitmovementall
# 156 "data/maps/Route202/scripts.pory"
	checkplayergender
# 157 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomTop_2
# 164 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomTop_3
goSeeYourMomTop_1:
# 171 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 172 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_1
# 173 "data/maps/Route202/scripts.pory"
	waitmovementall
# 174 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomTop_2:
# 160 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 161 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1

goSeeYourMomTop_3:
# 167 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 168 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1


goSeeYourMomBottom::
# 179 "data/maps/Route202/scripts.pory"
	lockall
# 180 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 181 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Route202/scripts.pory"
	waitse
# 183 "data/maps/Route202/scripts.pory"
	waitmovementall
# 184 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_0
# 185 "data/maps/Route202/scripts.pory"
	waitmovementall
# 186 "data/maps/Route202/scripts.pory"
	checkplayergender
# 187 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomBottom_2
# 194 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomBottom_3
goSeeYourMomBottom_1:
# 201 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 202 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_1
# 203 "data/maps/Route202/scripts.pory"
	waitmovementall
# 204 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomBottom_2:
# 190 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 191 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1

goSeeYourMomBottom_3:
# 197 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 198 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1


CatchPokemon::
# 208 "data/maps/Route202/scripts.pory"
	lockall
# 209 "data/maps/Route202/scripts.pory"
	checkplayergender
# 210 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemon_2
# 214 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemon_3
CatchPokemon_1:
# 218 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 219 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Route202/scripts.pory"
	waitse
# 221 "data/maps/Route202/scripts.pory"
	waitmovementall
# 222 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 223 "data/maps/Route202/scripts.pory"
	waitmovementall
# 224 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemon_2:
# 212 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemon_1

CatchPokemon_3:
# 216 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemon_1


CatchPokemonMid::
# 229 "data/maps/Route202/scripts.pory"
	lockall
# 230 "data/maps/Route202/scripts.pory"
	checkplayergender
# 231 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonMid_2
# 235 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonMid_3
CatchPokemonMid_1:
# 239 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 240 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 241 "data/maps/Route202/scripts.pory"
	waitse
# 242 "data/maps/Route202/scripts.pory"
	waitmovementall
# 243 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_0
# 244 "data/maps/Route202/scripts.pory"
	waitmovementall
# 245 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonMid_2:
# 233 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonMid_1

CatchPokemonMid_3:
# 237 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonMid_1


CatchPokemonTop::
# 249 "data/maps/Route202/scripts.pory"
	lockall
# 250 "data/maps/Route202/scripts.pory"
	checkplayergender
# 251 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonTop_2
# 255 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonTop_3
CatchPokemonTop_1:
# 259 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 260 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 261 "data/maps/Route202/scripts.pory"
	waitse
# 262 "data/maps/Route202/scripts.pory"
	waitmovementall
# 263 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_0
# 264 "data/maps/Route202/scripts.pory"
	waitmovementall
# 265 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonTop_2:
# 253 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonTop_1

CatchPokemonTop_3:
# 257 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonTop_1


CatchPokemonBottom::
# 269 "data/maps/Route202/scripts.pory"
	lockall
# 270 "data/maps/Route202/scripts.pory"
	checkplayergender
# 271 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonBottom_2
# 275 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonBottom_3
CatchPokemonBottom_1:
# 279 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 280 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 281 "data/maps/Route202/scripts.pory"
	waitse
# 282 "data/maps/Route202/scripts.pory"
	waitmovementall
# 283 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_0
# 284 "data/maps/Route202/scripts.pory"
	waitmovementall
# 285 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonBottom_2:
# 273 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonBottom_1

CatchPokemonBottom_3:
# 277 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonBottom_1


CatchPokemonCont::
# 291 "data/maps/Route202/scripts.pory"
	checkplayergender
# 292 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_2
# 335 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_3
CatchPokemonCont_1:
# 376 "data/maps/Route202/scripts.pory"
	closemessage
# 377 "data/maps/Route202/scripts.pory"
	fadedefaultbgm
# 378 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, CatchPokemonCont_Movement_0
# 379 "data/maps/Route202/scripts.pory"
	waitmovement
# 380 "data/maps/Route202/scripts.pory"
	removeobject LudaRoute202
# 381 "data/maps/Route202/scripts.pory"
	setflag LUDA_ROUTE_202_AGAIN
# 382 "data/maps/Route202/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 4
# 383 "data/maps/Route202/scripts.pory"
	releaseall
	return

CatchPokemonCont_2:
# 295 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 296 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 298 "data/maps/Route202/scripts.pory"
	waitmessage
# 299 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_7
# 312 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_8
CatchPokemonCont_6:
# 328 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 329 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
	goto CatchPokemonCont_1

CatchPokemonCont_3:
# 338 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 339 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 341 "data/maps/Route202/scripts.pory"
	waitmessage
# 342 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_12
# 354 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_13
CatchPokemonCont_11:
# 368 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 369 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
# 374 "data/maps/Route202/scripts.pory"
	waitmessage
	goto CatchPokemonCont_1

CatchPokemonCont_7:
# 301 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 302 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_1
# 309 "data/maps/Route202/scripts.pory"
	waitmessage
# 310 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_8:
# 314 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 315 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_2
# 324 "data/maps/Route202/scripts.pory"
	waitmessage
# 325 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_12:
# 344 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 345 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_4
# 351 "data/maps/Route202/scripts.pory"
	waitmessage
# 352 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11

CatchPokemonCont_13:
# 356 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 357 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_5
# 364 "data/maps/Route202/scripts.pory"
	waitmessage
# 365 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11


# 90 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_0:
# 90 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_1:
# 94 "data/maps/Route202/scripts.pory"
	walk_right
# 94 "data/maps/Route202/scripts.pory"
	walk_right
# 94 "data/maps/Route202/scripts.pory"
	walk_right
# 94 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_2:
# 111 "data/maps/Route202/scripts.pory"
	walk_right
# 111 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 112 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_3:
# 112 "data/maps/Route202/scripts.pory"
	walk_right
# 112 "data/maps/Route202/scripts.pory"
	walk_left
# 112 "data/maps/Route202/scripts.pory"
	walk_left
# 112 "data/maps/Route202/scripts.pory"
	walk_left
# 112 "data/maps/Route202/scripts.pory"
	walk_left
# 112 "data/maps/Route202/scripts.pory"
	walk_left
# 112 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 124 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_0:
# 124 "data/maps/Route202/scripts.pory"
	walk_up
# 124 "data/maps/Route202/scripts.pory"
	walk_right
# 124 "data/maps/Route202/scripts.pory"
	walk_right
# 124 "data/maps/Route202/scripts.pory"
	walk_right
# 124 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 142 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_1:
# 142 "data/maps/Route202/scripts.pory"
	walk_right
# 142 "data/maps/Route202/scripts.pory"
	walk_left
# 142 "data/maps/Route202/scripts.pory"
	walk_left
# 142 "data/maps/Route202/scripts.pory"
	walk_left
# 142 "data/maps/Route202/scripts.pory"
	walk_left
# 142 "data/maps/Route202/scripts.pory"
	walk_left
# 142 "data/maps/Route202/scripts.pory"
	walk_down
# 142 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 154 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_0:
# 154 "data/maps/Route202/scripts.pory"
	walk_up
# 154 "data/maps/Route202/scripts.pory"
	walk_up
# 154 "data/maps/Route202/scripts.pory"
	walk_right
# 154 "data/maps/Route202/scripts.pory"
	walk_right
# 154 "data/maps/Route202/scripts.pory"
	walk_right
# 154 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 172 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_1:
# 172 "data/maps/Route202/scripts.pory"
	walk_right
# 172 "data/maps/Route202/scripts.pory"
	walk_left
# 172 "data/maps/Route202/scripts.pory"
	walk_left
# 172 "data/maps/Route202/scripts.pory"
	walk_left
# 172 "data/maps/Route202/scripts.pory"
	walk_left
# 172 "data/maps/Route202/scripts.pory"
	walk_left
# 172 "data/maps/Route202/scripts.pory"
	walk_down
# 172 "data/maps/Route202/scripts.pory"
	walk_down
# 172 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 184 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_0:
# 184 "data/maps/Route202/scripts.pory"
	walk_down
# 184 "data/maps/Route202/scripts.pory"
	walk_right
# 184 "data/maps/Route202/scripts.pory"
	walk_right
# 184 "data/maps/Route202/scripts.pory"
	walk_right
# 184 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 202 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_1:
# 202 "data/maps/Route202/scripts.pory"
	walk_right
# 202 "data/maps/Route202/scripts.pory"
	walk_left
# 202 "data/maps/Route202/scripts.pory"
	walk_left
# 202 "data/maps/Route202/scripts.pory"
	walk_left
# 202 "data/maps/Route202/scripts.pory"
	walk_left
# 202 "data/maps/Route202/scripts.pory"
	walk_left
# 202 "data/maps/Route202/scripts.pory"
	walk_up
# 202 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 378 "data/maps/Route202/scripts.pory"
CatchPokemonCont_Movement_0:
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
# 378 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

testBattle_Text_0:
# 7 "data/maps/Route202/scripts.pory"
	.string "This is a test fight!$"

testBattle_Text_1:
# 7 "data/maps/Route202/scripts.pory"
	.string "Test over!$"

testBattle_Text_2:
# 8 "data/maps/Route202/scripts.pory"
	.string "This is a post battle script!$"

Route202_Youngster_Tristan_Text_0:
# 15 "data/maps/Route202/scripts.pory"
	.string "You’re a Pokémon Trainer, and so am I!\n"
	.string "Our eyes met, so battle we must!\p$"

Route202_Youngster_Tristan_Text_1:
# 16 "data/maps/Route202/scripts.pory"
	.string "Too strong!\n"
	.string "Too strong!$"

Route202_Youngster_Tristan_Text_2:
# 18 "data/maps/Route202/scripts.pory"
	.string "Don’t be shy about talking to\n"
	.string "Trainers you’d like to battle.\p"
	.string "Pokémon grow stronger and stronger\n"
	.string "from battling.$"

Route202_Lass_Natalie_Text_0:
# 28 "data/maps/Route202/scripts.pory"
	.string "I spy, with my little eye...\n"
	.string "A Trainer!\p"
	.string "A battle, please!$"

Route202_Lass_Natalie_Text_1:
# 30 "data/maps/Route202/scripts.pory"
	.string "Oh, boo!\n"
	.string "I can’t win!$"

Route202_Lass_Natalie_Text_2:
# 32 "data/maps/Route202/scripts.pory"
	.string "My Pokémon are all tuckered out!\n"
	.string "I need to go to a Pokémon Center!$"

Route202_Youngster_Logan_Text_0:
# 40 "data/maps/Route202/scripts.pory"
	.string "Let’s have a Pokémon battle!\n$"

Route202_Youngster_Logan_Text_1:
# 41 "data/maps/Route202/scripts.pory"
	.string "Humph! But I’m gonna win!$"

Route202_Youngster_Logan_Text_2:
# 41 "data/maps/Route202/scripts.pory"
	.string "You beat me?!\n"
	.string "You’ve got talent!$"

Route202_Youngster_Logan_Text_3:
# 43 "data/maps/Route202/scripts.pory"
	.string "It was fun battling!\n"
	.string "Yup! I’m going to battle everyone!$"

Route202_Text_Rt202JubilifeCity_Text_0:
# 51 "data/maps/Route202/scripts.pory"
	.string "Rt. 202\n"
	.string "{UP_ARROW} Jubilife City$"

Route202_Text_TrainerTipsPokemonInvolvedInBattleEarnExpPoints_Text_0:
# 59 "data/maps/Route202/scripts.pory"
	.string "Trainer Tips!\p"
	.string "All Pokémon that are involved in\n"
	.string "a battle earn Exp. Points!\p"
	.string "The more your Pokémon battle,\n"
	.string "the stronger they will become.$"

Route202_Text_Rt202SandgemTown_Text_0:
# 70 "data/maps/Route202/scripts.pory"
	.string "Rt. 202\n"
	.string "{DOWN_ARROW}Sandgem Town$"

Route202_Text_SomePokemonOnlyAppearInTheMorning_Text_0:
# 78 "data/maps/Route202/scripts.pory"
	.string "Some Pokémon only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I’ll keep looking till I’ve seen them\n"
	.string "all!$"

CatchPokemonCont_Text_0:
# 296 "data/maps/Route202/scripts.pory"
	.string "{PLAYER}, do you know\n"
	.string "how to catch Pokémon?$"

CatchPokemonCont_Text_1:
# 302 "data/maps/Route202/scripts.pory"
	.string "Oh really...\p"
	.string "I guess it isn't really that hard\n"
	.string "so of course you'd figure it out\n"
	.string "by now...\p"
	.string "Anyway, {PLAYER}, to get you\n"
	.string "started, I’ll give you five\l"
	.string "Poké Balls!$"

CatchPokemonCont_Text_2:
# 315 "data/maps/Route202/scripts.pory"
	.string "Giggle...\n"
	.string "Don't worry it's super easy!\n"
	.string "all you gotta do is go into your bag and\l"
	.string "select which Poké Balls! you wanna use\n"
	.string "and then throw it!\p"
	.string "Simple as that.\p"
	.string "OK, {PLAYER}, to get you\n"
	.string "started, I’ll give you five\l"
	.string "Poké Balls!$"

CatchPokemonCont_Text_3:
# 329 "data/maps/Route202/scripts.pory"
	.string "If you have lots of Pokémon with you,\n"
	.string "you’ll be able to travel farther.\p"
	.string "That way, you’ll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"

CatchPokemonCont_Text_4:
# 345 "data/maps/Route202/scripts.pory"
	.string "Oh really? Wow your just a\n"
	.string "natural at all this then huh?\p"
	.string "Guess that saves me needing to\n"
	.string "demonstrate it then huh?\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

CatchPokemonCont_Text_5:
# 357 "data/maps/Route202/scripts.pory"
	.string "Don't worry it's really easy!\n"
	.string "all you gotta do is go into your bag and\l"
	.string "select which Pokéball you wanna use and\n"
	.string "then throw it!\p"
	.string "Simple as that.\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

Route202_Text_LucasWhyDontYouGoTellYourFamily::
# 388 "data/maps/Route202/scripts.pory"
	.string "Why don’t you go tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"

Route202_Text_DawnYouShouldGoTellYourFamily::
# 395 "data/maps/Route202/scripts.pory"
	.string "You should go tell your family\n"
	.string "that you’re helping the professor.\p"
	.string "The faster the better, too.$"
