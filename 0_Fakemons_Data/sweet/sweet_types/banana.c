// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_BANANA        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_BANANA] = _("Banana"),


// ----------
// src/battle_message.c
// ----------

[TYPE_BANANA] = _("a BANANA move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_BANANA]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_BANANA,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeBanana[] = {
    ANIMCMD_FRAME(TYPE_BANANA * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeBanana,

[TYPE_BANANA] = 13,

