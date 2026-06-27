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
# 38 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameMom_1:
# 17 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 18 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 19 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 20 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_1
# 21 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 22 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_2
# 24 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 25 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 26 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox EveryFrameMom_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, EveryFrameMom_Movement_3
# 32 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 33 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 34 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


TalkMom::
# 43 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq TalkMom_1
# 53 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq TalkMom_2
# 53 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TalkMom_2
# 53 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TalkMom_2
# 61 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_SANDGEM_INTRO_STATE, 2
	goto_if_eq TalkMom_3
# 187 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 188 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 189 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_17, MSGBOX_NPC
# 190 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 191 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 192 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 193 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 194 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 195 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 196 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_18, MSGBOX_NPC
# 197 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 198 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_1:
# 45 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 46 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 47 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_0, MSGBOX_NPC
# 51 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_2:
# 55 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 56 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_1, MSGBOX_NPC
# 59 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return

TalkMom_3:
# 63 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 64 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 65 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 71 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/PlayerHouseF1/scripts.pory"
	special HealPlayerParty
# 73 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_HEAL
# 74 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 75 "data/maps/PlayerHouseF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 77 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_3, MSGBOX_AUTOCLOSE
# 85 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 86 "data/maps/PlayerHouseF1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_4
# 89 "data/maps/PlayerHouseF1/scripts.pory"
	waitfanfare
# 90 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 91 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_5, MSGBOX_AUTOCLOSE
# 95 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_1
# 97 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 98 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 99 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_6, MSGBOX_AUTOCLOSE
# 104 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 105 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 106 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 107 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 108 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_7, MSGBOX_AUTOCLOSE
# 118 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 119 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 120 "data/maps/PlayerHouseF1/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 121 "data/maps/PlayerHouseF1/scripts.pory"
	addobject barryMom
# 122 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_2
# 123 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_2
# 124 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 125 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 126 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_3
# 128 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 129 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 130 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_9, MSGBOX_AUTOCLOSE
# 132 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 133 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_4
# 134 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 135 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_10, MSGBOX_AUTOCLOSE
# 138 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 139 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_11, MSGBOX_AUTOCLOSE
# 147 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 148 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 149 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_12
# 151 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 152 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, TalkMom_Movement_0
# 153 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkMom_Movement_5
# 154 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 155 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_13, MSGBOX_AUTOCLOSE
# 156 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 157 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_0
# 158 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameMom_Movement_0
# 159 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 160 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_14, MSGBOX_AUTOCLOSE
# 164 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 165 "data/maps/PlayerHouseF1/scripts.pory"
	giveitem ITEM_PARCEL
# 166 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 167 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_15, MSGBOX_AUTOCLOSE
# 169 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 170 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker TalkMom_Text_8
# 171 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox TalkMom_Text_16, MSGBOX_AUTOCLOSE
# 176 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 177 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement barryMom, TalkMom_Movement_6
# 178 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 179 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_DOOR
# 180 "data/maps/PlayerHouseF1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 181 "data/maps/PlayerHouseF1/scripts.pory"
	removeobject barryMom
# 182 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 183 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_SANDGEM_INTRO_STATE, 3
# 184 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


PlayerHouseTVF1::
# 203 "data/maps/PlayerHouseF1/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 3
	goto_if_eq PlayerHouseTVF1_1
	return

PlayerHouseTVF1_1:
# 205 "data/maps/PlayerHouseF1/scripts.pory"
	lock
# 206 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker PlayerHouseTVF1_Text_0
# 207 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox PlayerHouseTVF1_Text_1, MSGBOX_SIGN
# 215 "data/maps/PlayerHouseF1/scripts.pory"
	release
	return


triggerMomTryToLeave::
# 220 "data/maps/PlayerHouseF1/scripts.pory"
	lockall
# 221 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, triggerMomTryToLeave_Movement_0
# 222 "data/maps/PlayerHouseF1/scripts.pory"
	playse SE_PIN
# 223 "data/maps/PlayerHouseF1/scripts.pory"
	waitse
# 224 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, triggerMomTryToLeave_Movement_1
# 225 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 226 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 227 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox triggerMomTryToLeave_Text_0
# 234 "data/maps/PlayerHouseF1/scripts.pory"
	closemessage
# 235 "data/maps/PlayerHouseF1/scripts.pory"
	waitmessage
# 236 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
# 237 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


after_starter::
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_0
# 243 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovement
# 244 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement Mom, after_starter_Movement_1
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, after_starter_Movement_2
# 246 "data/maps/PlayerHouseF1/scripts.pory"
	waitmovementall
# 247 "data/maps/PlayerHouseF1/scripts.pory"
	setspeaker SP_NAME_MOM
# 248 "data/maps/PlayerHouseF1/scripts.pory"
	msgbox after_starter_Text_0
# 262 "data/maps/PlayerHouseF1/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 8
# 263 "data/maps/PlayerHouseF1/scripts.pory"
	releaseall
	return


# 18 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_0:
# 18 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 20 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_1:
# 20 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_2:
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 23 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/PlayerHouseF1/scripts.pory"
EveryFrameMom_Movement_3:
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 31 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 64 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_0:
# 64 "data/maps/PlayerHouseF1/scripts.pory"
	face_player
	step_end

# 96 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_1:
# 96 "data/maps/PlayerHouseF1/scripts.pory"
	face_away_player
	step_end

# 122 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_2:
# 122 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
# 122 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
	step_end

# 127 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_3:
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	face_right
# 127 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
	step_end

# 133 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_4:
# 133 "data/maps/PlayerHouseF1/scripts.pory"
	walk_in_place_down
	step_end

# 153 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_5:
# 153 "data/maps/PlayerHouseF1/scripts.pory"
	face_original_direction
	step_end

# 177 "data/maps/PlayerHouseF1/scripts.pory"
TalkMom_Movement_6:
# 177 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_0:
# 221 "data/maps/PlayerHouseF1/scripts.pory"
	emote_exclamation_mark
# 221 "data/maps/PlayerHouseF1/scripts.pory"
	face_down
	step_end

# 224 "data/maps/PlayerHouseF1/scripts.pory"
triggerMomTryToLeave_Movement_1:
# 224 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
	step_end

# 242 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_0:
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_up
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_left
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	face_up
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	delay_16
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 242 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
	step_end

# 244 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_1:
# 244 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 244 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 244 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 244 "data/maps/PlayerHouseF1/scripts.pory"
	face_left
	step_end

# 245 "data/maps/PlayerHouseF1/scripts.pory"
after_starter_Movement_2:
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_down
# 245 "data/maps/PlayerHouseF1/scripts.pory"
	walk_right
	step_end

EveryFrameMom_Text_0:
# 26 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don’t know what it was about, but\n"
	.string "he sure was in a hurry!$"

TalkMom_Text_0:
# 47 "data/maps/PlayerHouseF1/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TalkMom_Text_1:
# 57 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn’t Barry waiting for you?$"

TalkMom_Text_2:
# 66 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\p"
	.string "It’s so late right now...\n"
	.string "Take a quick rest, dear.$"

TalkMom_Text_3:
# 77 "data/maps/PlayerHouseF1/scripts.pory"
	.string "What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom’s got your back!\p"
	.string "Oh, I know! {PLAYER}, I’ve got\n"
	.string "something that you’ll find useful.$"

TalkMom_Text_4:
# 87 "data/maps/PlayerHouseF1/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the {COLOR BLUE}{SHADOW LIGHT_BLUE}Mom's Journal{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

TalkMom_Text_5:
# 91 "data/maps/PlayerHouseF1/scripts.pory"
	.string "That’s a Journal. It keeps a record\n"
	.string "of your daily events.\p"
	.string "Check it, and you’ll be able to\n"
	.string "remember what you did last.$"

TalkMom_Text_6:
# 99 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you’re not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TalkMom_Text_7:
# 108 "data/maps/PlayerHouseF1/scripts.pory"
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
# 129 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Barry's Mom$"

TalkMom_Text_9:
# 130 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Excuse me.\n"
	.string "Is my little Barry here?$"

TalkMom_Text_10:
# 136 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh?\n"
	.string "No, he’s not...$"

TalkMom_Text_11:
# 140 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted.\p"
	.string "He’s so headstrong and reckless...\n"
	.string "I at least wanted him to take this...$"

TalkMom_Text_12:
# 149 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

TalkMom_Text_13:
# 155 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Won’t you, {PLAYER}?$"

TalkMom_Text_14:
# 160 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, really?\n"
	.string "You’d do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TalkMom_Text_15:
# 167 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!$"

TalkMom_Text_16:
# 171 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"

TalkMom_Text_17:
# 189 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Let me heal your pokemon for you.$"

TalkMom_Text_18:
# 196 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Have fun sweetie.$"

PlayerHouseTVF1_Text_0:
# 206 "data/maps/PlayerHouseF1/scripts.pory"
	.string "MC$"

PlayerHouseTVF1_Text_1:
# 207 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Here we are!\n"
	.string "It's the contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Tough Contest is...\p"
	.string "Dominic, who overwhelmed with his\n"
	.string "awesomely buffed Pokémon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"

triggerMomTryToLeave_Text_0:
# 227 "data/maps/PlayerHouseF1/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don’t go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don’t, so...\p"
	.string "Well, take care, sweetie!$"

after_starter_Text_0:
# 248 "data/maps/PlayerHouseF1/scripts.pory"
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
