// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_LIME        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_LIME] = _("Lime"),


// ----------
// src/battle_message.c
// ----------

[TYPE_LIME] = _("a LIME move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_LIME]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_LIME,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeLime[] = {
    ANIMCMD_FRAME(TYPE_LIME * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeLime,

[TYPE_LIME] = 15,

