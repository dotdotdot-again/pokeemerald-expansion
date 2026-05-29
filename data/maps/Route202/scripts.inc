Route202_MapScripts::
	.byte 0


testBattle::
# 7 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, testBattle_Text_0, testBattle_Text_1
# 8 "data/maps/Route202/scripts.pory"
	msgbox testBattle_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/Route202/scripts.pory"
	waitmessage
	end


testBattle_Text_0:
# 7 "data/maps/Route202/scripts.pory"
	.string "This is a test fight!$"

testBattle_Text_1:
# 7 "data/maps/Route202/scripts.pory"
	.string "Test over!$"

testBattle_Text_2:
# 8 "data/maps/Route202/scripts.pory"
	.string "This is a post battle script!$"
