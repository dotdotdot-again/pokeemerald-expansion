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


JubilifeCityPokecenter1F_Text_AllTypesHaveStrengthsAndWeaknesses::
# 20 "data/maps/JubilifePokemonCenter/scripts.pory"
	lock
# 21 "data/maps/JubilifePokemonCenter/scripts.pory"
	msgbox JubilifeCityPokecenter1F_Text_AllTypesHaveStrengthsAndWeaknesses_Text_0, MSGBOX_NPC
# 25 "data/maps/JubilifePokemonCenter/scripts.pory"
	release
	return


JubilifeCityPokecenter1F_Text_InTheUnionRoomUpstairsYouCanChatAndTradeWithOtherPeople::
# 30 "data/maps/JubilifePokemonCenter/scripts.pory"
	lock
# 31 "data/maps/JubilifePokemonCenter/scripts.pory"
	msgbox JubilifeCityPokecenter1F_Text_InTheUnionRoomUpstairsYouCanChatAndTradeWithOtherPeople_Text_0, MSGBOX_NPC
# 35 "data/maps/JubilifePokemonCenter/scripts.pory"
	release
	return


JubilifeCityPokecenter1F_Text_YouCanStillCatchAPokemonIfYouAlreadyHaveSixTravelingWithYou::
# 39 "data/maps/JubilifePokemonCenter/scripts.pory"
	lock
# 40 "data/maps/JubilifePokemonCenter/scripts.pory"
	msgbox JubilifeCityPokecenter1F_Text_YouCanStillCatchAPokemonIfYouAlreadyHaveSixTravelingWithYou_Text_0, MSGBOX_NPC
# 48 "data/maps/JubilifePokemonCenter/scripts.pory"
	release
	return


JubilifeCityPokecenter1F_SomethingIsMissing::
# 52 "data/maps/JubilifePokemonCenter/scripts.pory"
	lock
# 53 "data/maps/JubilifePokemonCenter/scripts.pory"
	msgbox JubilifeCityPokecenter1F_SomethingIsMissing_Text_0, MSGBOX_NPC
# 55 "data/maps/JubilifePokemonCenter/scripts.pory"
	release
	return


JubilifeCityPokecenter1F_Text_AllTypesHaveStrengthsAndWeaknesses_Text_0:
# 21 "data/maps/JubilifePokemonCenter/scripts.pory"
	.string "You know how Pokémon have types like\n"
	.string "Water, Fire, and Grass?\p"
	.string "Well, all types have strengths and\n"
	.string "weaknesses against other types.$"

JubilifeCityPokecenter1F_Text_InTheUnionRoomUpstairsYouCanChatAndTradeWithOtherPeople_Text_0:
# 31 "data/maps/JubilifePokemonCenter/scripts.pory"
	.string "In the Union Room upstairs, you can\n"
	.string "chat and trade with other people.\p"
	.string "And that’s not all you can do.\n"
	.string "Check it out! <change text later>$"

JubilifeCityPokecenter1F_Text_YouCanStillCatchAPokemonIfYouAlreadyHaveSixTravelingWithYou_Text_0:
# 40 "data/maps/JubilifePokemonCenter/scripts.pory"
	.string "You can still catch a Pokémon if you\n"
	.string "already have six traveling with you.\p"
	.string "It automatically gets sent to the PC\n"
	.string "network in Pokémon Centers.\p"
	.string "Knowing that, I can keep on catching\n"
	.string "more and more Pokémon!\p"
	.string "It’ll make it more fun to check\n"
	.string "the PC in any Pokémon Center!$"

JubilifeCityPokecenter1F_SomethingIsMissing_Text_0:
# 53 "data/maps/JubilifePokemonCenter/scripts.pory"
	.string "I feel like somethings\n"
	.string "missing here?$"
