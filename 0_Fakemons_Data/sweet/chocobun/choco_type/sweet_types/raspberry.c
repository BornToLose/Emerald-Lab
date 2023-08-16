// ----------
// include/constants/pokemon.h
// ----------

#define TYPE_RASPBERRY        19
#define NUMBER_OF_MON_TYPES   20


// ----------
// src/battle_main.c
// ----------

[TYPE_RASPBERRY] = _("Raspbr"),


// ----------
// src/battle_message.c
// ----------

[TYPE_RASPBERRY] = _("a RASPBERRY move"),

// ----------
// src/pokedex.c
// ----------

{gText_DexEmptyString, gTypeNames[TYPE_RASPBERRY]},

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    /* [...] */
    TYPE_RASPBERRY,
};


// ----------
// src/pokemon_summary_screen.c
// ----------

static const union AnimCmd sSpriteAnim_TypeRaspberry[] = {
    ANIMCMD_FRAME(TYPE_RASPBERRY * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

sSpriteAnim_TypeRaspberry,

[TYPE_RASPBERRY] = 14,

