JubilifeCompanyF2_MapScripts::
	.byte 0


PoketchCo2F_Text_WellTryToThinkLikeATrainerAndFindWhatPoketchAppsWouldBeGood::
# 4 "data/maps/JubilifeCompanyF2/scripts.pory"
	lock
# 5 "data/maps/JubilifeCompanyF2/scripts.pory"
	msgbox PoketchCo2F_Text_WellTryToThinkLikeATrainerAndFindWhatPoketchAppsWouldBeGood_Text_0, MSGBOX_NPC
# 7 "data/maps/JubilifeCompanyF2/scripts.pory"
	release
	return


PoketchCo2F_Text_PokemonWatchThatsPoketchForShort::
# 11 "data/maps/JubilifeCompanyF2/scripts.pory"
	lock
# 12 "data/maps/JubilifeCompanyF2/scripts.pory"
	msgbox PoketchCo2F_Text_PokemonWatchThatsPoketchForShort_Text_0, MSGBOX_NPC
# 18 "data/maps/JubilifeCompanyF2/scripts.pory"
	release
	return


PoketchCo2F_Text_ClefairyCleffy::
# 22 "data/maps/JubilifeCompanyF2/scripts.pory"
	lock
# 23 "data/maps/JubilifeCompanyF2/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, 0
# 24 "data/maps/JubilifeCompanyF2/scripts.pory"
	msgbox PoketchCo2F_Text_ClefairyCleffy_Text_0, MSGBOX_NPC
# 25 "data/maps/JubilifeCompanyF2/scripts.pory"
	release
	return


PoketchCo2F_Text_PachirisuPatchii::
# 29 "data/maps/JubilifeCompanyF2/scripts.pory"
	lock
# 30 "data/maps/JubilifeCompanyF2/scripts.pory"
	playmoncry SPECIES_PACHIRISU, 0
# 31 "data/maps/JubilifeCompanyF2/scripts.pory"
	msgbox PoketchCo2F_Text_PachirisuPatchii_Text_0, MSGBOX_NPC
# 32 "data/maps/JubilifeCompanyF2/scripts.pory"
	release
	return


PoketchCo2F_Text_WellTryToThinkLikeATrainerAndFindWhatPoketchAppsWouldBeGood_Text_0:
# 5 "data/maps/JubilifeCompanyF2/scripts.pory"
	.string "We’ll try to think like a Trainer and find\n"
	.string "what Pokétch apps would be good.$"

PoketchCo2F_Text_PokemonWatchThatsPoketchForShort_Text_0:
# 12 "data/maps/JubilifeCompanyF2/scripts.pory"
	.string "Pokémon Watch!\n"
	.string "That’s Pokétch for short.\p"
	.string "Say it the long way and...\n"
	.string "What does Pokémon stand for again?\p"
	.string "Anyway, I’m the father of the\n"
	.string "president of the Pokétch Company!$"

PoketchCo2F_Text_ClefairyCleffy_Text_0:
# 24 "data/maps/JubilifeCompanyF2/scripts.pory"
	.string "Cleffy?$"

PoketchCo2F_Text_PachirisuPatchii_Text_0:
# 31 "data/maps/JubilifeCompanyF2/scripts.pory"
	.string "Patchii?$"
