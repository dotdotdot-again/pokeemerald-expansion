OreburghHouseTwo_MapScripts::
	.byte 0


OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra::
# 4 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 5 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra_Text_0, MSGBOX_NPC
# 10 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly::
# 14 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 15 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly_Text_0, MSGBOX_NPC
# 21 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell::
# 25 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 26 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell_Text_0, MSGBOX_NPC
# 31 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


Oreburgh_Trade_Girl::
# 35 "data/maps/OreburghHouseTwo/scripts.pory"
	lockall
# 36 "data/maps/OreburghHouseTwo/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_NPC_TRADE_COMPLETED, Oreburgh_Trade_Girl_1
# 50 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox Oreburgh_Trade_Girl_Text_1, MSGBOX_NPC
	return

Oreburgh_Trade_Girl_1:
# 37 "data/maps/OreburghHouseTwo/scripts.pory"
	applymovement 2, Oreburgh_Trade_Girl_Movement_0
# 38 "data/maps/OreburghHouseTwo/scripts.pory"
	ingame_trade INGAME_TRADE_ABRA, Oreburgh_Trade_Girl_Text_0, Oreburgh_Trade_Girl_Decline, Oreburgh_Trade_Girl_Wrong, Oreburgh_Trade_Girl_Text_1
# 43 "data/maps/OreburghHouseTwo/scripts.pory"
	waitmessage
# 44 "data/maps/OreburghHouseTwo/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 45 "data/maps/OreburghHouseTwo/scripts.pory"
	closemessage
# 46 "data/maps/OreburghHouseTwo/scripts.pory"
	releaseall
	return


Oreburgh_Trade_Girl_Wrong::
# 58 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox Oreburgh_Trade_Girl_Wrong_Text_0, MSGBOX_NPC
	return


Oreburgh_Trade_Girl_Decline::
# 63 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox Oreburgh_Trade_Girl_Decline_Text_0, MSGBOX_NPC
	return


# 37 "data/maps/OreburghHouseTwo/scripts.pory"
Oreburgh_Trade_Girl_Movement_0:
# 37 "data/maps/OreburghHouseTwo/scripts.pory"
	face_player
	step_end

OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra_Text_0:
# 5 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "Listen, listen. Do you have a Pokémon\n"
	.string "called MACHOP?\p"
	.string "Would you be willing to trade your\n"
	.string "MACHOP for my ABRA?INSERT TRADE EVENT$"

OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly_Text_0:
# 15 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "A Pokémon obtained in a trade grows\n"
	.string "quickly.\p"
	.string "But if a Pokémon grows too much, it may\n"
	.string "ignore the Trainer.\p"
	.string "Of course, it won’t matter if you have\n"
	.string "lots of Gym Badges.$"

OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell_Text_0:
# 26 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "When you trade a Pokémon, the item it’s\n"
	.string "holding is traded as well.\p"
	.string "That’s pretty cool, huh?\p"
	.string "It means you can send an item as a gift\n"
	.string "along with your Pokémon in a trade!$"

Oreburgh_Trade_Girl_Text_0:
# 38 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "Listen, listen. Do you have a Pokémon\n"
	.string "called Machop?\p"
	.string "Would you be willing to trade your\n"
	.string "Machop for my Abra?$"

Oreburgh_Trade_Girl_Text_1:
# 41 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "Thanks to Pokémon, I got to be\n"
	.string "friends with you!$"

Oreburgh_Trade_Girl_Wrong_Text_0:
# 58 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "What I asked for was a Machop...$"

Oreburgh_Trade_Girl_Decline_Text_0:
# 63 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "Oh, OK...\n"
	.string "Well, I can’t make you trade me.\p"
	.string "But if you change your mind,\n"
	.string "I’ll be right here waiting!$"
