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
	applymovement SandgemLuda, goSeeYourMom_Movement_0
# 17 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Route202/scripts.pory"
	waitse
# 19 "data/maps/Route202/scripts.pory"
	waitmovementall
# 20 "data/maps/Route202/scripts.pory"
	applymovement SandgemLuda, goSeeYourMom_Movement_1
# 21 "data/maps/Route202/scripts.pory"
	waitmovement
# 22 "data/maps/Route202/scripts.pory"
	checkplayergender
# 23 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq goSeeYourMom_2
# 30 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq goSeeYourMom_3
goSeeYourMom_1:
# 40 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, goSeeYourMom_Movement_2
# 41 "data/maps/Route202/scripts.pory"
	applymovement SandgemLuda, goSeeYourMom_Movement_3
	return

goSeeYourMom_2:
# 26 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_DAWN
# 27 "data/maps/Route202/scripts.pory"
	msgbox SandgemTownLab_Text_DawnImSoGladThatYourKindTowardPokemon, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1

goSeeYourMom_3:
# 33 "data/maps/Route202/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 34 "data/maps/Route202/scripts.pory"
	msgbox goSeeYourMom_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route202/scripts.pory"
	waitmessage
	goto goSeeYourMom_1


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

# 40 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_2:
# 40 "data/maps/Route202/scripts.pory"
	walk_right
# 40 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 41 "data/maps/Route202/scripts.pory"
goSeeYourMom_Movement_3:
# 41 "data/maps/Route202/scripts.pory"
	walk_left
# 41 "data/maps/Route202/scripts.pory"
	walk_left
# 41 "data/maps/Route202/scripts.pory"
	walk_left
# 41 "data/maps/Route202/scripts.pory"
	walk_left
# 41 "data/maps/Route202/scripts.pory"
	face_right
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

goSeeYourMom_Text_0:
# 34 "data/maps/Route202/scripts.pory"
	.string "Why don’t you go tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"
