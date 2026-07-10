Jubilife_Gate_MapScripts::
	.byte 0


Route218GateToJubilifeCity_Text_OldRodGoodRight::
# 4 "data/maps/Jubilife_Gate/scripts.pory"
	lockall
# 5 "data/maps/Jubilife_Gate/scripts.pory"
	applymovement 1, Route218GateToJubilifeCity_Text_OldRodGoodRight_Movement_0
# 6 "data/maps/Jubilife_Gate/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, Route218GateToJubilifeCity_Text_OldRodGoodRight_1
# 34 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_3, MSGBOX_YESNO
# 37 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_8
# 71 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_9
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_1:
# 8 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_0, MSGBOX_YESNO
# 12 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_4
# 22 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_5
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_4:
# 14 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_1
# 19 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 20 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_5:
# 24 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_2
# 29 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 30 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_8:
# 39 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_4, MSGBOX_AUTOCLOSE
# 43 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 44 "data/maps/Jubilife_Gate/scripts.pory"
	giveitem ITEM_OLD_ROD
# 45 "data/maps/Jubilife_Gate/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 46 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_0, MSGBOX_YESNO
# 50 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_12
# 60 "data/maps/Jubilife_Gate/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route218GateToJubilifeCity_Text_OldRodGoodRight_13
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_9:
# 73 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_5, MSGBOX_AUTOCLOSE
# 75 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 76 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_12:
# 52 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_1
# 57 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 58 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return

Route218GateToJubilifeCity_Text_OldRodGoodRight_13:
# 62 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_2
# 67 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 68 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return


Route218GateToJubilifeCity_Text_GreatFishingHole::
# 83 "data/maps/Jubilife_Gate/scripts.pory"
	lockall
# 84 "data/maps/Jubilife_Gate/scripts.pory"
	msgbox Route218GateToJubilifeCity_Text_GreatFishingHole_Text_0, MSGBOX_NPC
# 86 "data/maps/Jubilife_Gate/scripts.pory"
	waitmessage
# 87 "data/maps/Jubilife_Gate/scripts.pory"
	releaseall
	return


# 5 "data/maps/Jubilife_Gate/scripts.pory"
Route218GateToJubilifeCity_Text_OldRodGoodRight_Movement_0:
# 5 "data/maps/Jubilife_Gate/scripts.pory"
	face_player
	step_end

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_0:
# 8 "data/maps/Jubilife_Gate/scripts.pory"
	.string "You should fish wherever there is\n"
	.string "a body of water.\p"
	.string "Oh, and by the way, did you need\n"
	.string "any tips on using that fishing rod?$"

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_1:
# 14 "data/maps/Jubilife_Gate/scripts.pory"
	.string "First, you face any body of water,\n"
	.string "then you use your fishing rod.\p"
	.string "Next, you focus!\n"
	.string "If a Pokémon bites, “!” appears.\l"
	.string "That’s your cue to reel it in!$"

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_2:
# 24 "data/maps/Jubilife_Gate/scripts.pory"
	.string "When you’re fishing for Pokémon,\n"
	.string "the first hurdle is getting a bite.\p"
	.string "When you reel the Pokémon in, you’ve\n"
	.string "got to battle it.\p"
	.string "So, fishing gives you twice the fun!$"

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_3:
# 34 "data/maps/Jubilife_Gate/scripts.pory"
	.string "Yes, sir!\n"
	.string "An Old Rod is a good thing!\p"
	.string "You think so too, am I right?$"

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_4:
# 39 "data/maps/Jubilife_Gate/scripts.pory"
	.string "Yes! Good answer!\n"
	.string "We can be friends!\p"
	.string "Here you go.\n"
	.string "That’s my Old Rod!$"

Route218GateToJubilifeCity_Text_OldRodGoodRight_Text_5:
# 73 "data/maps/Jubilife_Gate/scripts.pory"
	.string "Oh, really?\n"
	.string "You don’t like to fish?$"

Route218GateToJubilifeCity_Text_GreatFishingHole_Text_0:
# 84 "data/maps/Jubilife_Gate/scripts.pory"
	.string "Route 218 up ahead is a great fishing\n"
	.string "hole that’s almost unknown to people.$"
