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
# 47 "data/maps/PlayerHouseF1/scripts.pory"
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
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_4
# 43 "data/maps/PlayerHouseF1/scripts.pory"
	call after_starter
	return


TalkMom::
# 52 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq TalkMom_1
# 62 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq TalkMom_2
# 62 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TalkMom_2
# 62 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TalkMom_2
# 70 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 2
	goto_if_eq TalkMom_3
# 200 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 201 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 202 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_17, MSGBOX_NPC
# 203 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 204 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 205 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 206 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 207 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 208 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_18, MSGBOX_NPC
# 210 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 211 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_1:
# 54 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 55 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 56 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_0, MSGBOX_NPC
# 60 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_2:
# 64 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 65 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_1, MSGBOX_NPC
# 68 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_3:
# 72 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 73 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 74 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 75 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 80 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 82 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 83 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 84 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 86 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_3, MSGBOX_AUTOCLOSE
# 94 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 95 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_4
# 98 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 99 "data/maps/PlayerHouseF1/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 100 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 101 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_5, MSGBOX_AUTOCLOSE
# 108 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 109 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_1
# 110 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 111 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 112 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_6, MSGBOX_AUTOCLOSE
# 117 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 118 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 119 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 120 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 121 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_7, MSGBOX_AUTOCLOSE
# 131 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 132 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 133 "data/maps/PlayerHouseF1/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 134 "data/maps/PlayerHouseF1/scripts.pory"
	addobject barryMom
# 135 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_2
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_2
# 137 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 138 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 139 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_3
# 141 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 142 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 143 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_9, MSGBOX_AUTOCLOSE
# 145 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 146 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_4
# 147 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 148 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 149 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_10, MSGBOX_AUTOCLOSE
# 151 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 152 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 153 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_11, MSGBOX_AUTOCLOSE
# 160 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 161 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 162 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_12
# 164 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 165 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 166 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_5
# 167 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 168 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_13, MSGBOX_AUTOCLOSE
# 169 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 170 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_0
# 171 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 172 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 173 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_14, MSGBOX_AUTOCLOSE
# 177 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 178 "data/maps/PlayerHouseF1/scripts.pory"
	giveitem ITEM_PARCEL
# 179 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 180 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_15, MSGBOX_AUTOCLOSE
# 182 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 183 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 184 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_16, MSGBOX_AUTOCLOSE
# 189 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 190 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_6
# 191 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 192 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 193 "data/maps/PlayerHouseF1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 194 "data/maps/PlayerHouseF1/scripts.pory"
	removeobject barryMom
# 195 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 196 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 3
# 197 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


PlayerHouseTVF1::
# 216 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq PlayerHouseTVF1_1
	return

PlayerHouseTVF1_1:
# 218 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 219 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker PlayerHouseTVF1_Text_0
# 220 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseTVF1_Text_1, MSGBOX_SIGN
# 228 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


triggerMomTryToLeave::
# 233 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 234 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, triggerMomTryToLeave_Movement_0
# 235 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 236 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 237 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_4
# 238 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 239 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 240 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox triggerMomTryToLeave_Text_0
# 247 "data/maps/PlayerHouseF1/scripts.pory"
	closemessage
# 248 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 249 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
# 250 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


after_starter::
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_0
# 256 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 257 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_1
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, after_starter_Movement_2
# 259 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 260 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 261 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_0
# 275 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 8
# 276 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


PlayerHouseF1_Meow::
# 280 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 281 "data/maps/PlayerHouseF1/scripts.pory"
	playmoncry SPECIES_GLAMEOW, 0
# 282 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseF1_Meow_Text_0, MSGBOX_NPC
# 283 "data/maps/PlayerHouseF1/scripts.pory"
	release
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

# 41 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_4:
# 41 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 73 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_0:
# 73 "data/maps/PlayerHouseF1/scripts.pory"
	face_player
	step_end

# 109 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_1:
# 109 "data/maps/PlayerHouseF1/scripts.pory"
	face_away_player
	step_end

# 135 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_2:
# 135 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
# 135 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 140 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_3:
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	face_right
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
	step_end

# 146 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_4:
# 146 "data/maps/PlayerHouseF1/scripts.pory"
	walk_in_place_down
	step_end

# 166 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_5:
# 166 "data/maps/PlayerHouseF1/scripts.pory"
	face_original_direction
	step_end

# 190 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_6:
# 190 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
	step_end

# 234 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_0:
# 234 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
# 234 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 255 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_0:
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 255 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_1:
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
after_starter_Movement_2:
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 258 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
	step_end

EveryFrameMom_Text_0:
# 27 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don’t know what it was about, but\n"
	.string "he sure was in a hurry!$"

TalkMom_Text_0:
# 56 "data/maps/PlayerHouseF1/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TalkMom_Text_1:
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn’t Barry waiting for you?$"

TalkMom_Text_2:
# 75 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\p"
	.string "It’s so late right now...\n"
	.string "Take a quick rest, dear.$"

TalkMom_Text_3:
# 86 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom’s got your back!\p"
	.string "Oh, I know! {PLAYER}, I’ve got\n"
	.string "something that you’ll find useful.$"

TalkMom_Text_4:
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the {COLOR BLUE}{SHADOW LIGHT_BLUE}Mom's Journal{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

TalkMom_Text_5:
# 101 "data/maps/PlayerHouseF1/scripts.pory"
	.string "That’s a Journal. You can use it to\n"
	.string "keep a record of your daily events.\p"
	.string "Check it, and you’ll be able to\n"
	.string "remember what you need to do.\p"
	.string "I can also be helpful to keep track of\n"
	.string "any tasks or requests your given on\l"
	.string "a record adventure.$"

TalkMom_Text_6:
# 112 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you’re not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TalkMom_Text_7:
# 121 "data/maps/PlayerHouseF1/scripts.pory"
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
# 142 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Barry's Mom$"

TalkMom_Text_9:
# 143 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Excuse me.\n"
	.string "Is my little Barry here?$"

TalkMom_Text_10:
# 149 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh?\n"
	.string "No, he’s not...$"

TalkMom_Text_11:
# 153 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted.\p"
	.string "He’s so headstrong and reckless...\n"
	.string "I at least wanted him to take this...$"

TalkMom_Text_12:
# 162 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

TalkMom_Text_13:
# 168 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Won’t you, {PLAYER}?$"

TalkMom_Text_14:
# 173 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, really?\n"
	.string "You’d do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TalkMom_Text_15:
# 180 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!$"

TalkMom_Text_16:
# 184 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"

TalkMom_Text_17:
# 202 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me heal your pokemon for you.$"

TalkMom_Text_18:
# 209 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Have fun sweetie.$"

PlayerHouseTVF1_Text_0:
# 219 "data/maps/PlayerHouseF1/scripts.pory"
	.string "MC$"

PlayerHouseTVF1_Text_1:
# 220 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Here we are!\n"
	.string "It's the contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Tough Contest is...\p"
	.string "Dominic, who overwhelmed with his\n"
	.string "awesomely buffed Pokémon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"

triggerMomTryToLeave_Text_0:
# 240 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don’t go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don’t, so...\p"
	.string "Well, take care, sweetie!$"

after_starter_Text_0:
# 261 "data/maps/PlayerHouseF1/scripts.pory"
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

PlayerHouseF1_Meow_Text_0:
# 282 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Meorw!$"
