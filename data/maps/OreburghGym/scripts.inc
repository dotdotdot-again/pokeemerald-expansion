OreburghGym_MapScripts::
	.byte 0


Roarck_Gym::
# 5 "data/maps/OreburghGym/scripts.pory"
	lockall
# 6 "data/maps/OreburghGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, Roarck_Gym_2
# 66 "data/maps/OreburghGym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Roarck_Gym_3
Roarck_Gym_1:
# 75 "data/maps/OreburghGym/scripts.pory"
	releaseall
	return

Roarck_Gym_2:
# 8 "data/maps/OreburghGym/scripts.pory"
	applymovement 3, Roarck_Gym_Movement_0
# 9 "data/maps/OreburghGym/scripts.pory"
	setspeaker SP_NAME_ROARK
# 10 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/OreburghGym/scripts.pory"
	waitmessage
# 20 "data/maps/OreburghGym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, Roarck_Gym_Text_1
# 22 "data/maps/OreburghGym/scripts.pory"
	setspeaker SP_NAME_ROARK
# 23 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_2
# 33 "data/maps/OreburghGym/scripts.pory"
	waitmessage
# 34 "data/maps/OreburghGym/scripts.pory"
	closemessage
# 35 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_3, MSGBOX_DEFAULT
# 37 "data/maps/OreburghGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 38 "data/maps/OreburghGym/scripts.pory"
	waitfanfare
# 39 "data/maps/OreburghGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 40 "data/maps/OreburghGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 41 "data/maps/OreburghGym/scripts.pory"
	setvar VAR_0x8008, 1
# 42 "data/maps/OreburghGym/scripts.pory"
	setvar VAR_JUBILIFE_STATE, 7
# 43 "data/maps/OreburghGym/scripts.pory"
	clearflag FLAG_JUB_GAL_EVENT
# 44 "data/maps/OreburghGym/scripts.pory"
	closemessage
# 45 "data/maps/OreburghGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 46 "data/maps/OreburghGym/scripts.pory"
	setspeaker SP_NAME_ROARK
# 47 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_4
# 51 "data/maps/OreburghGym/scripts.pory"
	waitmessage
# 52 "data/maps/OreburghGym/scripts.pory"
	giveitem ITEM_TM_STEALTH_ROCK
# 53 "data/maps/OreburghGym/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GET_FIRST_BADGE
# 54 "data/maps/OreburghGym/scripts.pory"
	setspeaker SP_NAME_ROARK
# 55 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_5, MSGBOX_AUTOCLOSE
# 64 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	goto Roarck_Gym_1

Roarck_Gym_3:
# 68 "data/maps/OreburghGym/scripts.pory"
	setspeaker SP_NAME_ROARK
# 69 "data/maps/OreburghGym/scripts.pory"
	msgbox Roarck_Gym_Text_6, MSGBOX_NPC
# 73 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	goto Roarck_Gym_1


OreburghGym__GymGuide::
# 79 "data/maps/OreburghGym/scripts.pory"
	lock
# 80 "data/maps/OreburghGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, OreburghGym__GymGuide_2
# 106 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym__GymGuide_Text_1, MSGBOX_NPC
# 113 "data/maps/OreburghGym/scripts.pory"
	waitmessage
OreburghGym__GymGuide_1:
# 116 "data/maps/OreburghGym/scripts.pory"
	release
	return

OreburghGym__GymGuide_2:
# 82 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym__GymGuide_Text_0, MSGBOX_NPC
# 101 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	goto OreburghGym__GymGuide_1


OreburghGym_Text_GymStatue::
# 120 "data/maps/OreburghGym/scripts.pory"
	lock
# 121 "data/maps/OreburghGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, OreburghGym_Text_GymStatue_2
# 132 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym_Text_GymStatue_Text_1, MSGBOX_SIGN
# 137 "data/maps/OreburghGym/scripts.pory"
	waitmessage
OreburghGym_Text_GymStatue_1:
# 140 "data/maps/OreburghGym/scripts.pory"
	release
	return

OreburghGym_Text_GymStatue_2:
# 123 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym_Text_GymStatue_Text_0, MSGBOX_SIGN
# 127 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	goto OreburghGym_Text_GymStatue_1


OreburghGym_Jonathon::
# 145 "data/maps/OreburghGym/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, OreburghGym_Jonathon_Text_0, OreburghGym_Jonathon_Text_1
# 148 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym_Jonathon_Text_2, MSGBOX_NPC
# 150 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	return


OreburghGym_Darius::
# 154 "data/maps/OreburghGym/scripts.pory"
	trainerbattle_single TRAINER_DILLON, OreburghGym_Darius_Text_0, OreburghGym_Darius_Text_1
# 157 "data/maps/OreburghGym/scripts.pory"
	msgbox OreburghGym_Darius_Text_2, MSGBOX_NPC
# 159 "data/maps/OreburghGym/scripts.pory"
	waitmessage
	return


# 8 "data/maps/OreburghGym/scripts.pory"
Roarck_Gym_Movement_0:
# 8 "data/maps/OreburghGym/scripts.pory"
	face_player
	step_end

Roarck_Gym_Text_0:
# 10 "data/maps/OreburghGym/scripts.pory"
	.string "Welcome!\n"
	.string "This is the Oreburgh Pokémon Gym!\p"
	.string "I’m Roark, the Gym Leader!\p"
	.string "I’m but one Trainer who decided to\n"
	.string "walk proudly with Rock-type Pokémon!\p"
	.string "As the Gym Leader, I need to see\n"
	.string "your potential as a Trainer.\p"
	.string "And, I’ll need to see the toughness\n"
	.string "of the Pokémon that battle with you!$"

Roarck_Gym_Text_1:
# 20 "data/maps/OreburghGym/scripts.pory"
	.string "W-what? That can’t be!\n"
	.string "My buffed-up Pokémon!$"

Roarck_Gym_Text_2:
# 23 "data/maps/OreburghGym/scripts.pory"
	.string "This is embarrassing...\p"
	.string "I went and lost to a Trainer who\n"
	.string "didn’t have a single Gym Badge...\p"
	.string "But that’s tough. You were strong,\n"
	.string "and I was weak. That’s all there is.\p"
	.string "According to Pokémon League rules,\n"
	.string "I have to give you our Gym Badge\l"
	.string "since you’ve beaten me, the Leader.\p"
	.string "Here’s your official Pokémon League\n"
	.string "Coal Badge.$"

Roarck_Gym_Text_3:
# 35 "data/maps/OreburghGym/scripts.pory"
	.string "{PLAYER} received\n"
	.string "the Coal Badge from Roark!$"

Roarck_Gym_Text_4:
# 47 "data/maps/OreburghGym/scripts.pory"
	.string "Having that Coal Badge means your\n"
	.string "Pokémon can now use the hidden move\l"
	.string "Rock Smash outside of battle.\p"
	.string "You should also take this, too.$"

Roarck_Gym_Text_5:
# 55 "data/maps/OreburghGym/scripts.pory"
	.string "That TM contains\n"
	.string "the move Stealth Rock.\p"
	.string "It’s a move that inflicts damage on\n"
	.string "foes that switch into battle.\p"
	.string "Incidentally, a TM will teach its move\n"
	.string "to a Pokémon instantly.\p"
	.string "And unlike in the old days these\n"
	.string "TM's won't break after one use.\p"
	.string "So feel free to teach it\nto whoever you want!$"

Roarck_Gym_Text_6:
# 69 "data/maps/OreburghGym/scripts.pory"
	.string "In this region of Sinnoh, there are\n"
	.string "seven other Gym Leaders.\p"
	.string "I should warn you--they’re a lot\n"
	.string "tougher than I am!$"

OreburghGym__GymGuide_Text_0:
# 82 "data/maps/OreburghGym/scripts.pory"
	.string "Howdy!\n"
	.string "How’s it going, Champ-to-be?\p"
	.string "That’s what I said to a really\n"
	.string "impatient boy earlier, too.\p"
	.string "The Gym Leader is a user of\n"
	.string "Rock-type Pokémon.\p"
	.string "Well, listen. Rock-type Pokémon\n"
	.string "really hate water, all right?\p"
	.string "They’re also weak to Grass-type\n"
	.string "moves.\p"
	.string "Gee, they sure have weaknesses!\p"
	.string "But don’t think it will be easy.\p"
	.string "You don’t get to be a Gym Leader\n"
	.string "without covering for weaknesses.\p"
	.string "Going after a Rock-type Pokémon\n"
	.string "with a Fire-type Pokémon won’t be\l"
	.string "easy, either.\p"
	.string "That’s all the advice I can give.\n"
	.string "Thanks for listening!$"

OreburghGym__GymGuide_Text_1:
# 106 "data/maps/OreburghGym/scripts.pory"
	.string "Howdy!\n"
	.string "Oh! {PLAYER}!\n"
	.string "You’ve taken care of the Gym Leader!\p"
	.string "So, did my advice come in handy\n"
	.string "or what?\p"
	.string "If my advice was useful, it’d be\n"
	.string "great if you’d become my fan!$"

OreburghGym_Text_GymStatue_Text_0:
# 123 "data/maps/OreburghGym/scripts.pory"
	.string "Oreburgh City Pokémon Gym\n"
	.string "Leader: Roark\p"
	.string "Certified Trainers:\n"
	.string "Barry$"

OreburghGym_Text_GymStatue_Text_1:
# 132 "data/maps/OreburghGym/scripts.pory"
	.string "Oreburgh City Pokémon Gym\n"
	.string "Leader: Roark\p"
	.string "Certified Trainers:\n"
	.string "Barry\l"
	.string "{PLAYER}$"

OreburghGym_Jonathon_Text_0:
# 145 "data/maps/OreburghGym/scripts.pory"
	.string "You avoided the long way around?\n"
	.string "Let’s see why you’d do that!$"

OreburghGym_Jonathon_Text_1:
# 146 "data/maps/OreburghGym/scripts.pory"
	.string "Now I understand why you decided to\n"
	.string "battle with me.$"

OreburghGym_Jonathon_Text_2:
# 148 "data/maps/OreburghGym/scripts.pory"
	.string "You should go whichever way you\n"
	.string "want, shortcut or the long way!$"

OreburghGym_Darius_Text_0:
# 154 "data/maps/OreburghGym/scripts.pory"
	.string "Only those who want to win can\n"
	.string "challenge a Pokémon Gym!$"

OreburghGym_Darius_Text_1:
# 155 "data/maps/OreburghGym/scripts.pory"
	.string "Gggh...\n"
	.string "This is humiliating!$"

OreburghGym_Darius_Text_2:
# 157 "data/maps/OreburghGym/scripts.pory"
	.string "One day, I’m going to become a tough\n"
	.string "Trainer like you.$"
