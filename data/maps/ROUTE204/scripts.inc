ROUTE204_MapScripts::
	.byte 0


Route204South_Text_Rt204JubilifeCity::
# 4 "data/maps/ROUTE204/scripts.pory"
	lock
# 5 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204South_Text_Rt204JubilifeCity_Text_0, MSGBOX_SIGN
# 7 "data/maps/ROUTE204/scripts.pory"
	release
	return


Route204South_Text_RavagedPath::
# 11 "data/maps/ROUTE204/scripts.pory"
	lock
# 12 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204South_Text_Rt204JubilifeCity_Text_0, MSGBOX_SIGN
# 14 "data/maps/ROUTE204/scripts.pory"
	release
	return


Route204South_Text_ThereAreBouldersBlockingTheWayInsideTheCavern::
# 18 "data/maps/ROUTE204/scripts.pory"
	lock
# 19 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204South_Text_ThereAreBouldersBlockingTheWayInsideTheCavern_Text_0, MSGBOX_NPC
	return


Route204_Lass_Sarah::
# 26 "data/maps/ROUTE204/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route204_Lass_Sarah_Text_0, Route204_Lass_Sarah_Text_1
# 29 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204_Lass_Sarah_Text_2, MSGBOX_NPC
# 31 "data/maps/ROUTE204/scripts.pory"
	waitmessage
# 32 "data/maps/ROUTE204/scripts.pory"
	release
	return


Route204_Lass_Samantha::
# 36 "data/maps/ROUTE204/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route204_Lass_Samantha_Text_0, Route204_Lass_Samantha_Text_1
# 39 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204_Lass_Samantha_Text_2, MSGBOX_NPC
# 41 "data/maps/ROUTE204/scripts.pory"
	waitmessage
# 42 "data/maps/ROUTE204/scripts.pory"
	release
	return


Route204_Youngster_Tyler::
# 46 "data/maps/ROUTE204/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route204_Youngster_Tyler_Text_0, Route204_Youngster_Tyler_Text_1
# 49 "data/maps/ROUTE204/scripts.pory"
	msgbox Route204_Youngster_Tyler_Text_2, MSGBOX_NPC
# 52 "data/maps/ROUTE204/scripts.pory"
	waitmessage
# 53 "data/maps/ROUTE204/scripts.pory"
	release
	return


Route204South_Text_Rt204JubilifeCity_Text_0:
# 5 "data/maps/ROUTE204/scripts.pory"
	.string "Rt. 204\n"
	.string "Jubilife City$"

Route204South_Text_ThereAreBouldersBlockingTheWayInsideTheCavern_Text_0:
# 19 "data/maps/ROUTE204/scripts.pory"
	.string "There are boulders blocking the way\n"
	.string "inside the cavern...\p"
	.string "I think a Pokémon’s hidden move will be\n"
	.string "able to smash those boulders, though.$"

Route204_Lass_Sarah_Text_0:
# 26 "data/maps/ROUTE204/scripts.pory"
	.string "Oh, a weak-looking Trainer...\n"
	.string "Do you want to have a go?$"

Route204_Lass_Sarah_Text_1:
# 27 "data/maps/ROUTE204/scripts.pory"
	.string "Aww...\n"
	.string "I should have said no.$"

Route204_Lass_Sarah_Text_2:
# 29 "data/maps/ROUTE204/scripts.pory"
	.string "Oh, you’re so mean!\n"
	.string "I just started training Pokémon!\n$"

Route204_Lass_Samantha_Text_0:
# 36 "data/maps/ROUTE204/scripts.pory"
	.string "May I please trouble you for a\n"
	.string "battle?$"

Route204_Lass_Samantha_Text_1:
# 37 "data/maps/ROUTE204/scripts.pory"
	.string "Oh...\n"
	.string "You’re so strong...$"

Route204_Lass_Samantha_Text_2:
# 39 "data/maps/ROUTE204/scripts.pory"
	.string "Maybe I could have won if my Pokémon\n"
	.string "was holding a Berry...$"

Route204_Youngster_Tyler_Text_0:
# 46 "data/maps/ROUTE204/scripts.pory"
	.string "I’ll beat you with the MAGIKARP my dad\n"
	.string "gave me!$"

Route204_Youngster_Tyler_Text_1:
# 47 "data/maps/ROUTE204/scripts.pory"
	.string "But they’re Pokémon I got from my\n"
	.string "dad...$"

Route204_Youngster_Tyler_Text_2:
# 49 "data/maps/ROUTE204/scripts.pory"
	.string "Who gave you your first Pokémon?\p"
	.string "Your first Pokémon is the one with\n"
	.string "the most fond memories, I think.$"
