// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_GRAPE        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_GRAPE] = _("Grape"),


// ----------
// src/battle_message.c
// ----------

[TYPE_GRAPE] = _("a GRAPE move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_GRAPE]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_GRAPE,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeGrape[] = {
    ANIMCMD_FRAME(TYPE_GRAPE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeGrape,

[TYPE_GRAPE] = 14,

