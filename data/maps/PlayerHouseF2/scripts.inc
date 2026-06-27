PlayerHouseF2_MapScripts::
# 5 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTest
# 2 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/PlayerHouseF2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/PlayerHouseF2/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, trigger_test
	.2byte 0

PlayerHouseF2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/PlayerHouseF2/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameTest
	.2byte 0


trigger_test::
# 12 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, trigger_test_Movement_0
# 13 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
	return


OnTransitionTest::
# 20 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameTest::
# 26 "data/maps/PlayerHouseF2/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 0
	goto_if_eq EveryFrameTest_1
# 47 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameTest_1:
# 28 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 29 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 30 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 31 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_PL_TV_BROADCAST, 0
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 35 "data/maps/PlayerHouseF2/scripts.pory"
	fadenewbgm MUS_PL_TV_END
# 36 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 37 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox EveryFrameTest_Text_2
# 40 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 41 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 42 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 43 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
# 44 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksRight::
# 53 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 54 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 55 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 56 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 57 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 59 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 60 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 62 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_1
# 64 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 65 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 66 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 67 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 68 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 69 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 71 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_2
# 73 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 74 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 75 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 76 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 77 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 79 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 80 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 81 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 82 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 83 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_5
# 87 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 88 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 89 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 91 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_6
# 93 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 95 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 96 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 97 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 98 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 99 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 100 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksLeft::
# 104 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 105 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 106 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 107 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 108 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 109 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 110 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 111 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 112 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 114 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_0
# 116 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 117 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 118 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 119 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 120 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 121 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 123 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_1
# 125 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 126 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 127 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 128 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 129 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 131 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 132 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 133 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 134 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 136 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 137 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_2
# 138 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 139 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 140 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 142 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_3
# 144 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 145 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 146 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 147 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 148 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 150 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 151 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksDown::
# 156 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 157 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 158 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 159 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 160 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 161 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 162 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 163 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 164 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 166 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_0
# 168 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 169 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 170 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 171 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 172 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 173 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 175 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_1
# 177 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 178 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 179 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 180 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 181 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 183 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 184 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 185 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 186 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 188 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_2
# 190 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 191 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 192 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 194 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_3
# 196 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 197 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 198 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 199 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 200 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 201 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 202 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 203 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksUp::
# 208 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 209 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 210 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 211 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 212 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 213 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 214 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 215 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 216 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 218 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_0
# 220 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 221 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksUp_Movement_1
# 222 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 223 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 224 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 225 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 226 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 228 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_2
# 230 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 231 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 232 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 233 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 234 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 236 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 237 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 238 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 239 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 241 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_3
# 243 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 244 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksUp_Movement_1
# 245 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 246 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 248 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_4
# 250 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 251 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 252 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 253 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 254 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 255 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 256 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 257 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryEnters::
# 280 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 281 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 282 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker BarryEnters_Text_0
# 283 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryEnters_Text_1
# 284 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 285 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 286 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 287 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


Player_PC_text::
# 291 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 292 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_PC_text_Text_0, MSGBOX_SIGN
# 293 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


Player_TV_text::
# 297 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 298 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_TV_text_Text_0, MSGBOX_SIGN
# 299 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


Player_Wii_text::
# 303 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 304 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_Wii_text_Text_0, MSGBOX_SIGN
# 305 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


# 12 "data/maps/PlayerHouseF2/scripts.pory"
trigger_test_Movement_0:
# 12 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 56 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_0:
# 56 "data/maps/PlayerHouseF2/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_1:
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 72 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_2:
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 74 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_3:
# 74 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 80 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_4:
# 80 "data/maps/PlayerHouseF2/scripts.pory"
	face_right
	step_end

# 86 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_5:
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 92 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_6:
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 115 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_0:
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 124 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_1:
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 137 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_2:
# 137 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 137 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 143 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_3:
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 167 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_0:
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 176 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_1:
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
	step_end

# 189 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_2:
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 195 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_3:
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_0:
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 221 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_1:
# 221 "data/maps/PlayerHouseF2/scripts.pory"
	face_down
	step_end

# 229 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_2:
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
	step_end

# 242 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_3:
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 249 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_4:
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

EveryFrameTest_Text_0:
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Newscaster$"

EveryFrameTest_Text_1:
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	.string "“Pokémon are by our side, always.\n I hope you will understand the meaning\l of those words.”\p"
	.string "That was the comment left by Prof.\n Rowan, who has returned to Sinnoh from\l the Kanto Region.$"

EveryFrameTest_Text_2:
# 37 "data/maps/PlayerHouseF2/scripts.pory"
	.string "That concludges our special program,\n “Let's Ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV\n on Nationwide Net!\p"
	.string "See You next week,\n same time, same channel$"

BarryWalksRight_Text_0:
# 60 "data/maps/PlayerHouseF2/scripts.pory"
	.string "There you are!$"

BarryWalksRight_Text_1:
# 77 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

BarryWalksRight_Text_2:
# 83 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

BarryEnters_Text_0:
# 282 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry$"

BarryEnters_Text_1:
# 283 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry!$"

Player_PC_text_Text_0:
# 292 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's your PC$"

Player_TV_text_Text_0:
# 298 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's an ad about the local\n trading station.$"

Player_Wii_text_Text_0:
# 304 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's your Wii$"

BarryOne::
# 260 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Hey, {PLAYER} \n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan’s that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he’d give us\n"
	.string "some Pokémon!$"

BarryLast::
# 271 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, right, right! We’re going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I’ll be waiting outside.\p"
	.string "OK, {PLAYER}? If you’re late, I’m\n"
	.string "fining you 10 million PokéDollars!$"
