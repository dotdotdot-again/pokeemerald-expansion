SandgemPokemonCenter_F2_MapScripts::
	.byte 0


Sandgem_Pokecenter_F2_ShopOne::
# 4 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	lock
# 5 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	faceplayer
# 6 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	message Sandgem_Pokecenter_F2_ShopOne_Text_0
# 7 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	waitmessage
# 8 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	pokemart Oreburg_Secondary
# 9 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	msgbox Sandgem_Pokecenter_F2_ShopOne_Text_1
# 10 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
Sandgem_F2_ShopOne:
# 15 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 16 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 17 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 18 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 19 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Sandgem_Pokecenter_F2_ShopTwo::
# 23 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	lock
# 24 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	faceplayer
# 25 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	message Sandgem_Pokecenter_F2_ShopOne_Text_0
# 26 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	waitmessage
# 27 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	pokemart Oreburg_Secondary
# 28 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	msgbox Sandgem_Pokecenter_F2_ShopOne_Text_1
# 29 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	release
	end


	.align 2
# 32 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
Sandgem_F2_ShopTwo:
# 33 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 34 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 35 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 36 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 37 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Sandgem_Pokecenter_F2_ShopOne_Text_0:
# 6 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.string "How may I serve you?$"

Sandgem_Pokecenter_F2_ShopOne_Text_1:
# 9 "data/maps/SandgemPokemonCenter_F2/scripts.pory"
	.string "Please come again.$"
