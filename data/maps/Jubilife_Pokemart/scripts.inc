Jubilife_Pokemart_MapScripts::
	.byte 0


Jubilife_Pokemart_Guy::
# 4 "data/maps/Jubilife_Pokemart/scripts.pory"
	lock
# 5 "data/maps/Jubilife_Pokemart/scripts.pory"
	faceplayer
# 6 "data/maps/Jubilife_Pokemart/scripts.pory"
	message Jubilife_Pokemart_Guy_Text_0
# 7 "data/maps/Jubilife_Pokemart/scripts.pory"
	waitmessage
# 8 "data/maps/Jubilife_Pokemart/scripts.pory"
	pokemart Jubilife_Basic
# 9 "data/maps/Jubilife_Pokemart/scripts.pory"
	msgbox Jubilife_Pokemart_Guy_Text_1
# 10 "data/maps/Jubilife_Pokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/Jubilife_Pokemart/scripts.pory"
Jubilife_Basic:
# 15 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 16 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 17 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 18 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_LEMONADE
# 19 "data/maps/Jubilife_Pokemart/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Jubilife_Pokemart_Guy_Text_0:
# 6 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "How may I serve you?$"

Jubilife_Pokemart_Guy_Text_1:
# 9 "data/maps/Jubilife_Pokemart/scripts.pory"
	.string "Please come again.$"
