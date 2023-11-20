// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_APPLE        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_APPLE] = _("Apple"),


// ----------
// src/battle_message.c
// ----------

[TYPE_APPLE] = _("an APPLE move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_APPLE]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_APPLE,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeApple[] = {
    ANIMCMD_FRAME(TYPE_APPLE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeApple,

[TYPE_APPLE] = 13,

