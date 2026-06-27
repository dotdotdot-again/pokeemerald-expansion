Sandgem_Lucas_House_MapScripts::
	.byte 0


SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling::
# 4 "data/maps/Sandgem_Lucas_House/scripts.pory"
	lock
# 6 "data/maps/Sandgem_Lucas_House/scripts.pory"
	checkplayergender
# 7 "data/maps/Sandgem_Lucas_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_2
# 19 "data/maps/Sandgem_Lucas_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_3
SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_1:
# 31 "data/maps/Sandgem_Lucas_House/scripts.pory"
	release
	return

SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_2:
# 10 "data/maps/Sandgem_Lucas_House/scripts.pory"
	msgbox SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_Text_0, MSGBOX_NPC
	goto SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_1

SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_3:
# 22 "data/maps/Sandgem_Lucas_House/scripts.pory"
	msgbox SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_Text_1, MSGBOX_NPC
	goto SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_1


SandgemTownCounterpartHouse1F_Text_SoThatRowanFellowIsBack::
# 35 "data/maps/Sandgem_Lucas_House/scripts.pory"
	lock
# 36 "data/maps/Sandgem_Lucas_House/scripts.pory"
	msgbox SandgemTownCounterpartHouse1F_Text_SoThatRowanFellowIsBack_Text_0, MSGBOX_NPC
# 42 "data/maps/Sandgem_Lucas_House/scripts.pory"
	release
	return


SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_Text_0:
# 10 "data/maps/Sandgem_Lucas_House/scripts.pory"
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You’re {PLAYER}?\p"
	.string "Hey, you’re doing that Pokédex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That’s the same as my big\n"
	.string "sister! Go for it!$"

SandgemTownCounterpartHouse1F_Text_WowYoureDoingTheSameAsMyBigSibling_Text_1:
# 22 "data/maps/Sandgem_Lucas_House/scripts.pory"
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You’re {PLAYER}?\p"
	.string "You’re doing that Pokédex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That’s the same as my big\n"
	.string "brother! Go for it!$"

SandgemTownCounterpartHouse1F_Text_SoThatRowanFellowIsBack_Text_0:
# 36 "data/maps/Sandgem_Lucas_House/scripts.pory"
	.string "Ah, so that Rowan fellow is back?\n"
	.string "He’s quite the remarkable man.\p"
	.string "He’s been studying Pokémon since way,\n"
	.string "way back.\p"
	.string "My son and grandchild help Rowan\n"
	.string "with his studies now.$"
