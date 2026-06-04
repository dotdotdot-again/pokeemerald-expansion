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
# 45 "data/maps/PlayerHouseF2/scripts.pory"
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
	playbgm MUS_ENCOUNTER_INTERVIEWER, 0
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 38 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 39 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 40 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
# 42 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksRight::
# 51 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 52 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 53 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 54 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 55 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 56 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 57 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 59 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 60 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_1
# 62 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 63 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 64 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 65 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 66 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 67 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 68 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 69 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_2
# 71 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 73 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 74 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 75 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 77 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 78 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 79 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 80 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 81 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 83 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_5
# 85 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 86 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 87 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 88 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 89 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_6
# 91 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 92 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 93 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 94 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 95 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 97 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 98 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksLeft::
# 102 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 103 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 104 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 105 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 106 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 107 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 108 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 109 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 110 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 111 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 112 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_0
# 114 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 115 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 116 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 117 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 118 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 119 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 120 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 121 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_1
# 123 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 124 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 125 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 126 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 127 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 129 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 130 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 131 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 132 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 134 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 135 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_2
# 136 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 137 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 138 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 139 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 140 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksLeft_Movement_3
# 142 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 143 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 144 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 145 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 146 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 147 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 148 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 149 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksDown::
# 154 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 155 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 156 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 157 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 158 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 159 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 160 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 161 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 162 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 163 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 164 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_0
# 166 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 167 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 168 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 169 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 170 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 171 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 172 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 173 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_1
# 175 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 176 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 177 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 178 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 179 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 181 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 182 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 183 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 184 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 186 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 187 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_2
# 188 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 189 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 190 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 191 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 192 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksDown_Movement_3
# 194 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 195 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 196 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 197 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 198 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 199 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 200 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 201 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryWalksUp::
# 206 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 207 "data/maps/PlayerHouseF2/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 208 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 209 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 210 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 211 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 212 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 213 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 214 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_0
# 215 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 216 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_0
# 218 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksUp_Movement_1
# 220 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 221 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryOne
# 222 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 223 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 224 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_0
# 225 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_PIN
# 226 "data/maps/PlayerHouseF2/scripts.pory"
	waitse
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_2
# 228 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 229 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_3
# 230 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 231 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 232 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_1
# 234 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 235 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksRight_Movement_4
# 236 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 237 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryWalksRight_Text_2
# 239 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_3
# 241 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 242 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksUp_Movement_1
# 243 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker SP_NAME_BARRY
# 244 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryLast
# 245 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 246 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement BarryIntroOne, BarryWalksUp_Movement_4
# 248 "data/maps/PlayerHouseF2/scripts.pory"
	waitmovement
# 249 "data/maps/PlayerHouseF2/scripts.pory"
	playse SE_EXIT
# 250 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 251 "data/maps/PlayerHouseF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarryWalksRight_Movement_4
# 252 "data/maps/PlayerHouseF2/scripts.pory"
	fadedefaultbgm
# 253 "data/maps/PlayerHouseF2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 254 "data/maps/PlayerHouseF2/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
# 255 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


BarryEnters::
# 278 "data/maps/PlayerHouseF2/scripts.pory"
	lockall
# 279 "data/maps/PlayerHouseF2/scripts.pory"
	addobject BarryIntroOne
# 280 "data/maps/PlayerHouseF2/scripts.pory"
	setspeaker BarryEnters_Text_0
# 281 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox BarryEnters_Text_1
# 282 "data/maps/PlayerHouseF2/scripts.pory"
	waitmessage
# 283 "data/maps/PlayerHouseF2/scripts.pory"
	closemessage
# 284 "data/maps/PlayerHouseF2/scripts.pory"
	removeobject BarryIntroOne
# 285 "data/maps/PlayerHouseF2/scripts.pory"
	releaseall
	return


Player_PC_text::
# 289 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 290 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_PC_text_Text_0, MSGBOX_SIGN
# 291 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


Player_TV_text::
# 295 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 296 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_TV_text_Text_0, MSGBOX_SIGN
# 297 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


Player_Wii_text::
# 301 "data/maps/PlayerHouseF2/scripts.pory"
	lock
# 302 "data/maps/PlayerHouseF2/scripts.pory"
	msgbox Player_Wii_text_Text_0, MSGBOX_SIGN
# 303 "data/maps/PlayerHouseF2/scripts.pory"
	release
	return


# 12 "data/maps/PlayerHouseF2/scripts.pory"
trigger_test_Movement_0:
# 12 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 54 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_0:
# 54 "data/maps/PlayerHouseF2/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_1:
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 61 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 70 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_2:
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 70 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 72 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_3:
# 72 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 78 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_4:
# 78 "data/maps/PlayerHouseF2/scripts.pory"
	face_right
	step_end

# 84 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_5:
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 84 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 90 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksRight_Movement_6:
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 90 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 113 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_0:
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 113 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 122 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_1:
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 122 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 135 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_2:
# 135 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 135 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 141 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksLeft_Movement_3:
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 141 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 165 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_0:
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 165 "data/maps/PlayerHouseF2/scripts.pory"
	face_left
	step_end

# 174 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_1:
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 174 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
	step_end

# 187 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_2:
# 187 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 187 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 187 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 187 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 193 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksDown_Movement_3:
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 193 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

# 217 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_0:
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 217 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 219 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_1:
# 219 "data/maps/PlayerHouseF2/scripts.pory"
	face_down
	step_end

# 227 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_2:
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_left
# 227 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
	step_end

# 240 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_3:
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_down
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 240 "data/maps/PlayerHouseF2/scripts.pory"
	face_up
	step_end

# 247 "data/maps/PlayerHouseF2/scripts.pory"
BarryWalksUp_Movement_4:
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_up
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
# 247 "data/maps/PlayerHouseF2/scripts.pory"
	walk_fast_right
	step_end

EveryFrameTest_Text_0:
# 32 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Newscaster$"

EveryFrameTest_Text_1:
# 33 "data/maps/PlayerHouseF2/scripts.pory"
	.string "“Pokémon are by our side, always.\n I hope you will understand the meaning\l of those words.”\p"
	.string "That was the comment left by Prof.\n Rowan, who has returned to Sinnoh from\l the Kanto Region.\p"
	.string "That concludges our special program,\n “Let's Ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV\n on Nationwide Net!\p"
	.string "See You next week,\n same time, same channel$"

BarryWalksRight_Text_0:
# 58 "data/maps/PlayerHouseF2/scripts.pory"
	.string "There you are!$"

BarryWalksRight_Text_1:
# 75 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

BarryWalksRight_Text_2:
# 81 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

BarryEnters_Text_0:
# 280 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry$"

BarryEnters_Text_1:
# 281 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Barry!$"

Player_PC_text_Text_0:
# 290 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's your PC$"

Player_TV_text_Text_0:
# 296 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's an ad about the local\n trading station.$"

Player_Wii_text_Text_0:
# 302 "data/maps/PlayerHouseF2/scripts.pory"
	.string "It's your Wii$"

BarryOne::
# 258 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Hey, {PLAYER} \n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan’s that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he’d give us\n"
	.string "some Pokémon!$"

BarryLast::
# 269 "data/maps/PlayerHouseF2/scripts.pory"
	.string "Oh, right, right! We’re going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I’ll be waiting outside.\p"
	.string "OK, {PLAYER}? If you’re late, I’m\n"
	.string "fining you 10 million PokéDollars!$"
