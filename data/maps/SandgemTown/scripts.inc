SandgemTown_MapScripts::
# 2 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition_Sandgem
# 3 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrame_Sandgem
	.2byte 0


OnTransition_Sandgem::
# 11 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrame_Sandgem::
# 16 "data/maps/SandgemTown/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 1
	goto_if_eq EveryFrame_Sandgem_1
# 22 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrame_Sandgem_1:
# 18 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_After_Lab_Event
	return


Sandgem_LuDa_Walk_Mid::
# 27 "data/maps/SandgemTown/scripts.pory"
	lockall
# 28 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 29 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 30 "data/maps/SandgemTown/scripts.pory"
	waitse
# 31 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 32 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_1
# 33 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 34 "data/maps/SandgemTown/scripts.pory"
	call Sandgem_LuDa_Cont
	return


Sandgem_LuDa_Cont::
# 39 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 40 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Sandgem_LuDa_Cont_1
# 44 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Sandgem_LuDa_Cont_2
	return

Sandgem_LuDa_Cont_1:
	return

Sandgem_LuDa_Cont_2:
# 47 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 48 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasTheProfsWaitingToSeeYou, MSGBOX_AUTOCLOSE
# 49 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 50 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_0
# 51 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_0
# 52 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 53 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 54 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab
# 55 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 56 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 57 "data/maps/SandgemTown/scripts.pory"
	waitdooranim
# 58 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 59 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Barry
# 60 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_1
# 61 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 63 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Walk_Mid_Movement_0
# 64 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 65 "data/maps/SandgemTown/scripts.pory"
	waitse
# 66 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 67 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 68 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_LuDa_Cont_Text_1, MSGBOX_AUTOCLOSE
# 74 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 75 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Barry, Sandgem_LuDa_Cont_Movement_2
# 76 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_3
# 77 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_3
# 78 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 79 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 80 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_LUCAS
# 81 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_Text_LucasLetsGoIn, MSGBOX_AUTOCLOSE
# 82 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 83 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Cont_Movement_4
# 84 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 85 "data/maps/SandgemTown/scripts.pory"
	removeobject SandgemLuda
# 86 "data/maps/SandgemTown/scripts.pory"
	setflag LUDA_SANDGEM
# 87 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Cont_Movement_5
# 88 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 89 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/SandgemTown/scripts.pory"
	playse SE_EXIT
# 91 "data/maps/SandgemTown/scripts.pory"
	waitse
# 92 "data/maps/SandgemTown/scripts.pory"
	warpcontinuescript MAP_SANDGEM_HOUSE_LAB, 7, 14, EnteringSandgemLab
	return


EnteringSandgemLab::
# 97 "data/maps/SandgemTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 98 "data/maps/SandgemTown/scripts.pory"
	call Intro_In_Sandgem_Lab
	return


Sandgem_After_Lab_Event::
# 103 "data/maps/SandgemTown/scripts.pory"
	lockall
# 104 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_After_Lab_Event_Movement_0
# 105 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 106 "data/maps/SandgemTown/scripts.pory"
	opendoor 10, 9
# 107 "data/maps/SandgemTown/scripts.pory"
	addobject Sandgem_Rowan_Outside
# 108 "data/maps/SandgemTown/scripts.pory"
	clearflag BARRY_INTRO_TWO
# 109 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 110 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 112 "data/maps/SandgemTown/scripts.pory"
	applymovement SandgemLuda, Sandgem_LuDa_Walk_Mid_Movement_0
# 113 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 114 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_LuDa_Walk_Mid_Movement_0
# 115 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 116 "data/maps/SandgemTown/scripts.pory"
	waitse
# 117 "data/maps/SandgemTown/scripts.pory"
	waitmovementall
# 118 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_After_Lab_Event_Movement_1
# 119 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 120 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 121 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_1, MSGBOX_AUTOCLOSE
# 123 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 124 "data/maps/SandgemTown/scripts.pory"
	giveitem ITEM_TM27, 1
# 125 "data/maps/SandgemTown/scripts.pory"
	setspeaker SP_NAME_ROWAN
# 126 "data/maps/SandgemTown/scripts.pory"
	msgbox Sandgem_After_Lab_Event_Text_2, MSGBOX_AUTOCLOSE
# 137 "data/maps/SandgemTown/scripts.pory"
	waitmessage
# 138 "data/maps/SandgemTown/scripts.pory"
	applymovement Sandgem_Rowan_Outside, Sandgem_After_Lab_Event_Movement_2
# 139 "data/maps/SandgemTown/scripts.pory"
	waitmovement
# 140 "data/maps/SandgemTown/scripts.pory"
	removeobject Sandgem_Rowan_Outside
# 141 "data/maps/SandgemTown/scripts.pory"
	setflag BARRY_INTRO_TWO
# 142 "data/maps/SandgemTown/scripts.pory"
	closedoor 10, 9
# 144 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 2
	return


# 28 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_0:
# 28 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Walk_Mid_Movement_1:
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 32 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 50 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_0:
# 50 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 50 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 50 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 50 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 50 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 60 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_1:
# 60 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 75 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_2:
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 75 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

# 76 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_3:
# 76 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 76 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 83 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_4:
# 83 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 83 "data/maps/SandgemTown/scripts.pory"
	walk_fast_left
# 83 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/SandgemTown/scripts.pory"
Sandgem_LuDa_Cont_Movement_5:
# 87 "data/maps/SandgemTown/scripts.pory"
	delay_4
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_0:
# 104 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 118 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_1:
# 118 "data/maps/SandgemTown/scripts.pory"
	delay_8
# 118 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 138 "data/maps/SandgemTown/scripts.pory"
Sandgem_After_Lab_Event_Movement_2:
# 138 "data/maps/SandgemTown/scripts.pory"
	face_up
# 138 "data/maps/SandgemTown/scripts.pory"
	delay_8
	step_end

Sandgem_LuDa_Cont_Text_0:
# 61 "data/maps/SandgemTown/scripts.pory"
	.string "THUD!!!$"

Sandgem_LuDa_Cont_Text_1:
# 68 "data/maps/SandgemTown/scripts.pory"
	.string "What the...\p"
	.string "Oh, it’s you, {PLAYER}!\p"
	.string "That old guy... He’s not scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn’t matter, {PLAYER}.\n"
	.string "I’m out of here. See you later!$"

Sandgem_After_Lab_Event_Text_0:
# 110 "data/maps/SandgemTown/scripts.pory"
	.string "{PLAYER}!!!!!!!!!$"

Sandgem_After_Lab_Event_Text_1:
# 121 "data/maps/SandgemTown/scripts.pory"
	.string "I have something good here.\n"
	.string "You should take this as well.$"

Sandgem_After_Lab_Event_Text_2:
# 126 "data/maps/SandgemTown/scripts.pory"
	.string "That is a Technical Machine.\n"
	.string "That one contains the move Return.\p"
	.string "Using a Technical Machine, or TM for\n"
	.string "short, teaches a move instantly to\l"
	.string "a Pokémon.\p"
	.string "The move Return gains power the more\n"
	.string "friendly your Pokémon is with you.\p"
	.string "It’s up to you, of course, if you want\n"
	.string "to use that TM or not.\p"
	.string "I’ll send you off with the wish that\n"
	.string "your journey will be fun.$"

SandgemTown_Text_DawnTheProfessorIsWaiting::
# 150 "data/maps/SandgemTown/scripts.pory"
	.string "Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_Text_DawnThisIsItOurPokemonResearchLab::
# 156 "data/maps/SandgemTown/scripts.pory"
	.string "This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let’s go...$"

SandgemTown_Text_LucasTheProfsWaitingToSeeYou::
# 163 "data/maps/SandgemTown/scripts.pory"
	.string "Hi! I’ve been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof’s waiting to see you.$"

SandgemTown_Text_LucasSeeThisIsIsOurPokemonResearchLab::
# 169 "data/maps/SandgemTown/scripts.pory"
	.string "See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We’ll just go ahead and...$"

SandgemTown_Text_LucasLetsGoIn::
# 175 "data/maps/SandgemTown/scripts.pory"
	.string "What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway...\n"
	.string "Let’s go in.$"
