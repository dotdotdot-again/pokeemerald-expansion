OreburghHouseTwo_MapScripts::
	.byte 0


OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra::
# 4 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 5 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra_Text_0, MSGBOX_NPC
# 9 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly::
# 13 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 14 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly_Text_0, MSGBOX_NPC
# 20 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell::
# 24 "data/maps/OreburghHouseTwo/scripts.pory"
	lock
# 25 "data/maps/OreburghHouseTwo/scripts.pory"
	msgbox OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell_Text_0, MSGBOX_NPC
# 30 "data/maps/OreburghHouseTwo/scripts.pory"
	release
	return


OreburghCityNorthHouse1F_Text_WouldYouBeWillingToTradeYourMachopForMyAbra_Text_0:
# 5 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "Listen, listen. Do you have a Pokémon\n"
	.string "called MACHOP?\p"
	.string "Would you be willing to trade your\n"
	.string "MACHOP for my ABRA?INSERT TRADE EVENT$"

OreburghCityNorthHouse1F_Text_APokemonObtainedInATradeGrowsQuickly_Text_0:
# 14 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "A Pokémon obtained in a trade grows\n"
	.string "quickly.\p"
	.string "But if a Pokémon grows too much, it may\n"
	.string "ignore the Trainer.\p"
	.string "Of course, it won’t matter if you have\n"
	.string "lots of Gym Badges.$"

OreburghCityNorthHouse1F_Text_WhenYouTradeAPokemonTheItemItsHoldingIsTradedAsWell_Text_0:
# 25 "data/maps/OreburghHouseTwo/scripts.pory"
	.string "When you trade a Pokémon, the item it’s\n"
	.string "holding is traded as well.\p"
	.string "That’s pretty cool, huh?\p"
	.string "It means you can send an item as a gift\n"
	.string "along with your Pokémon in a trade!$"
