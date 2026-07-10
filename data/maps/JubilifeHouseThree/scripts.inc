JubilifeHouseThree_MapScripts::
	.byte 0


JubilifeCityCondominiums1F_Text_IsntMyPoketchQuiteFetching::
# 4 "data/maps/JubilifeHouseThree/scripts.pory"
	lock
# 5 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_IsntMyPoketchQuiteFetching_Text_0, MSGBOX_NPC
# 12 "data/maps/JubilifeHouseThree/scripts.pory"
	release
	return


JubilifeCityCondominiums1F_Text_PiikaPi::
# 16 "data/maps/JubilifeHouseThree/scripts.pory"
	lock
# 17 "data/maps/JubilifeHouseThree/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 18 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_PiikaPi_Text_0, MSGBOX_NPC
# 19 "data/maps/JubilifeHouseThree/scripts.pory"
	release
	return


JubilifeCityCondominiums1F_Text_Pachipachii::
# 23 "data/maps/JubilifeHouseThree/scripts.pory"
	lock
# 24 "data/maps/JubilifeHouseThree/scripts.pory"
	playmoncry SPECIES_PACHIRISU, 0
# 25 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_Pachipachii_Text_0, MSGBOX_NPC
# 26 "data/maps/JubilifeHouseThree/scripts.pory"
	release
	return


JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis::
# 30 "data/maps/JubilifeHouseThree/scripts.pory"
	lock
# 31 "data/maps/JubilifeHouseThree/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_1
# 51 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_Text_1, MSGBOX_NPC
	return

JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_1:
# 33 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_Text_0, MSGBOX_NPC
# 36 "data/maps/JubilifeHouseThree/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 37 "data/maps/JubilifeHouseThree/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 38 "data/maps/JubilifeHouseThree/scripts.pory"
	msgbox JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_Text_1, MSGBOX_AUTOCLOSE
# 47 "data/maps/JubilifeHouseThree/scripts.pory"
	release
	return


JubilifeCityCondominiums1F_Text_IsntMyPoketchQuiteFetching_Text_0:
# 5 "data/maps/JubilifeHouseThree/scripts.pory"
	.string "Oh, hello, darlings.\n"
	.string "Isn’t my Pokétch quite fetching?\p"
	.string "It’s the latest design that just\n"
	.string "came out.\p"
	.string "I obtained it instantly, of course.\p"
	.string "A Trainer would be simply lost without\n"
	.string "a Pokétch, after all.$"

JubilifeCityCondominiums1F_Text_PiikaPi_Text_0:
# 18 "data/maps/JubilifeHouseThree/scripts.pory"
	.string "Piika pi!$"

JubilifeCityCondominiums1F_Text_Pachipachii_Text_0:
# 25 "data/maps/JubilifeHouseThree/scripts.pory"
	.string "Pachipachii?$"

JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_Text_0:
# 33 "data/maps/JubilifeHouseThree/scripts.pory"
	.string "Oh, your Pokémon is quite adorable!\p"
	.string "Here, try making it hold this\n"
	.string "Quick Claw.\p$"

JubilifeCityCondominiums1F_Text_YourPokemonIsQuiteAdorableTryMakingItHoldThis_Text_1:
# 38 "data/maps/JubilifeHouseThree/scripts.pory"
	.string "A Pokémon holding that Quick Claw can\n"
	.string "sometimes attack first, even if it is\l"
	.string "normally a little bit slow.\p"
	.string "There are other items that are only\n"
	.string "useful when given to a Pokémon.\p"
	.string "Try finding other items that you can\n"
	.string "make your Pokémon hold.\p"
	.string "...I sound like I’m a teacher or\n"
	.string "something.$"
