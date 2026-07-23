SandgemPokemonCenter_MapScripts::
# 2 "data/maps/SandgemPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Sandgem_PokeCenter_Nurse::
# 6 "data/maps/SandgemPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/SandgemPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data/maps/SandgemPokemonCenter/scripts.pory"
	waitmessage
# 9 "data/maps/SandgemPokemonCenter/scripts.pory"
	waitbuttonpress
# 10 "data/maps/SandgemPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SANDGEM_TOWN
# 11 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	end


SandgemTownPokecenter1F_Text_ThatLadyAtTheCounterWillHealYourPokemon::
# 16 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 17 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTownPokecenter1F_Text_ThatLadyAtTheCounterWillHealYourPokemon_Text_0, MSGBOX_NPC
# 21 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTownPokecenter1F_Text_DoYouSeeThatPCOverThere::
# 25 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 26 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTownPokecenter1F_Text_DoYouSeeThatPCOverThere_Text_0, MSGBOX_NPC
# 30 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTownPokecenter1F_Text_TheTopFloorIs::
# 35 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 36 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTownPokecenter1F_Text_TheTopFloorIs_Text_0, MSGBOX_NPC
# 40 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTownPokecenter1F_UndergoundGuy_Stop::
# 45 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 46 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTownPokecenter1F_UndergoundGuy_Stop_Text_0, MSGBOX_NPC
# 49 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTownPokecenter1F_Text_ThatLadyAtTheCounterWillHealYourPokemon_Text_0:
# 17 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokémon.\p"
	.string "She’ll heal your Pokémon to perfect\n"
	.string "health in no time at all!$"

SandgemTownPokecenter1F_Text_DoYouSeeThatPCOverThere_Text_0:
# 26 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "Do you see that PC over there?\n"
	.string "That fancy blue one?\p"
	.string "If you’ve got Pokémon with you,\n"
	.string "it’s free to use.$"

SandgemTownPokecenter1F_Text_TheTopFloorIs_Text_0:
# 36 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "The top floor of any Pokémon Center\n"
	.string "is the Pokémon Trainer Club.\p"
	.string "There, you can get all sorts of\n"
	.string "useful items and resources.$"

SandgemTownPokecenter1F_UndergoundGuy_Stop_Text_0:
# 46 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "Sorry but the basement floor is still \n"
	.string "being remodeled.\p"
	.string "You'll have to comeback another time.$"
