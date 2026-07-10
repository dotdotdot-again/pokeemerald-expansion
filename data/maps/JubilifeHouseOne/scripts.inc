JubilifeHouseOne_MapScripts::
	.byte 0


JubilifeCitySouthHouse1F_PokemonAreWonderfulDeeplyMysteriousCreatures::
# 5 "data/maps/JubilifeHouseOne/scripts.pory"
	lock
# 6 "data/maps/JubilifeHouseOne/scripts.pory"
	msgbox JubilifeCitySouthHouse1F_PokemonAreWonderfulDeeplyMysteriousCreatures_Text_0, MSGBOX_NPC
# 11 "data/maps/JubilifeHouseOne/scripts.pory"
	release
	return


JubilifeCitySouthHouse1F_TalkToEveryoneYouSee::
# 15 "data/maps/JubilifeHouseOne/scripts.pory"
	lock
# 16 "data/maps/JubilifeHouseOne/scripts.pory"
	msgbox JubilifeCitySouthHouse1F_TalkToEveryoneYouSee_Text_0, MSGBOX_NPC
# 25 "data/maps/JubilifeHouseOne/scripts.pory"
	release
	return


JubilifeCitySouthHouse1F_PachirisuKukkuuh::
# 29 "data/maps/JubilifeHouseOne/scripts.pory"
	lock
# 30 "data/maps/JubilifeHouseOne/scripts.pory"
	playmoncry SPECIES_PACHIRISU, 0
# 31 "data/maps/JubilifeHouseOne/scripts.pory"
	msgbox JubilifeCitySouthHouse1F_PachirisuKukkuuh_Text_0, MSGBOX_NPC
# 32 "data/maps/JubilifeHouseOne/scripts.pory"
	release
	return


JubilifeCitySouthHouse1F_PokemonAreWonderfulDeeplyMysteriousCreatures_Text_0:
# 6 "data/maps/JubilifeHouseOne/scripts.pory"
	.string "Pokémon are wonderful, deeply\n"
	.string "mysterious creatures.\p"
	.string "But to Trainers, the key thing is to do\n"
	.string "battle with their Pokémon.\p"
	.string "That’s what it boils down to.$"

JubilifeCitySouthHouse1F_TalkToEveryoneYouSee_Text_0:
# 16 "data/maps/JubilifeHouseOne/scripts.pory"
	.string "Hello there, Trainer!\p"
	.string "If you get stumped and don’t know\n"
	.string "what to do...\p"
	.string "Talk to people!\n"
	.string "Talk to everyone you see!\p"
	.string "Go places!\n"
	.string "Go wherever you can!\p"
	.string "You’ll find many new places by\n"
	.string "doing just that.$"

JubilifeCitySouthHouse1F_PachirisuKukkuuh_Text_0:
# 31 "data/maps/JubilifeHouseOne/scripts.pory"
	.string "Kukkuuh!$"
