// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_ORANGE_WAVE
.4byte Move_ORANGE_BOLT
.4byte Move_ORANGE_CRUSH
.4byte Move_ZEST

Move_ORANGE_WAVE:
	loadspritegfx ANIM_TAG_SPARK
	loadspritegfx ANIM_TAG_SPARK_2
	loadspritegfx ANIM_TAG_SPARK_H
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 0, 6, RGB_BLACK
	waitforvisualfinish
	delay 10
	createvisualtask AnimTask_ElectricBolt, 5, 0, -48, 0
	playsewithpan SE_M_THUNDER_WAVE, SOUND_PAN_TARGET
	delay 20
	loopsewithpan SE_M_THUNDERBOLT2, SOUND_PAN_TARGET, 10, 4
	createsprite gThunderWaveSpriteTemplate, ANIM_TARGET, 2, -16, -16
	delay 4
	createsprite gThunderWaveSpriteTemplate, ANIM_TARGET, 2, -16, 0
	delay 4
	createsprite gThunderWaveSpriteTemplate, ANIM_TARGET, 2, -16, 16
	waitforvisualfinish
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 6, 0, RGB_BLACK
	waitforvisualfinish
	end


Move_ORANGE_BOLT:
	loadspritegfx ANIM_TAG_SPARK
	loadspritegfx ANIM_TAG_SHOCK_3
	loadspritegfx ANIM_TAG_SPARK_2
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 0, 6, RGB_BLACK
	waitforvisualfinish
	delay 10
	createvisualtask AnimTask_ElectricBolt, 5, 24, -52, 0
	playsewithpan SE_M_THUNDERBOLT, SOUND_PAN_TARGET
	delay 7
	createvisualtask AnimTask_ElectricBolt, 5, -24, -52, 0
	playsewithpan SE_M_THUNDERBOLT, SOUND_PAN_TARGET
	delay 7
	createvisualtask AnimTask_ElectricBolt, 5, 0, -60, 1
	playsewithpan SE_M_THUNDERBOLT, SOUND_PAN_TARGET
	delay 9
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_TARGET, 0, 0, 13, RGB_BLACK
	waitforvisualfinish
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_TARGET, 0, 13, 0, RGB_BLACK
	waitforvisualfinish
	delay 20
	createsprite gThunderboltOrbSpriteTemplate, ANIM_TARGET, 3, 44, 0, 0, 3
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 32, 44, 0, 40, 0, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 32, 44, 64, 40, 1, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 32, 44, 128, 40, 0, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 32, 44, 192, 40, 2, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 16, 44, 32, 40, 0, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 16, 44, 96, 40, 1, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 16, 44, 160, 40, 0, -32765
	createsprite gSparkElectricityFlashingSpriteTemplate, ANIM_TARGET, 4, 0, 0, 16, 44, 224, 40, 2, -32765
	playsewithpan SE_M_HYPER_BEAM, SOUND_PAN_TARGET
	delay 0
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 2, 2, RGB_BLACK
	delay 6
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 6, 6, RGB_BLACK
	delay 6
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 2, 2, RGB_BLACK
	delay 6
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 6, 6, RGB_BLACK
	waitforvisualfinish
	delay 20
	waitplaysewithpan SE_M_THUNDERBOLT2, SOUND_PAN_TARGET, 19
	call ElectricityEffect
	waitforvisualfinish
	delay 20
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_BG, 0, 6, 0, RGB_BLACK
	waitforvisualfinish
	end

Move_ORANGE_CRUSH:
	loadspritegfx ANIM_TAG_LIGHTNING
	fadetobg BG_THUNDER
	waitbgfadeout
	createvisualtask AnimTask_StartSlidingBg, 5, -256, 0, 1, -1
	waitbgfadein
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_ATTACKER, 2, F_PAL_BG, 2, 0, 16, RGB_BLACK
	delay 16
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	playsewithpan SE_M_THUNDER_WAVE, SOUND_PAN_TARGET
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 16, -36
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 16, -20
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 16, 12
	delay 20
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 6, -16, -32
	playsewithpan SE_M_THUNDER_WAVE, SOUND_PAN_TARGET
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 6, -16, -16
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 6, -16, 16
	playsewithpan SE_M_THUNDER_WAVE, SOUND_PAN_TARGET
	delay 5
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 24, -32
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 24, -16
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 24, 16
	delay 30
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	delay 5
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 0, -32
	playsewithpan SE_M_TRI_ATTACK2, SOUND_PAN_TARGET
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 0, -16
	delay 1
	createsprite gLightningSpriteTemplate, ANIM_TARGET, 2, 0, 16
	delay 10
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	delay 1
	createvisualtask AnimTask_ShakeTargetInPattern, 2, 30, 3, TRUE, 0
	delay 2
	createvisualtask AnimTask_InvertScreenColor, 2, 0x1 | 0x2 | 0x4
	delay 1
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_TARGET, 2, F_PAL_BG, 2, 16, 0, RGB_BLACK
	waitforvisualfinish
	restorebg
	waitbgfadeout
	setarg 7, 0xFFFF
	waitbgfadein
	end
	
Move_ZEST:
	playsewithpan SE_M_SNORE, SOUND_PAN_ATTACKER
	loadspritegfx ANIM_TAG_LETTER_Z
	createsprite gSleepLetterZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	delay 20
	createsprite gSleepLetterZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	delay 20
	createsprite gSleepLetterZSpriteTemplate, ANIM_ATTACKER, 2, 4, -10, 16, 0, 0
	waitforvisualfinish
	end


// ----------
// include/constants/moves.h
// ----------

.4byte Move_ORANGE_WAVE
.4byte Move_ORANGE_BOLT
.4byte Move_ORANGE_CRUSH
.4byte Move_ZEST

#define MOVE_ORANGE_WAVE 832
#define MOVE_ORANGE_BOLT 833
#define MOVE_ORANGE_CRUSH 834
#define MOVE_ZEST 835

#define MOVES_COUNT_FAKE 833

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/battle_anim_electric.c
// ----------

void AnimThunderWave(struct Sprite *sprite)
{
	/* [...] */
	
    if (gAnimMoveIndex == MOVE_THUNDER_WAVE || gAnimMoveIndex == MOVE_ORANGE_WAVE)
        spriteId = CreateSprite(&gThunderWaveSpriteTemplate, sprite->x + 32, sprite->y, sprite->subpriority);
    else
        spriteId = CreateSprite(&gAnchorShotChainTemplate, sprite->x + 32, sprite->y, sprite->subpriority);

	/* [...] */
}


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_ORANGE_WAVE] = {
	{ .songLengthId = 42 },
	{ .songLengthId = 48 },
	{ .songLengthId = 5 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
[MOVE_ORANGE_BOLT] = {
	{ .songLengthId = 42 },
	{ .songLengthId = 48 },
	{ .songLengthId = 26 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
[MOVE_ORANGE_CRUSH] = {
	{ .songLengthId = 42 },
	{ .songLengthId = 48 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
[MOVE_ZEST] = {
	{ .songLengthId = 9 },
	{ .songLengthId = 51 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
	

// ----------
// src/data/battle_moves.h
// ----------

[MOVE_ORANGE_WAVE] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_7
		.accuracy = 90,
	#else
		.accuracy = 100,
	#endif
	.effect = EFFECT_PARALYZE,
	.power = 0,
	.type = TYPE_ORANGE,
	.pp = 20,
	.secondaryEffectChance = 0,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
	.split = SPLIT_STATUS,
	.zMoveEffect = Z_EFFECT_SPDEF_UP_1,
},

[MOVE_ORANGE_BOLT] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_6
		.power = 90,
	#else
		.power = 95,
	#endif
	.effect = EFFECT_PARALYZE_HIT,
	.type = TYPE_ORANGE,
	.accuracy = 100,
	.pp = 15,
	.secondaryEffectChance = 10,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
	.split = SPLIT_SPECIAL,
	.zMoveEffect = Z_EFFECT_NONE,
},

[MOVE_ORANGE_CRUSH] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_6
		.power = 110,
	#else
		.power = 120,
	#endif
	.effect = EFFECT_THUNDER,
	.type = TYPE_ORANGE,
	.accuracy = 70,
	.pp = 10,
	.secondaryEffectChance = 30,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_DMG_IN_AIR,
	.split = SPLIT_SPECIAL,
	.zMoveEffect = Z_EFFECT_NONE,
},

[MOVE_ZEST] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_9
		.pp = 5,
	#else
		.pp = 10,
	#endif
	.effect = EFFECT_REST,
	.power = 0,
	.type = TYPE_ORANGE,
	.accuracy = 0,
	.secondaryEffectChance = 0,
	.target = MOVE_TARGET_USER,
	.priority = 0,
	.flags = FLAG_SNATCH_AFFECTED,
	.split = SPLIT_STATUS,
	.zMoveEffect = Z_EFFECT_RESET_STATS,
},


// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sOrangeWaveDescription[] = _(
    "A weak jolt of citric energy\n"
    "that paralyzes the foe.");
	
static const u8 sOrangeBoltDescription[] = _(
    "A strong orangey attack\n"
    "that may paralyze the foe.");

static const u8 sOrangeCrushDescription[] = _(
    "An orangey attack that may\n"
    "cause paralysis.");
	
static const u8 sZestDescription[] = _(
    "The user zests for 2 turns,\n"
    "restoring HP and status.");
	
	
[MOVE_ORANGE_WAVE - 1] = sOrangeWaveDescription,
[MOVE_ORANGE_BOLT - 1] = sOrangeBoltDescription,
[MOVE_ORANGE_CRUSH - 1] = sOrangeCrushDescription,
[MOVE_ZEST - 1] = sZestDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_ORANGE_WAVE] = _("Orange Wave"),
[MOVE_ORANGE_BOLT] = _("Orange Bolt"),
[MOVE_ORANGE_CRUSH] = _("Orange Crush"),
[MOVE_ZEST] = _("Zest"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_OR,
EC_MOVE2(ORANGE_BOLT),
EC_MOVE2(ORANGE_CRUSH),
EC_MOVE2(ORANGE_WAVE),
EC_WORD_OTHER,

EC_POKEMON_NATIONAL(ZAPDOS),
EC_MOVE2(ZEST),
EC_POKEMON(ZIGZAGOON),
