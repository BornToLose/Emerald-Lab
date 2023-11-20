// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_ICE_CREAM
.4byte Move_BRAIN_FREEZE

Move_ICE_CREAM:
	monbg ANIM_TARGET
	splitbgprio ANIM_TARGET
	setalpha 12, 8
	loadspritegfx ANIM_TAG_ICE_CRYSTALS
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_ATTACKER, 2, F_PAL_BG, 1, 0, 7, RGB_BLACK
	waitforvisualfinish
	createsoundtask SoundTask_LoopSEAdjustPanning, SE_M_BUBBLE_BEAM2, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, 4, 4, 0, 10
	createsprite gIceBeamOuterCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, 12, 0, 12, 20
	createsprite gIceBeamOuterCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, -12, 0, -12, 20
	delay 1
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_ATTACKER, 2, F_PAL_TARGET, -31, 0, 7, RGB(0, 20, 31)
	createvisualtask AnimTask_ShakeMon2, 2, ANIM_TARGET, 2, 0, 25, 1
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	call IceCreamCreateCrystals
	createsprite gIceBeamInnerCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	delay 1
	createsprite gIceBeamInnerCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	waitforvisualfinish
	delay 20
	call IceCrystalEffectShort
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_ATTACKER, 2, F_PAL_TARGET, 5, 7, 0, RGB(0, 20, 31)
	waitforvisualfinish
	createsprite gSimplePaletteBlendSpriteTemplate, ANIM_ATTACKER, 2, F_PAL_BG, 0, 7, 0, RGB_BLACK
	waitforvisualfinish
	clearmonbg ANIM_TARGET
	blendoff
	end
IceCreamCreateCrystals:
	createsprite gIceBeamOuterCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, 12, 0, 12, 20
	createsprite gIceBeamOuterCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, -12, 0, -12, 20
	createsprite gIceBeamInnerCrystalSpriteTemplate, ANIM_ATTACKER, 2, 20, 0, 0, 0, 11
	delay 1
	return

Move_BRAIN_FREEZE:
	loadspritegfx ANIM_TAG_ICE_CRYSTALS
	monbg ANIM_DEF_PARTNER
	call SetHighSpeedBg
	waitforvisualfinish
	panse SE_M_BLIZZARD, SOUND_PAN_ATTACKER, SOUND_PAN_TARGET, +2, 0
	call BrainFreezeIceCrystals
	call BrainFreezeIceCrystals
	playsewithpan SE_M_BLIZZARD2, SOUND_PAN_TARGET
	waitforvisualfinish
	call IceCrystalEffectLong
	waitforvisualfinish
	delay 20
	call UnsetHighSpeedBg
	clearmonbg ANIM_DEF_PARTNER
	end
BrainFreezeIceCrystals:
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -10, 0, -10, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, 0, 0, 0, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -15, 0, -15, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, -10, 0, -10, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -5, 0, -5, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, 10, 0, 10, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -10, 0, -10, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, -20, 0, -20, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -20, 0, -20, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, 15, 0, 15, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -15, 0, -15, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, -20, 0, -20, 80, 0, 0, 1
	delay 3
	createsprite gSwirlingSnowballSpriteTemplate, ANIM_ATTACKER, 40, 0, -25, 0, -25, 72, 1
	createsprite gBlizzardIceCrystalSpriteTemplate, ANIM_ATTACKER, 40, 0, 20, 0, 20, 80, 0, 0, 1
	delay 3
	return


// ----------
// include/constants/moves.h
// ----------

#define MOVE_ICE_CREAM 829
#define MOVE_BRAIN_FREEZE 830

#define MOVES_COUNT_FAKE 831

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_ICE_CREAM] = {
	{ .songLengthId = 18 },
	{ .songLengthId = 12 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
[MOVE_BRAIN_FREEZE] = {
	{ .songLengthId = 15 },
	{ .songLengthId = 50 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},


// ----------
// src/data/battle_moves.h
// ----------

	[MOVE_ICE_CREAM] =
	{
		#if B_UPDATED_MOVE_DATA >= GEN_6
			.power = 90,
		#else
			.power = 95,
		#endif
		// The following effect is also relevant in battle_pike.c
		// If you cherry-pick this to use something other than the config, make sure to update it there too
		#if B_USE_FROSTBITE == TRUE
			.effect = EFFECT_FROSTBITE_HIT,
		#else
			.effect = EFFECT_FREEZE_HIT,
		#endif
		.type = TYPE_GRAPE,
		.accuracy = 100,
		.pp = 10,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_SELECTED,
		.priority = 0,
		.split = SPLIT_SPECIAL,
		.zMoveEffect = Z_EFFECT_NONE,
        .sheerForceBoost = TRUE,
	},
	
	[MOVE_BRAIN_FREEZE] =
	{
		#if B_UPDATED_MOVE_DATA >= GEN_6
			.power = 110,
		#else
			.power = 120,
		#endif
		#if B_USE_FROSTBITE == TRUE
			.effect = EFFECT_FROSTBITE_HIT,
		#else
			.effect = EFFECT_FREEZE_HIT,
		#endif
		.type = TYPE_GRAPE,
		.accuracy = 70,
		.pp = 5,
		.secondaryEffectChance = 10,
		.target = MOVE_TARGET_BOTH,
		.priority = 0,
		.split = SPLIT_SPECIAL,
		.zMoveEffect = Z_EFFECT_NONE,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
	},


// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sIceCreamDescription[] = _(
    "Hits the foe with an icewine\n"
#if B_USE_FROSTBITE == TRUE
    "beam. May cause frostbite.");
#else
    "beam that may freeze it.");
#endif

static const u8 sBrainFreezeDescription[] = _(
    "Hits the foe with an icewine\n"
#if B_USE_FROSTBITE == TRUE
    "storm. May cause frostbite.");
#else
    "storm that may freeze it.");
#endif
	
[MOVE_ICE_CREAM - 1] = sIceCreamDescription,
[MOVE_BRAIN_FREEZE - 1] = sBrainFreezeDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_ICE_CREAM] = _("Ice Cream"),
[MOVE_BRAIN_FREEZE] = _("Brain Freeze"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_BRAG,
EC_MOVE2(BRAIN_FREEZE),
EC_WORD_BREAK,
	
EC_MOVE2(ICE_BEAM),
EC_MOVE2(ICE_CREAM),
EC_MOVE2(ICE_PUNCH),