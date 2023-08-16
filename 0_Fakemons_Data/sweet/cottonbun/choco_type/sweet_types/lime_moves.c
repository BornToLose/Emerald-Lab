// ----------
// data/battle_anim_script.s
// ----------

.4byte Move_SQUEEZE

Move_SQUEEZE:
	createvisualtask AnimTask_TranslateMonEllipticalRespectSide, 2, ANIM_ATTACKER, 6, 4, 2, 4
	goto BindWrap
	

// ----------
// include/constants/moves.h
// ----------

#define MOVE_SQUEEZE 829

#define MOVES_COUNT_FAKE 830

#define MOVES_COUNT         MOVES_COUNT_FAKE


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
	

// ----------
// src/data/text/move_descriptions.h
// ----------

static const u8 sSqueezeDescription[] = _(
    "Peelings, etc. wrap the foe\n"
    BINDING_TURNS" times.");
	
[MOVE_SQUEEZE - 1] = sSqueezeDescription,


// ----------
// src/data/text/move_names.h
// ----------

[MOVE_SQUEEZE] = _("Squeeze"),


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_SPRING,
EC_MOVE2(SQUEEZE),
EC_POKEMON_NATIONAL(SQUIRTLE),