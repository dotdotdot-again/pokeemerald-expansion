PlayerHouseF1_MapScripts::
# 2 "data/maps/PlayerHouseF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionPlayerHouseF1
# 3 "data/maps/PlayerHouseF1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouseF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouseF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PlayerHouseF1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameMom
	.2byte 0


OnTransitionPlayerHouseF1::
# 10 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameMom::
# 15 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 2
	goto_if_eq EveryFrameMom_1
# 37 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 7
	goto_if_eq EveryFrameMom_2
# 48 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameMom_1:
# 17 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 18 "data/maps/PlayerHouseF1/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE_F1
# 19 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 20 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 21 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_1
# 22 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_2
# 25 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 26 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 27 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox EveryFrameMom_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_3
# 33 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 34 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 35 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return

EveryFrameMom_2:
# 40 "data/maps/PlayerHouseF1/scripts.pory"
	setobjectxy Mom, 2, 4
# 41 "data/maps/PlayerHouseF1/scripts.pory"
	setobjectxy Moms_Cat, 1, 4
# 42 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_4
# 44 "data/maps/PlayerHouseF1/scripts.pory"
	call after_starter
	return


TalkMom::
# 53 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq TalkMom_1
# 63 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq TalkMom_2
# 63 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TalkMom_2
# 63 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TalkMom_2
# 71 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 2
	goto_if_eq TalkMom_3
# 201 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 202 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 203 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_17, MSGBOX_NPC
# 204 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 205 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 207 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 208 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 209 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 210 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_18, MSGBOX_NPC
# 211 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 212 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_1:
# 55 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 56 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_0, MSGBOX_NPC
# 61 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_2:
# 65 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 67 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_1, MSGBOX_NPC
# 69 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_3:
# 73 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 74 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 75 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 76 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 81 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 84 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 85 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 87 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_3, MSGBOX_AUTOCLOSE
# 95 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_4
# 99 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 100 "data/maps/PlayerHouseF1/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 101 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 102 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_5, MSGBOX_AUTOCLOSE
# 109 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 110 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_1
# 111 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 112 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 113 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_6, MSGBOX_AUTOCLOSE
# 118 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 119 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 120 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 121 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 122 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_7, MSGBOX_AUTOCLOSE
# 132 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 133 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 134 "data/maps/PlayerHouseF1/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 135 "data/maps/PlayerHouseF1/scripts.pory"
	addobject barryMom
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_2
# 137 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_2
# 138 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 139 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_3
# 142 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 143 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 144 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_9, MSGBOX_AUTOCLOSE
# 146 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 147 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_4
# 148 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 149 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 150 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_10, MSGBOX_AUTOCLOSE
# 152 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 153 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 154 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_11, MSGBOX_AUTOCLOSE
# 161 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 162 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 163 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_12
# 165 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 166 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 167 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_5
# 168 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 169 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_13, MSGBOX_AUTOCLOSE
# 170 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 171 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_0
# 172 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 173 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 174 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_14, MSGBOX_AUTOCLOSE
# 178 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 179 "data/maps/PlayerHouseF1/scripts.pory"
	giveitem ITEM_PARCEL
# 180 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 181 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_15, MSGBOX_AUTOCLOSE
# 183 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 184 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 185 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_16, MSGBOX_AUTOCLOSE
# 190 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 191 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_6
# 192 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 193 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 194 "data/maps/PlayerHouseF1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 195 "data/maps/PlayerHouseF1/scripts.pory"
	removeobject barryMom
# 196 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 197 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 3
# 198 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


PlayerHouseTVF1::
# 217 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq PlayerHouseTVF1_1
	return

PlayerHouseTVF1_1:
# 219 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 220 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker PlayerHouseTVF1_Text_0
# 221 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseTVF1_Text_1, MSGBOX_SIGN
# 229 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


triggerMomTryToLeave::
# 234 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 235 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, triggerMomTryToLeave_Movement_0
# 236 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 237 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 238 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_4
# 239 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 240 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 241 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox triggerMomTryToLeave_Text_0
# 248 "data/maps/PlayerHouseF1/scripts.pory"
	closemessage
# 249 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 250 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
# 251 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


after_starter::
# 256 "data/maps/PlayerHouseF1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_0
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Moms_Cat, after_starter_Movement_1
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, after_starter_Movement_2
# 260 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 261 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 262 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_0
# 276 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 277 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_1
# 285 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 286 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_3
# 287 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 288 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_2
# 291 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 292 "data/maps/PlayerHouseF1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 293 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Moms_Cat, after_starter_Movement_4
# 294 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker after_starter_Text_3
# 295 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_4
# 296 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 297 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_5
# 298 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 299 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_5, MSGBOX_AUTOCLOSE
# 301 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 302 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 8
# 303 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


PlayerHouseF1_Meow::
# 307 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 308 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 8
	goto_if_eq PlayerHouseF1_Meow_1
# 318 "data/maps/PlayerHouseF1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 319 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker after_starter_Text_3
# 320 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Moms_Cat, PlayerHouseF1_Meow_Movement_0
# 321 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseF1_Meow_Text_1, MSGBOX_NPC
# 324 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

PlayerHouseF1_Meow_1:
# 309 "data/maps/PlayerHouseF1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 310 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker after_starter_Text_3
# 311 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Moms_Cat, PlayerHouseF1_Meow_Movement_0
# 312 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseF1_Meow_Text_0, MSGBOX_NPC
	return


# 19 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_0:
# 19 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 21 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_1:
# 21 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_2:
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_3:
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 42 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_4:
# 42 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 74 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_0:
# 74 "data/maps/PlayerHouseF1/scripts.pory"
	face_player
	step_end

# 110 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_1:
# 110 "data/maps/PlayerHouseF1/scripts.pory"
	face_away_player
	step_end

# 136 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_2:
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 141 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_3:
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	face_right
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
	step_end

# 147 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_4:
# 147 "data/maps/PlayerHouseF1/scripts.pory"
	walk_in_place_down
	step_end

# 167 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_5:
# 167 "data/maps/PlayerHouseF1/scripts.pory"
	face_original_direction
	step_end

# 191 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_6:
# 191 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
	step_end

# 235 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_0:
# 235 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
# 235 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 257 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_0:
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
	step_end

# 258 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_1:
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_up
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_up
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_left
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_left
	step_end

# 259 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_2:
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
	step_end

# 286 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_3:
# 286 "data/maps/PlayerHouseF1/scripts.pory"
	face_right
	step_end

# 293 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_4:
# 293 "data/maps/PlayerHouseF1/scripts.pory"
	emote_heart
# 293 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_left
# 293 "data/maps/PlayerHouseF1/scripts.pory"
	jump_in_place_left
	step_end

# 297 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_5:
# 297 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
	step_end

# 311 "data/maps/PlayerHouseF1/scripts.pory"
PlayerHouseF1_Meow_Movement_0:
# 311 "data/maps/PlayerHouseF1/scripts.pory"
	emote_heart
	step_end

EveryFrameMom_Text_0:
# 27 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don’t know what it was about, but\n"
	.string "he sure was in a hurry!$"

TalkMom_Text_0:
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TalkMom_Text_1:
# 67 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn’t Barry waiting for you?$"

TalkMom_Text_2:
# 76 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\p"
	.string "It’s so late right now...\n"
	.string "Take a quick rest, dear.$"

TalkMom_Text_3:
# 87 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom’s got your back!\p"
	.string "Oh, I know! {PLAYER}, I’ve got\n"
	.string "something that you’ll find useful.$"

TalkMom_Text_4:
# 97 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the {COLOR BLUE}{SHADOW LIGHT_BLUE}Mom's Journal{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

TalkMom_Text_5:
# 102 "data/maps/PlayerHouseF1/scripts.pory"
	.string "That’s a Journal. You can use it to\n"
	.string "keep a record of your daily events.\p"
	.string "Check it, and you’ll be able to\n"
	.string "remember what you need to do.\p"
	.string "I can also be helpful to keep track of\n"
	.string "any tasks or requests your given on\l"
	.string "a record adventure.$"

TalkMom_Text_6:
# 113 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you’re not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TalkMom_Text_7:
# 122 "data/maps/PlayerHouseF1/scripts.pory"
	.string "I’m just joking, dear!\n"
	.string "Yup, {PLAYER}!\p"
	.string "I’ll be all right by myself, so you\n"
	.string "go and enjoy your adventure!\p"
	.string "When you’re exposed to new things,\n"
	.string "and experience new sensations...\l"
	.string "It makes your mother happy, too.\p"
	.string "...But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "Pokémon you’ve caught, dear.$"

TalkMom_Text_8:
# 143 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Barry's Mom$"

TalkMom_Text_9:
# 144 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Excuse me.\n"
	.string "Is my little Barry here?$"

TalkMom_Text_10:
# 150 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh?\n"
	.string "No, he’s not...$"

TalkMom_Text_11:
# 154 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted.\p"
	.string "He’s so headstrong and reckless...\n"
	.string "I at least wanted him to take this...$"

TalkMom_Text_12:
# 163 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

TalkMom_Text_13:
# 169 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Won’t you, {PLAYER}?$"

TalkMom_Text_14:
# 174 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, really?\n"
	.string "You’d do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TalkMom_Text_15:
# 181 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!$"

TalkMom_Text_16:
# 185 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"

TalkMom_Text_17:
# 203 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me heal your pokemon for you.$"

TalkMom_Text_18:
# 210 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Have fun sweetie.$"

PlayerHouseTVF1_Text_0:
# 220 "data/maps/PlayerHouseF1/scripts.pory"
	.string "MC$"

PlayerHouseTVF1_Text_1:
# 221 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Here we are!\n"
	.string "It's the contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Tough Contest is...\p"
	.string "Dominic, who overwhelmed with his\n"
	.string "awesomely buffed Pokémon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"

triggerMomTryToLeave_Text_0:
# 241 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don’t go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don’t, so...\p"
	.string "Well, take care, sweetie!$"

after_starter_Text_0:
# 262 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What’s the matter, dear?\p"
	.string "...\p"
	.string "Wow.\n"
	.string "That’s what happened to you?\p"
	.string "You and Barry are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn’t...\p"
	.string "I wouldn’t like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof. Rowan, and\n"
	.string "thank him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn’t it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won’t be so threatening.$"

after_starter_Text_1:
# 277 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, and why don't you try letting\n"
	.string "your Pokémon walk around with you\l"
	.string "outside of it's ball for a bit?\p"
	.string "It may help the two of you grow\n"
	.string "closer together.\p"
	.string "And I'm sure they wouldn't mind\n"
	.string "getting to stretch their legs\l"
	.string "a little bit too.$"

after_starter_Text_2:
# 288 "data/maps/PlayerHouseF1/scripts.pory"
	.string "I know sweet little Glammy here loves\n"
	.string "getting to walk around out of her ball,\l"
	.string "don't you Glammy?$"

after_starter_Text_3:
# 294 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Glammy$"

after_starter_Text_4:
# 295 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Mrow Meow!$"

after_starter_Text_5:
# 299 "data/maps/PlayerHouseF1/scripts.pory"
	.string "And if you need any healing just come\n"
	.string "back to me and I'll fix you two right up.$"

PlayerHouseF1_Meow_Text_0:
# 312 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Meorw Merooow!!\p"
	.string "“Glammy seems happy you\n"
	.string "are ok.”$"

PlayerHouseF1_Meow_Text_1:
# 321 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Meorw!\p"
	.string "“Glammy seems happy to\n"
	.string "see you”$"
