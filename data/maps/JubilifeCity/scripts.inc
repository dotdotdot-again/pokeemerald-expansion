JubilifeCity_MapScripts::
	.byte 0


test_event::
# 4 "data/maps/JubilifeCity/scripts.pory"
	lock
# 5 "data/maps/JubilifeCity/scripts.pory"
	setspeaker test_event_Text_0
# 6 "data/maps/JubilifeCity/scripts.pory"
	msgbox test_event_Text_1, MSGBOX_NPC
# 7 "data/maps/JubilifeCity/scripts.pory"
	releaseall
	return


test_event_Text_0:
# 5 "data/maps/JubilifeCity/scripts.pory"
	.string "Test$"

test_event_Text_1:
# 6 "data/maps/JubilifeCity/scripts.pory"
	.string "test$"
