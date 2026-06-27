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


goSeeYourMom::
# 15 "data/maps/Route202/scripts.pory"
	lockall
# 16 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 17 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Route202/scripts.pory"
	waitse
# 19 "data/maps/Route202/scripts.pory"
	waitmovementall
# 20 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 21 "data/maps/Route202/scripts.pory"
	waitmovementall
# 22 "data/maps/Route202/scripts.pory"
	checkplayergender
# 23 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMom_2
# 30 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMom_3
goSeeYourMom_1:
# 37 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 38 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_3
# 39 "data/maps/Route202/scripts.pory"
	waitmovementall
# 40 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMom_2:
# 26 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 27 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1

goSeeYourMom_3:
# 33 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 34 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1


goSeeYourMomMid::
# 45 "data/maps/Route202/scripts.pory"
	lockall
# 46 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 47 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 48 "data/maps/Route202/scripts.pory"
	waitse
# 49 "data/maps/Route202/scripts.pory"
	waitmovementall
# 50 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_0
# 51 "data/maps/Route202/scripts.pory"
	waitmovementall
# 52 "data/maps/Route202/scripts.pory"
	checkplayergender
# 53 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomMid_2
# 60 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomMid_3
goSeeYourMomMid_1:
# 67 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 68 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomMid_Movement_1
# 69 "data/maps/Route202/scripts.pory"
	waitmovementall
# 70 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomMid_2:
# 56 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 57 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1

goSeeYourMomMid_3:
# 63 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 64 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomMid_1


goSeeYourMomTop::
# 75 "data/maps/Route202/scripts.pory"
	lockall
# 76 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 77 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 78 "data/maps/Route202/scripts.pory"
	waitse
# 79 "data/maps/Route202/scripts.pory"
	waitmovementall
# 80 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_0
# 81 "data/maps/Route202/scripts.pory"
	waitmovementall
# 82 "data/maps/Route202/scripts.pory"
	checkplayergender
# 83 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomTop_2
# 90 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomTop_3
goSeeYourMomTop_1:
# 97 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 98 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomTop_Movement_1
# 99 "data/maps/Route202/scripts.pory"
	waitmovementall
# 100 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomTop_2:
# 86 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 87 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1

goSeeYourMomTop_3:
# 93 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 94 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomTop_1


goSeeYourMomBottom::
# 105 "data/maps/Route202/scripts.pory"
	lockall
# 106 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 107 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Route202/scripts.pory"
	waitse
# 109 "data/maps/Route202/scripts.pory"
	waitmovementall
# 110 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_0
# 111 "data/maps/Route202/scripts.pory"
	waitmovementall
# 112 "data/maps/Route202/scripts.pory"
	checkplayergender
# 113 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMomBottom_2
# 120 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMomBottom_3
goSeeYourMomBottom_1:
# 127 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 128 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMomBottom_Movement_1
# 129 "data/maps/Route202/scripts.pory"
	waitmovementall
# 130 "data/maps/Route202/scripts.pory"
	releaseall
	return

goSeeYourMomBottom_2:
# 116 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 117 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_DawnYouShouldGoTellYourFamily, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1

goSeeYourMomBottom_3:
# 123 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 124 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_LucasWhyDontYouGoTellYourFamily, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMomBottom_1


CatchPokemon::
# 134 "data/maps/Route202/scripts.pory"
	lockall
# 135 "data/maps/Route202/scripts.pory"
	checkplayergender
# 136 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemon_2
# 140 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemon_3
CatchPokemon_1:
# 144 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_0
# 145 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Route202/scripts.pory"
	waitse
# 147 "data/maps/Route202/scripts.pory"
	waitmovementall
# 148 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, goSeeYourMom_Movement_1
# 149 "data/maps/Route202/scripts.pory"
	waitmovementall
# 150 "data/maps/Route202/scripts.pory"
	call CatchPokemonCont
	return

CatchPokemon_2:
# 138 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_DAWN, 0
	goto CatchPokemon_1

CatchPokemon_3:
# 142 "data/maps/Route202/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
	goto CatchPokemon_1


CatchPokemonCont::
# 156 "data/maps/Route202/scripts.pory"
	checkplayergender
# 157 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_2
# 200 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_3
CatchPokemonCont_1:
# 241 "data/maps/Route202/scripts.pory"
	closemessage
# 242 "data/maps/Route202/scripts.pory"
	fadedefaultbgm
# 243 "data/maps/Route202/scripts.pory"
	applymovement LudaRoute202, CatchPokemonCont_Movement_0
# 244 "data/maps/Route202/scripts.pory"
	waitmovement
# 245 "data/maps/Route202/scripts.pory"
	removeobject LudaRoute202
# 246 "data/maps/Route202/scripts.pory"
	setflag LUDA_ROUTE_202_AGAIN
# 247 "data/maps/Route202/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 4
# 248 "data/maps/Route202/scripts.pory"
	releaseall
	return

CatchPokemonCont_2:
# 160 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 161 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 163 "data/maps/Route202/scripts.pory"
	waitmessage
# 164 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_7
# 177 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_8
CatchPokemonCont_6:
# 193 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 194 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
	goto CatchPokemonCont_1

CatchPokemonCont_3:
# 203 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 204 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_0, MSGBOX_YESNO
# 206 "data/maps/Route202/scripts.pory"
	waitmessage
# 207 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CatchPokemonCont_12
# 219 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CatchPokemonCont_13
CatchPokemonCont_11:
# 233 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 234 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_3
# 239 "data/maps/Route202/scripts.pory"
	waitmessage
	goto CatchPokemonCont_1

CatchPokemonCont_7:
# 166 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 167 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_1
# 174 "data/maps/Route202/scripts.pory"
	waitmessage
# 175 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_8:
# 179 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 180 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_2
# 189 "data/maps/Route202/scripts.pory"
	waitmessage
# 190 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_6

CatchPokemonCont_12:
# 209 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 210 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_4
# 216 "data/maps/Route202/scripts.pory"
	waitmessage
# 217 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11

CatchPokemonCont_13:
# 221 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 222 "data/maps/Route202/scripts.pory"
	msgbox CatchPokemonCont_Text_5
# 229 "data/maps/Route202/scripts.pory"
	waitmessage
# 230 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	goto CatchPokemonCont_11


# 16 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_0:
# 16 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
	step_end

# 20 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_1:
# 20 "data/maps/Route202/scripts.pory"
	walk_right
# 20 "data/maps/Route202/scripts.pory"
	walk_right
# 20 "data/maps/Route202/scripts.pory"
	walk_right
# 20 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 37 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_2:
# 37 "data/maps/Route202/scripts.pory"
	walk_right
# 37 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 38 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_3:
# 38 "data/maps/Route202/scripts.pory"
	walk_right
# 38 "data/maps/Route202/scripts.pory"
	walk_left
# 38 "data/maps/Route202/scripts.pory"
	walk_left
# 38 "data/maps/Route202/scripts.pory"
	walk_left
# 38 "data/maps/Route202/scripts.pory"
	walk_left
# 38 "data/maps/Route202/scripts.pory"
	walk_left
# 38 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 50 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_0:
# 50 "data/maps/Route202/scripts.pory"
	walk_up
# 50 "data/maps/Route202/scripts.pory"
	walk_right
# 50 "data/maps/Route202/scripts.pory"
	walk_right
# 50 "data/maps/Route202/scripts.pory"
	walk_right
# 50 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/Route202/scripts.pory"
goSeeYourMomMid_Movement_1:
# 68 "data/maps/Route202/scripts.pory"
	walk_right
# 68 "data/maps/Route202/scripts.pory"
	walk_left
# 68 "data/maps/Route202/scripts.pory"
	walk_left
# 68 "data/maps/Route202/scripts.pory"
	walk_left
# 68 "data/maps/Route202/scripts.pory"
	walk_left
# 68 "data/maps/Route202/scripts.pory"
	walk_left
# 68 "data/maps/Route202/scripts.pory"
	walk_down
# 68 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 80 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_0:
# 80 "data/maps/Route202/scripts.pory"
	walk_up
# 80 "data/maps/Route202/scripts.pory"
	walk_up
# 80 "data/maps/Route202/scripts.pory"
	walk_right
# 80 "data/maps/Route202/scripts.pory"
	walk_right
# 80 "data/maps/Route202/scripts.pory"
	walk_right
# 80 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/Route202/scripts.pory"
goSeeYourMomTop_Movement_1:
# 98 "data/maps/Route202/scripts.pory"
	walk_right
# 98 "data/maps/Route202/scripts.pory"
	walk_left
# 98 "data/maps/Route202/scripts.pory"
	walk_left
# 98 "data/maps/Route202/scripts.pory"
	walk_left
# 98 "data/maps/Route202/scripts.pory"
	walk_left
# 98 "data/maps/Route202/scripts.pory"
	walk_left
# 98 "data/maps/Route202/scripts.pory"
	walk_down
# 98 "data/maps/Route202/scripts.pory"
	walk_down
# 98 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 110 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_0:
# 110 "data/maps/Route202/scripts.pory"
	walk_down
# 110 "data/maps/Route202/scripts.pory"
	walk_right
# 110 "data/maps/Route202/scripts.pory"
	walk_right
# 110 "data/maps/Route202/scripts.pory"
	walk_right
# 110 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 128 "data/maps/Route202/scripts.pory"
goSeeYourMomBottom_Movement_1:
# 128 "data/maps/Route202/scripts.pory"
	walk_right
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_up
# 128 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 243 "data/maps/Route202/scripts.pory"
CatchPokemonCont_Movement_0:
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
	walk_left
# 243 "data/maps/Route202/scripts.pory"
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

CatchPokemonCont_Text_0:
# 161 "data/maps/Route202/scripts.pory"
	.string "{PLAYER}, do you know\n"
	.string "how to catch Pokémon?$"

CatchPokemonCont_Text_1:
# 167 "data/maps/Route202/scripts.pory"
	.string "Oh really...\p"
	.string "I guess it isn't really that hard\n"
	.string "so of course you'd figure it out\n"
	.string "by now...\p"
	.string "Anyway, {PLAYER}, to get you\n"
	.string "started, I’ll give you five\l"
	.string "Poké Balls!$"

CatchPokemonCont_Text_2:
# 180 "data/maps/Route202/scripts.pory"
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
# 194 "data/maps/Route202/scripts.pory"
	.string "If you have lots of Pokémon with you,\n"
	.string "you’ll be able to travel farther.\p"
	.string "That way, you’ll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"

CatchPokemonCont_Text_4:
# 210 "data/maps/Route202/scripts.pory"
	.string "Oh really? Wow your just a\n"
	.string "natural at all this then huh?\p"
	.string "Guess that saves me needing to\n"
	.string "demonstrate it then huh?\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

CatchPokemonCont_Text_5:
# 222 "data/maps/Route202/scripts.pory"
	.string "Don't worry it's really easy!\n"
	.string "all you gotta do is go into your bag and\l"
	.string "select which Pokéball you wanna use and\n"
	.string "then throw it!\p"
	.string "Simple as that.\p"
	.string "Here, {PLAYER}, I’ll give you\n"
	.string "five Poké Balls to get you started.$"

Route202_Text_LucasWhyDontYouGoTellYourFamily::
# 253 "data/maps/Route202/scripts.pory"
	.string "Why don’t you go tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"

Route202_Text_DawnYouShouldGoTellYourFamily::
# 260 "data/maps/Route202/scripts.pory"
	.string "You should go tell your family\n"
	.string "that you’re helping the professor.\p"
	.string "The faster the better, too.$"
