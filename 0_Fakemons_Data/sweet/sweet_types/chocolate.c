// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_CHOCOLATE        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_CHOCOLATE] = _("Choco"),


// ----------
// src/battle_message.c
// ----------

[TYPE_CHOCOLATE] = _("a CHOCOLATE move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_CHOCOLATE]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_CHOCOLATE,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeChocolate[] = {
    ANIMCMD_FRAME(TYPE_CHOCOLATE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeChocolate,

[TYPE_CHOCOLATE] = 13,

