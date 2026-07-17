OreburghPokemonCenter_MapScripts::
# 2 "data/maps/OreburghPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Oreburgh_PokeCenter_Nurse::
# 6 "data/maps/OreburghPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/OreburghPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data/maps/OreburghPokemonCenter/scripts.pory"
	waitmessage
# 9 "data/maps/OreburghPokemonCenter/scripts.pory"
	waitbuttonpress
# 10 "data/maps/OreburghPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_OREBURGH_CITY
# 11 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	end


OreburghCityPokecenter1F_Text_SwitchOnThePCAtAnyPokemonCenter::
# 16 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 17 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_SwitchOnThePCAtAnyPokemonCenter_Text_0, MSGBOX_NPC
# 23 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_WhatIsYourFavoriteKindOfTrainerCanYouTellMe::
# 27 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 28 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_WhatIsYourFavoriteKindOfTrainerCanYouTellMe_Text_0, MSGBOX_NPC
# 31 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_Kid::
# 35 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 36 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_Kid_Text_0, MSGBOX_NPC
# 37 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_GBA_Kid_one::
# 41 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 42 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_GBA_Kid_one_Text_0, MSGBOX_NPC
# 44 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_GBA_Kid_two::
# 48 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 49 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_GBA_Kid_two_Text_0, MSGBOX_NPC
# 52 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_WhatOrWhoIsThisTeamGalacticItsAMystery::
# 56 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 57 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_WhatOrWhoIsThisTeamGalacticItsAMystery_Text_0, MSGBOX_NPC
# 65 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_Youliketoplaygames::
# 69 "data/maps/OreburghPokemonCenter/scripts.pory"
	lock
# 70 "data/maps/OreburghPokemonCenter/scripts.pory"
	msgbox OreburghCityPokecenter1F_Text_Youliketoplaygames_Text_0, MSGBOX_NPC
# 75 "data/maps/OreburghPokemonCenter/scripts.pory"
	release
	return


OreburghCityPokecenter1F_Text_SwitchOnThePCAtAnyPokemonCenter_Text_0:
# 17 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "Switch on the PC at any Pokémon\n"
	.string "Center.\p"
	.string "Connect to “Someone’s PC” and access\n"
	.string "the Pokémon Storage System.\p"
	.string "That’s all you need to do to store\n"
	.string "or bring out your Pokémon.$"

OreburghCityPokecenter1F_Text_WhatIsYourFavoriteKindOfTrainerCanYouTellMe_Text_0:
# 28 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "Hmmm...!\p"
	.string "What is your favorite kind of Trainer?\n"
	.string "Can you tell me?\p$"

OreburghCityPokecenter1F_Text_Kid_Text_0:
# 36 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "The games downstairs are so fun!$"

OreburghCityPokecenter1F_Text_GBA_Kid_one_Text_0:
# 42 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "I'm fighting my friend!\n"
	.string "In a video game of course$"

OreburghCityPokecenter1F_Text_GBA_Kid_two_Text_0:
# 49 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "He always takes these fights\n"
	.string "so seriously.\p"
	.string "It's just a game dude.$"

OreburghCityPokecenter1F_Text_WhatOrWhoIsThisTeamGalacticItsAMystery_Text_0:
# 57 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "Hmmm!\n"
	.string "What, or who, is this Team Galactic?!\p"
	.string "They make wonderful claims of a dream\n"
	.string "energy source on one hand...\p"
	.string "But rumor has it, they steal Pokémon\n"
	.string "from others by force.\p"
	.string "It’s a mystery! They’re mysterious!\n"
	.string "Isn’t anyone investigating them?$"

OreburghCityPokecenter1F_Text_Youliketoplaygames_Text_0:
# 70 "data/maps/OreburghPokemonCenter/scripts.pory"
	.string "Hmmm\p"
	.string "You seem like someone that likes to\n"
	.string "play games.\p"
	.string "You should check out the new basement\n"
	.string "area.\p$"
