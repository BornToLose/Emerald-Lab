// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_BANANA_WING

Move_BANANA_WING:
	loadspritegfx ANIM_TAG_GUST
	loadspritegfx ANIM_TAG_IMPACT
	loopsewithpan SE_M_HARDEN, SOUND_PAN_ATTACKER, 28, 2
	createvisualtask AnimTask_MetallicShine, 5, 0, 0, RGB_BLACK
	waitforvisualfinish
	monbg ANIM_DEF_PARTNER
	splitbgprio ANIM_TARGET
	setalpha 12, 8
	loopsewithpan SE_M_WING_ATTACK, SOUND_PAN_ATTACKER, 20, 2
	createvisualtask AnimTask_TranslateMonElliptical, 2, 0, 12, 4, 1, 4
	createvisualtask AnimTask_AnimateGustTornadoPalette, 5, 1, 70
	createsprite gGustToTargetSpriteTemplate, ANIM_ATTACKER, 2, -25, 0, 0, 0, 20
	createsprite gGustToTargetSpriteTemplate, ANIM_ATTACKER, 2, 25, 0, 0, 0, 20
	delay 24
	createsprite gSlideMonToOffsetSpriteTemplate, ANIM_ATTACKER, 2, 0, 24, 0, 0, 9
	delay 17
	createsprite gBasicHitSplatSpriteTemplate, ANIM_ATTACKER, 2, 16, 0, ANIM_TARGET, 1
	createsprite gBasicHitSplatSpriteTemplate, ANIM_ATTACKER, 2, -16, 0, ANIM_TARGET, 1
	playsewithpan SE_M_RAZOR_WIND, SOUND_PAN_TARGET
	waitforvisualfinish
	createsprite gSlideMonToOriginalPosSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 11
	waitforvisualfinish
	clearmonbg ANIM_DEF_PARTNER
	blendoff
	end
	

// ----------
// include/constants/moves.h
// ----------

#define MOVE_BANANA_WING 829

#define MOVES_COUNT_FAKE 830

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_BANANA_WING] = {
	{ .songLengthId = 14 },
	{ .songLengthId = 13 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
}


// ----------
// src/data/battle_moves.h
// ----------

[MOVE_BANANA_WING] =
{
	.effect = EFFECT_DEFENSE_UP_HIT,
	.power = 70,
	.type = TYPE_BANANA,
	.accuracy = 90,
	.pp = 25,
	.secondaryEffectChance = 10,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
	.split = SPLIT_PHYSICAL,
	.zMoveEffect = Z_EFFECT_NONE,
},
	

// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sBananaWingDescription[] = _(
    "Strikes the foe with ripe\n"
    "wings spread wide.");
	
[MOVE_BANANA_WING - 1] = sBananaWingDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_BANANA_WING] = _("Banana Wing"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_POKEMON(BALTOY),
EC_MOVE2(BANANA_WING),
EC_POKEMON(BANETTE),

