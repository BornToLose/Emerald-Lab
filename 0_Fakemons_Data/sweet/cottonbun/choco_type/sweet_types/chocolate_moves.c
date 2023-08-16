// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_FUDGE_SLAP
.4byte Move_CHOCO_PUNCH

Move_FUDGE_SLAP:
	loadspritegfx ANIM_TAG_MUD_SAND
	playsewithpan SE_M_SAND_ATTACK, SOUND_PAN_ATTACKER
	createsprite gSlideMonToOffsetSpriteTemplate, ANIM_ATTACKER, 2, 0, -10, 0, 0, 3
	waitforvisualfinish
	createsprite gSlideMonToOriginalPosSpriteTemplate, ANIM_ATTACKER, 2, 0, 0, 2
	call FudgeSlapMud
	call FudgeSlapMud
	call FudgeSlapMud
	call FudgeSlapMud
	call FudgeSlapMud
	call FudgeSlapMud
	waitforvisualfinish
	end
FudgeSlapMud:
	createsprite gMudSlapMudSpriteTemplate, ANIM_TARGET, 2, 15, 15, 20, 0, 0
	createsprite gMudSlapMudSpriteTemplate, ANIM_TARGET, 2, 15, 15, 20, 10, 5
	createsprite gMudSlapMudSpriteTemplate, ANIM_TARGET, 2, 15, 15, 20, -10, -5
	createsprite gMudSlapMudSpriteTemplate, ANIM_TARGET, 2, 15, 15, 20, 20, 10
	createsprite gMudSlapMudSpriteTemplate, ANIM_TARGET, 2, 15, 15, 20, -20, -10
	delay 2
	return

Move_CHOCO_PUNCH:
	loadspritegfx ANIM_TAG_IMPACT
	loadspritegfx ANIM_TAG_HANDS_AND_FEET
	monbg ANIM_ATK_PARTNER
	call SetHighSpeedBg
	delay 0
	setalpha 9, 8
	createvisualtask AnimTask_AttackerPunchWithTrace, 2, RGB(8, 9, 28), 10
	playsewithpan SE_M_JUMP_KICK, SOUND_PAN_ATTACKER
	delay 6
	createsprite gBasicHitSplatSpriteTemplate, ANIM_TARGET, 3, 0, 0, ANIM_TARGET, 1
	createsprite gFistFootSpriteTemplate, ANIM_TARGET, 4, 0, 0, 8, 1, 0
	playsewithpan SE_M_COMET_PUNCH, SOUND_PAN_TARGET
	createvisualtask AnimTask_ShakeMon, 2, ANIM_TARGET, 3, 0, 6, 1
	waitforvisualfinish
	clearmonbg ANIM_ATK_PARTNER
	blendoff
	call UnsetHighSpeedBg
	end
	

// ----------
// include/constants/moves.h
// ----------

#define MOVE_FUDGE_SLAP 829
#define MOVE_CHOCO_PUNCH 830

#define MOVES_COUNT_FAKE 831

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_FUDGE_SLAP] = {
	{ .songLengthId = 44 },
	{ .songLengthId =  0 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},
[MOVE_CHOCO_PUNCH] = {
	{ .songLengthId = 27 },
	{ .songLengthId = 44 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},


// ----------
// src/data/battle_moves.h
// ----------

[MOVE_FUDGE_SLAP] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 20,
        .type = TYPE_CHOCOLATE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
        .zMoveEffect = Z_EFFECT_NONE,
    },
[MOVE_CHOCO_PUNCH] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_CHOCOLATE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
        .zMoveEffect = Z_EFFECT_NONE,
    },

// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sFudgeSlapDescription[] = _(
    "Hurls fudge in the foe's\n"
    "face to reduce its accuracy.");
	
static const u8 sChocoPunchDescription[] = _(
    "A punch is thrown at sweet\n"
    "speed to strike first.");
	
[MOVE_FUDGE_SLAP - 1] = sFudgeSlapDescription,
[MOVE_CHOCO_PUNCH - 1] = sChocoPunchDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_FUDGE_SLAP] = _("Fudge Slap"),
[MOVE_CHOCO_PUNCH] = _("Choco Punch"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_CHLOROPHYLL,
EC_MOVE2(CHOCO_PUNCH),
EC_WORD_CHOICE,
	
EC_MOVE2(FRUSTRATION),
EC_MOVE2(FUDGE_SLAP),
EC_WORD_FUFUFU,