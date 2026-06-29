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


testPokedex::
# 14 "data/maps/Route202/scripts.pory"
	lock
# 15 "data/maps/Route202/scripts.pory"
	msgbox testPokedex_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route202/scripts.pory"
	waitmessage
# 17 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq testPokedex_2
# 22 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq testPokedex_3
# 27 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq testPokedex_4
# 33 "data/maps/Route202/scripts.pory"
	msgbox testPokedex_Text_4, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route202/scripts.pory"
	waitmessage
testPokedex_1:
# 36 "data/maps/Route202/scripts.pory"
	release
	return

testPokedex_2:
# 19 "data/maps/Route202/scripts.pory"
	msgbox testPokedex_Text_1, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route202/scripts.pory"
	waitmessage
	goto testPokedex_1

testPokedex_3:
# 24 "data/maps/Route202/scripts.pory"
	msgbox testPokedex_Text_2, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route202/scripts.pory"
	waitmessage
	goto testPokedex_1

testPokedex_4:
# 29 "data/maps/Route202/scripts.pory"
	msgbox testPokedex_Text_3, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route202/scripts.pory"
	waitmessage
	goto testPokedex_1


goSeeYourMom::
# 41 "data/maps/Route202/scripts.pory"
	lockall
# 42 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 43 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 44 "data/maps/Route202/scripts.pory"
	waitse
# 45 "data/maps/Route202/scripts.pory"
	waitmovementall
# 46 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 47 "data/maps/Route202/scripts.pory"
	waitmovementall
# 48 "data/maps/Route202/scripts.pory"
	checkplayergender
# 49 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMom_2
# 56 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMom_3
goSeeYourMom_1:
# 63 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 64 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_3
# 65 "data/maps/Route202/scripts.pory"
	waitmovementall
# 66 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMom_2:
# 52 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 53 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1

goSeeYourMom_3:
# 59 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 60 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1


goSeeYourMomMid::
# 71 "data/maps/Route202/scripts.pory"
	lockall
# 72 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 73 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 74 "data/maps/Route202/scripts.pory"
	waitse
# 75 "data/maps/Route202/scripts.pory"
	waitmovementall
# 76 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_0
# 77 "data/maps/Route202/scripts.pory"
	waitmovementall
# 78 "data/maps/Route202/scripts.pory"
	checkplayergender
# 79 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomMid_2
# 86 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomMid_3
goSeeYourMomMid_1:
# 93 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 94 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_1
# 95 "data/maps/Route202/scripts.pory"
	waitmovementall
# 96 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomMid_2:
# 82 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 83 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1

goSeeYourMomMid_3:
# 89 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 90 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1


goSeeYourMomTop::
# 101 "data/maps/Route202/scripts.pory"
	lockall
# 102 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 103 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 104 "data/maps/Route202/scripts.pory"
	waitse
# 105 "data/maps/Route202/scripts.pory"
	waitmovementall
# 106 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_0
# 107 "data/maps/Route202/scripts.pory"
	waitmovementall
# 108 "data/maps/Route202/scripts.pory"
	checkplayergender
# 109 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomTop_2
# 116 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomTop_3
goSeeYourMomTop_1:
# 123 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 124 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_1
# 125 "data/maps/Route202/scripts.pory"
	waitmovementall
# 126 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomTop_2:
# 112 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 113 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1

goSeeYourMomTop_3:
# 119 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 120 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1


goSeeYourMomBottom::
# 131 "data/maps/Route202/scripts.pory"
	lockall
# 132 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 133 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 134 "data/maps/Route202/scripts.pory"
	waitse
# 135 "data/maps/Route202/scripts.pory"
	waitmovementall
# 136 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_0
# 137 "data/maps/Route202/scripts.pory"
	waitmovementall
# 138 "data/maps/Route202/scripts.pory"
	checkplayergender
# 139 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomBottom_2
# 146 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomBottom_3
goSeeYourMomBottom_1:
# 153 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 154 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_1
# 155 "data/maps/Route202/scripts.pory"
	waitmovementall
# 156 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomBottom_2:
# 142 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 143 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1

goSeeYourMomBottom_3:
# 149 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 150 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1


CatchPokemon::
# 160 "data/maps/Route202/scripts.pory"
	lockall
# 161 "data/maps/Route202/scripts.pory"
	checkplayergender
# 162 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemon_2
# 166 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemon_3
CatchPokemon_1:
# 170 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 171 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Route202/scripts.pory"
	waitse
# 173 "data/maps/Route202/scripts.pory"
	waitmovementall
# 174 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 175 "data/maps/Route202/scripts.pory"
	waitmovementall
# 176 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemon_2:
# 164 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemon_1

CatchPokemon_3:
# 168 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemon_1


CatchPokemonMid::
# 181 "data/maps/Route202/scripts.pory"
	lockall
# 182 "data/maps/Route202/scripts.pory"
	checkplayergender
# 183 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonMid_2
# 187 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonMid_3
CatchPokemonMid_1:
# 191 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 192 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 193 "data/maps/Route202/scripts.pory"
	waitse
# 194 "data/maps/Route202/scripts.pory"
	waitmovementall
# 195 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_0
# 196 "data/maps/Route202/scripts.pory"
	waitmovementall
# 197 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonMid_2:
# 185 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonMid_1

CatchPokemonMid_3:
# 189 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonMid_1


CatchPokemonTop::
# 201 "data/maps/Route202/scripts.pory"
	lockall
# 202 "data/maps/Route202/scripts.pory"
	checkplayergender
# 203 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonTop_2
# 207 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonTop_3
CatchPokemonTop_1:
# 211 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 212 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 213 "data/maps/Route202/scripts.pory"
	waitse
# 214 "data/maps/Route202/scripts.pory"
	waitmovementall
# 215 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_0
# 216 "data/maps/Route202/scripts.pory"
	waitmovementall
# 217 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonTop_2:
# 205 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonTop_1

CatchPokemonTop_3:
# 209 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonTop_1


CatchPokemonBottom::
# 221 "data/maps/Route202/scripts.pory"
	lockall
# 222 "data/maps/Route202/scripts.pory"
	checkplayergender
# 223 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonBottom_2
# 227 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonBottom_3
CatchPokemonBottom_1:
# 231 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 232 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 233 "data/maps/Route202/scripts.pory"
	waitse
# 234 "data/maps/Route202/scripts.pory"
	waitmovementall
# 235 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_0
# 236 "data/maps/Route202/scripts.pory"
	waitmovementall
# 237 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemonBottom_2:
# 225 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemonBottom_1

CatchPokemonBottom_3:
# 229 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemonBottom_1


CatchPokemonCont::
# 243 "data/maps/Route202/scripts.pory"
	checkplayergender
# 244 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_2
# 287 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_3
CatchPokemonCont_1:
# 328 "data/maps/Route202/scripts.pory"
	closemessage
# 329 "data/maps/Route202/scripts.pory"
	fadedefaultbgm
# 330 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, CatchPokemonCont_Movement_0
# 331 "data/maps/Route202/scripts.pory"
	waitmovement
# 332 "data/maps/Route202/scripts.pory"
	removeobject LudaRoute202
# 333 "data/maps/Route202/scripts.pory"
	setflag LUDA_ROUTE_202_AGAIN
# 334 "data/maps/Route202/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 4
# 335 "data/maps/Route202/scripts.pory"
	releaseall
	return

CatchPokemonCont_2:
# 247 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 248 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 250 "data/maps/Route202/scripts.pory"
	waitmessage
# 251 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_7
# 264 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_8
CatchPokemonCont_6:
# 280 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 281 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
	goto CatchPokemonCont_1

CatchPokemonCont_3:
# 290 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 291 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 293 "data/maps/Route202/scripts.pory"
	waitmessage
# 294 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_12
# 306 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_13
CatchPokemonCont_11:
# 320 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 321 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
# 326 "data/maps/Route202/scripts.pory"
	waitmessage
	goto CatchPokemonCont_1

CatchPokemonCont_7:
# 253 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 254 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_1
# 261 "data/maps/Route202/scripts.pory"
	waitmessage
# 262 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_8:
# 266 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 267 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_2
# 276 "data/maps/Route202/scripts.pory"
	waitmessage
# 277 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_12:
# 296 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 297 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_4
# 303 "data/maps/Route202/scripts.pory"
	waitmessage
# 304 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11

CatchPokemonCont_13:
# 308 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 309 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_5
# 316 "data/maps/Route202/scripts.pory"
	waitmessage
# 317 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11


# 42 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_0:
# 42 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
	step_end

# 46 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_1:
# 46 "data/maps/Route202/scripts.pory"
	walk_right
# 46 "data/maps/Route202/scripts.pory"
	walk_right
# 46 "data/maps/Route202/scripts.pory"
	walk_right
# 46 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_2:
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 64 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_3:
# 64 "data/maps/Route202/scripts.pory"
	walk_right
# 64 "data/maps/Route202/scripts.pory"
	walk_left
# 64 "data/maps/Route202/scripts.pory"
	walk_left
# 64 "data/maps/Route202/scripts.pory"
	walk_left
# 64 "data/maps/Route202/scripts.pory"
	walk_left
# 64 "data/maps/Route202/scripts.pory"
	walk_left
# 64 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 76 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_0:
# 76 "data/maps/Route202/scripts.pory"
	walk_up
# 76 "data/maps/Route202/scripts.pory"
	walk_right
# 76 "data/maps/Route202/scripts.pory"
	walk_right
# 76 "data/maps/Route202/scripts.pory"
	walk_right
# 76 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_1:
# 94 "data/maps/Route202/scripts.pory"
	walk_right
# 94 "data/maps/Route202/scripts.pory"
	walk_left
# 94 "data/maps/Route202/scripts.pory"
	walk_left
# 94 "data/maps/Route202/scripts.pory"
	walk_left
# 94 "data/maps/Route202/scripts.pory"
	walk_left
# 94 "data/maps/Route202/scripts.pory"
	walk_left
# 94 "data/maps/Route202/scripts.pory"
	walk_down
# 94 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 106 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_0:
# 106 "data/maps/Route202/scripts.pory"
	walk_up
# 106 "data/maps/Route202/scripts.pory"
	walk_up
# 106 "data/maps/Route202/scripts.pory"
	walk_right
# 106 "data/maps/Route202/scripts.pory"
	walk_right
# 106 "data/maps/Route202/scripts.pory"
	walk_right
# 106 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 124 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_1:
# 124 "data/maps/Route202/scripts.pory"
	walk_right
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_down
# 124 "data/maps/Route202/scripts.pory"
	walk_down
# 124 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 136 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_0:
# 136 "data/maps/Route202/scripts.pory"
	walk_down
# 136 "data/maps/Route202/scripts.pory"
	walk_right
# 136 "data/maps/Route202/scripts.pory"
	walk_right
# 136 "data/maps/Route202/scripts.pory"
	walk_right
# 136 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 154 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_1:
# 154 "data/maps/Route202/scripts.pory"
	walk_right
# 154 "data/maps/Route202/scripts.pory"
	walk_left
# 154 "data/maps/Route202/scripts.pory"
	walk_left
# 154 "data/maps/Route202/scripts.pory"
	walk_left
# 154 "data/maps/Route202/scripts.pory"
	walk_left
# 154 "data/maps/Route202/scripts.pory"
	walk_left
# 154 "data/maps/Route202/scripts.pory"
	walk_up
# 154 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 330 "data/maps/Route202/scripts.pory"
CatchPokemonCont_Movement_0:
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
	walk_left
# 330 "data/maps/Route202/scripts.pory"
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

testPokedex_Text_0:
# 15 "data/maps/Route202/scripts.pory"
	.string "How many pokedex pokemon you got?$"

testPokedex_Text_1:
# 19 "data/maps/Route202/scripts.pory"
	.string "You have zero pokemon$"

testPokedex_Text_2:
# 24 "data/maps/Route202/scripts.pory"
	.string "You have 1 pokemon$"

testPokedex_Text_3:
# 29 "data/maps/Route202/scripts.pory"
	.string "You have 2 pokemon$"

testPokedex_Text_4:
# 33 "data/maps/Route202/scripts.pory"
	.string "You have more than 2 pokemon$"

CatchPokemonCont_Text_0:
# 248 "data/maps/Route202/scripts.pory"
	.string "{PLAYER}, do you know\n"
	.string "how to catch Pokémon?$"

CatchPokemonCont_Text_1:
# 254 "data/maps/Route202/scripts.pory"
	.string "Oh really...\p"
	.string "I guess it isn't really that hard\n"
	.string "so of course you'd figure it out\n"
	.string "by now...\p"
	.string "Anyway, {PLAYER}, to get you\n"
	.string "started, I’ll give you five\l"
	.string "Poké Balls!$"

CatchPokemonCont_Text_2:
# 267 "data/maps/Route202/scripts.pory"
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
# 281 "data/maps/Route202/scripts.pory"
	.string "If you have lots of Pokémon with you,\n"
	.string "you’ll be able to travel farther.\p"
	.string "That way, you’ll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"

CatchPokemonCont_Text_4:
# 297 "data/maps/Route202/scripts.pory"
	.string "Oh really? Wow your just a\n"
	.string "natural at all this then huh?\p"
	.string "Guess that saves me needing to\n"
	.string "demonstrate it then huh?\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

CatchPokemonCont_Text_5:
# 309 "data/maps/Route202/scripts.pory"
	.string "Don't worry it's really easy!\n"
	.string "all you gotta do is go into your bag and\l"
	.string "select which Pokéball you wanna use and\n"
	.string "then throw it!\p"
	.string "Simple as that.\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

Route202_Text_LucasWhyDontYouGoTellYourFamily::
# 340 "data/maps/Route202/scripts.pory"
	.string "Why don’t you go tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"

Route202_Text_DawnYouShouldGoTellYourFamily::
# 347 "data/maps/Route202/scripts.pory"
	.string "You should go tell your family\n"
	.string "that you’re helping the professor.\p"
	.string "The faster the better, too.$"
