// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_ORANGE        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_ORANGE] = _("Orange"),


// ----------
// src/battle_message.c
// ----------

[TYPE_ORANGE] = _("an ORANGE move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_ORANGE]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_ORANGE,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeOrange[] = {
    ANIMCMD_FRAME(TYPE_ORANGE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeOrange,

[TYPE_ORANGE] = 13,


