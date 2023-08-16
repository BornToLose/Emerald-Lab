// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_APPLE_TAIL

Move_APPLE_TAIL:
	loadspritegfx ANIM_TAG_IMPACT
	loopsewithpan SE_M_HARDEN, SOUND_PAN_ATTACKER, 28, 2
	createvisualtask AnimTask_MetallicShine, 5, 1, 0, RGB_BLACK
	waitforvisualfinish
	monbg ANIM_TARGET
	setalpha 12, 8
	createsprite gHorizontalLungeSpriteTemplate, ANIM_ATTACKER, 2, 4, 4
	delay 6
	createsprite gBasicHitSplatSpriteTemplate, ANIM_TARGET, 2, 0, 0, ANIM_TARGET, 2
	createvisualtask AnimTask_ShakeMon, 2, ANIM_TARGET, 3, 0, 6, 1
	playsewithpan SE_M_VITAL_THROW2, SOUND_PAN_TARGET
	waitforvisualfinish
	createvisualtask AnimTask_SetGrayscaleOrOriginalPal, 5, ANIM_ATTACKER, TRUE
	clearmonbg ANIM_TARGET
	blendoff
	waitforvisualfinish
	end
	

// ----------
// include/constants/moves.h
// ----------

#define MOVE_APPLE_TAIL 829

#define MOVES_COUNT_FAKE 830

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_APPLE_TAIL] = {
    { .songLengthId = 18 },
	{ .songLengthId = 27 },
	{ .songLengthId = 5 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},


// ----------
// src/data/battle_moves.h
// ----------

[MOVE_APPLE_TAIL] =
{
	.effect = EFFECT_DEFENSE_DOWN_HIT,
	.power = 100,
	.type = TYPE_APPLE,
	.accuracy = 75,
	.pp = 15,
	.secondaryEffectChance = 30,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
	.split = SPLIT_PHYSICAL,
	.zMoveEffect = Z_EFFECT_NONE,
},
	

// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sAppleTailDescription[] = _(
    "Attacks with an apple-hard\n"
    "tail. May lower Defense.");
	
[MOVE_APPLE_TAIL - 1] = sAppleTailDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_APPLE_TAIL] = _("Apple Tail"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_APPEARS,
EC_MOVE2(APPLE_TAIL),
EC_WORD_APPRECIATE,