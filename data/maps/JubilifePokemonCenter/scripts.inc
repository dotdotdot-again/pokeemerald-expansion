JubilifePokemonCenter_MapScripts::
# 2 "data/maps/JubilifePokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Jubilife_PokeCenter_Nurse::
# 6 "data/maps/JubilifePokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/JubilifePokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data/maps/JubilifePokemonCenter/scripts.pory"
	waitmessage
# 9 "data/maps/JubilifePokemonCenter/scripts.pory"
	waitbuttonpress
# 10 "data/maps/JubilifePokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_JUBILIFE_CITY
# 11 "data/maps/JubilifePokemonCenter/scripts.pory"
	release
	end


PCtestThing::
# 16 "data/maps/JubilifePokemonCenter/scripts.pory"
	special ShowPokemonStorageSystemPC
	return

