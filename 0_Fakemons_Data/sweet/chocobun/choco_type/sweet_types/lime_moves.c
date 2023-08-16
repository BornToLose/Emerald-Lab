// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_SQUEEZE
.4byte Move_PIE_ATTACK

Move_SQUEEZE:
	createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, ANIM_ATTACKER, 6, 4, 2, 4
	goto BindWrap
	
Move_PIE_ATTACK:
	choosetwoturnanim PieAttackSetUp, PieAttackUnleash
PieAttackEnd:
	end
PieAttackSetUp:
	monbg ANIM_DEF_PARTNER
	setalpha 12, 11
	createvisualtask AnimTask_GetTargetIsAttackerPartner, 5, ARG_RET_ID
	jumpretfalse PieAttackSetUpAgainstOpponent
	goto PieAttackSetUpAgainstPartner
PieAttackSetUpAgainstOpponent:
	createvisualtask AnimTask_BlendBattleAnimPal, 10, (F_PAL_BG | F_PAL_ATK_SIDE | F_PAL_DEF_PARTNER), 1, 0, 12, RGB_BLACK
	waitforvisualfinish
	delay 12
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 8, 0, RGB_BLACK
	createvisualtask AnimTask_HorizontalShake, 5, ANIM_ATTACKER, 2, 16
	loopsewithpan SE_M_STAT_INCREASE, SOUND_PAN_ATTACKER, 4, 8
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 0, 15, RGB_WHITE
	delay 20
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 15, 0, RGB_WHITE
	waitforvisualfinish
	createvisualtask AnimTask_BlendBattleAnimPal, 10, (F_PAL_BG | F_PAL_ATK_PARTNER | F_PAL_DEF_PARTNER), 1, 8, 0, RGB_BLACK
	waitforvisualfinish
	clearmonbg ANIM_DEF_PARTNER
	blendoff
	goto PieAttackEnd
PieAttackSetUpAgainstPartner:
	createvisualtask AnimTask_BlendBattleAnimPalExclude, 10, ANIM_TARGET, 1, 0, 12, RGB_BLACK
	waitforvisualfinish
	delay 12
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 8, 0, RGB_BLACK
	createvisualtask AnimTask_HorizontalShake, 5, ANIM_ATTACKER, 2, 16
	playsewithpan SE_M_STAT_INCREASE, SOUND_PAN_ATTACKER
	delay 8
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 0, 15, RGB_WHITE
	delay 20
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 1, 15, 0, RGB_WHITE
	waitforvisualfinish
	createvisualtask AnimTask_BlendBattleAnimPalExclude, 10, 4, 1, 8, 0, RGB_BLACK
	waitforvisualfinish
	clearmonbg ANIM_DEF_PARTNER
	blendoff
	goto PieAttackEnd
PieAttackUnleash:
	loadspritegfx ANIM_TAG_IMPACT
	loadspritegfx ANIM_TAG_BIRD
	call SetSkyBg
	monbg ANIM_ATTACKER
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 0, 0, 16, RGB_WHITE
	delay 4
	createvisualtask AnimTask_AttackerFadeToInvisible, 5, 0
	waitforvisualfinish
	createvisualtask SoundTask_PlaySE2WithPanning, 5, SE_M_SKY_UPPERCUT, SOUND_PAN_ATTACKER
	createsprite gSkyAttackBirdSpriteTemplate, ANIM_TARGET, 2
	delay 14
	createvisualtask AnimTask_ShakeMon2, 2, ANIM_TARGET, 10, 0, 18, 1
	createvisualtask SoundTask_PlaySE1WithPanning, 5, SE_M_MEGA_KICK2, SOUND_PAN_TARGET
	delay 20
	createvisualtask AnimTask_AttackerFadeFromInvisible, 5, 1
	delay 2
	createvisualtask AnimTask_BlendBattleAnimPal, 10, F_PAL_ATTACKER, 0, 15, 0, RGB_WHITE
	waitforvisualfinish
	clearmonbg ANIM_ATTACKER
	call UnsetSkyBg
	goto PieAttackEnd


// ----------
// data/battle_anim_script.s
// ----------

BattleScript_EffectTwoTurnsAttack::
	/* [...] */
	jumpifmove MOVE_PIE_ATTACK, BattleScript_EffectTwoTurnsAttackPieAttack
	/* [...] */
BattleScript_EffectTwoTurnsAttackPieAttack:
	setbyte sTWOTURN_STRINGID, B_MSG_TURN1_PIE_ATTACK
	goto BattleScript_EffectTwoTurnsAttackContinue


// ----------
// include/constants/battle_string_ids.h
// ----------

#define STRINGID_PKMNISBAKING                         666

#define BATTLESTRINGS_COUNT                           667

#define B_MSG_TURN1_PIE_ATTACK     13
	

// ----------
// include/constants/moves.h
// ----------

#define MOVE_SQUEEZE 829
#define MOVE_PIE_ATTACK 830

#define MOVES_COUNT_FAKE 831

#define MOVES_COUNT         MOVES_COUNT_FAKE


// ----------
// src/battle_message.c
// ----------

static const u8 sText_PkmnIsBaking[] = _("{B_ATK_NAME_WITH_PREFIX} is baking!");

const u8 *const gBattleStringsTable[BATTLESTRINGS_COUNT] =
{
	/* [...] */
    [STRINGID_PKMNISBAKING - BATTLESTRINGS_TABLE_START] = sText_PkmnIsBaking,
};

const u16 gFirstTurnOfTwoStringIds[] =
{
    /* [...] */
    [B_MSG_TURN1_PIE_ATTACK]    = STRINGID_PKMNISBAKING,
};


// ----------
// src/battle_script_commands.c
// ----------

static const u16 sTrappingMoves[NUM_TRAPPING_MOVES] =
{
    MOVE_BIND, MOVE_WRAP, MOVE_FIRE_SPIN, MOVE_CLAMP, MOVE_WHIRLPOOL, MOVE_SAND_TOMB, MOVE_MAGMA_STORM, MOVE_INFESTATION, MOVE_SNAP_TRAP, MOVE_SQUEEZE
};


// ----------
// src/data/bard_music/moves.h
// ----------

[MOVE_SQUEEZE] = {
	{ .songLengthId =  0 },
	{ .songLengthId = 51 },
	{ .songLengthId = 51 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},

[MOVE_PIE_ATTACK] = {
	{ .songLengthId = 18 },
	{ .songLengthId = 42 },
	{ .songLengthId =  0 },
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
	NULL_BARD_SOUND,
},


// ----------
// src/data/battle_moves.h
// ----------

[MOVE_SQUEEZE] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_5
		.accuracy = 90,
	#else
		.accuracy = 85,
	#endif
	.effect = EFFECT_TRAP,
	.power = 15,
	.type = TYPE_LIME,
	.pp = 20,
	.secondaryEffectChance = 100,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
	.split = SPLIT_PHYSICAL,
	.zMoveEffect = Z_EFFECT_NONE,
},

[MOVE_PIE_ATTACK] =
{
	#if B_UPDATED_MOVE_DATA >= GEN_5
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
	#else
		.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
	#endif
	.effect = EFFECT_TWO_TURNS_ATTACK,
	.power = 140,
	.type = TYPE_LIME,
	.accuracy = 90,
	.pp = 5,
	.secondaryEffectChance = 30,
	.target = MOVE_TARGET_SELECTED,
	.priority = 0,
	.split = SPLIT_PHYSICAL,
	.argument = MOVE_EFFECT_FLINCH,
	.zMoveEffect = Z_EFFECT_NONE,
},
	

// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sSqueezeDescription[] = _(
    "Peelings, etc. wrap the foe\n"
    BINDING_TURNS" times.");
	
static const u8 sPieAttackDescription[] = _(
    "Searches out weak spots,\n"
    "then strikes the next turn.");
	
[MOVE_SQUEEZE - 1] = sSqueezeDescription,

[MOVE_PIE_ATTACK - 1] = sPieAttackDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_SQUEEZE] = _("Squeeze"),

[MOVE_PIE_ATTACK] = _("Pie Attack"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_POKEMON_NATIONAL(PIDGEY),
EC_MOVE2(PIE_ATTACK),
DOUBLE_SPECIES_NAME

EC_WORD_SPRING,
EC_MOVE2(SQUEEZE),
EC_POKEMON_NATIONAL(SQUIRTLE),