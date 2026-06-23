SandgemTown_MapScripts::
	.byte 0


Sandgem_LuDa_Walk_Mid::
# 6 "data/maps/SandgemTown/scripts.pory"
	lockall
# 7 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 8 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 9 "data/maps/SandgemTown/scripts.pory"
	waitse
# 10 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 11 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 12 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 13 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Cont::
# 18 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 19 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_LuDa_Cont_1
# 23 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_LuDa_Cont_2
	return

Sandgem_LuDa_Cont_1:
	return

Sandgem_LuDa_Cont_2:
# 26 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 27 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasTheProfsWaitingToSeeYou, MSGBOX_AUTOCLOSE
# 28 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 29 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 30 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 31 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 32 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 33 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab
# 34 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 35 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 36 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 37 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 38 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 39 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/SandgemTown/scripts.pory"
	releaseall
	return


# 7 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_0:
# 7 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 11 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_1:
# 11 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 11 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 11 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_0:
# 29 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 29 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 29 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 29 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 29 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 38 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_1:
# 38 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

Sandgem_LuDa_Cont_Text_0:
# 39 "data/maps/SandgemTown/scripts.pory"
	.string "THUD!!!$"

SandgemTown_Text_DawnTheProfessorIsWaiting::
# 47 "data/maps/SandgemTown/scripts.pory"
	.string "Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_Text_DawnThisIsItOurPokemonResearchLab::
# 53 "data/maps/SandgemTown/scripts.pory"
	.string "This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let’s go...$"

SandgemTown_Text_LucasTheProfsWaitingToSeeYou::
# 60 "data/maps/SandgemTown/scripts.pory"
	.string "Hi! I’ve been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof’s waiting to see you.$"

SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab::
# 66 "data/maps/SandgemTown/scripts.pory"
	.string "See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We’ll just go ahead and...\p$"
