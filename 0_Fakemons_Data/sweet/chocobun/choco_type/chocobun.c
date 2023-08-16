
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Chocobun[];
extern const u32 gMonBackPic_Chocobun[];
extern const u32 gMonShinyPalette_Chocobun[];
extern const u32 gMonPalette_Chocobun[];
extern const u8 gMonIcon_Chocobun[];
extern const u8 gMonFootprint_Chocobun[];


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_CHOCOBUN,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_CHOCOBUN


// ----------
// include/constants/species.h
// ----------

#define SPECIES_CHOCOBUN 912

#define FORMS_START SPECIES_CHOCOBUN


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Chocobun

cry_reverse Cry_Chocobun
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Chocobun::
	.incbin "sound/direct_sound_samples/cries/chocobun.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(CHOCOBUN),

[SPECIES_CHOCOBUN - 1]     = ANIM_SHRINK_GROW,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_CHOCOBUN] = BACK_ANIM_SHRINK_GROW_VIBRATE,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_CHOCOBUN] = gMonIcon_Chocobun,

[SPECIES_CHOCOBUN] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_CHLOROPHYLL,
EC_POKEMON(CHOCOBUN),
EC_WORD_CHOICE,


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Chocobun[] = INCBIN_U32("graphics/pokemon/chocobun/anim_front.4bpp.lz");
const u32 gMonBackPic_Chocobun[] = INCBIN_U32("graphics/pokemon/chocobun/back.4bpp.lz");
const u32 gMonPalette_Chocobun[] = INCBIN_U32("graphics/pokemon/chocobun/normal.gbapal.lz");
const u32 gMonShinyPalette_Chocobun[] = INCBIN_U32("graphics/pokemon/chocobun/shiny.gbapal.lz");
const u8 gMonIcon_Chocobun[] = INCBIN_U8("graphics/pokemon/chocobun/icon.4bpp");
const u8 gMonFootprint_Chocobun[] = INCBIN_U8("graphics/pokemon/chocobun/footprint.1bpp");


// ----------
// src/data/pokemon/evolution.h
// ----------

[SPECIES_COTTONBUN]                = {{EVO_LEVEL, 40, SPECIES_CHOCOBUN}},


// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sChocobunLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_SQUEEZE),
    LEVEL_UP_MOVE( 1, MOVE_LEER),
    LEVEL_UP_MOVE( 1, MOVE_ORANGE_WAVE),
    LEVEL_UP_MOVE( 1, MOVE_TWISTER),
    LEVEL_UP_MOVE( 8, MOVE_ORANGE_WAVE),
    LEVEL_UP_MOVE( 15, MOVE_CHOCO_PUNCH),
    LEVEL_UP_MOVE( 22, MOVE_FUDGE_SLAP),
    LEVEL_UP_MOVE( 29, MOVE_SLAM),
    LEVEL_UP_MOVE( 38, MOVE_AGILITY),
    LEVEL_UP_MOVE( 47, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE( 55, MOVE_PIE_ATTACK),
    LEVEL_UP_MOVE( 61, MOVE_OUTRAGE),
    LEVEL_UP_MOVE( 75, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_CHOCOBUN] = sChocobunLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_CHOCOBUN] =
{
	.categoryName = _("Bunny"),
	.height = 12,
	.weight = 333,
	.description = gChocobunPokedexText,
	.pokemonScale = 282,
	.pokemonOffset = 4,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_CHINGLING,
NATIONAL_DEX_CHOCOBUN,
NATIONAL_DEX_CINCCINO,

NATIONAL_DEX_LOPUNNY,
NATIONAL_DEX_CHOCOBUN,
NATIONAL_DEX_KROKOROK,

NATIONAL_DEX_REGIELEKI,
NATIONAL_DEX_CHOCOBUN,
// 4'03" / 1.3m


// ----------
// src/data/pokemon/pokedex_text.h
// ----------
	
const u8 gChocobunPokedexText[] = _(
    "It's said that it used its magic\n"
    "and kind heart to craft a world of\n"
    "sweets and love. It wields a tasty\n"
    "and delicious power.");
	

// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_CHOCOBUN] =
{
	.baseHP        = 120,
	.baseAttack    = 120,
	.baseDefense   = 90,
	.baseSpeed     = 100,
	.baseSpAttack  = 70,
	.baseSpDefense = 100,
	.types = { TYPE_CHOCOLATE, TYPE_CHOCOLATE},
	.catchRate = 45,
	.expYield = 218,
    .evYield_Attack  = 3,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 120,
	.friendship = 35,
	.growthRate = GROWTH_SLOW,
	.eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE},
	.bodyColor = BODY_COLOR_BROWN,
	.noFlip = FALSE,
    .flags = SPECIES_FLAG_LEGENDARY,
},


// ----------
// src/data/pokemon/teachable_learnsets.h
// ----------

static const u16 sChocobunTeachableLearnset[] = {
    MOVE_AERIAL_ACE,
    MOVE_APPLE_TAIL,
    MOVE_ATTRACT,
    MOVE_BANANA_WING,
    MOVE_BRAIN_FREEZE,
	MOVE_BRICK_BREAK,
	MOVE_CUT,
    MOVE_DIVE,
    MOVE_DOUBLE_TEAM,
	MOVE_EARTHQUAKE,
    MOVE_FACADE,
    MOVE_FIRE_BLAST,
    MOVE_FLAMETHROWER,
    MOVE_FLY,
	MOVE_FOCUS_PUNCH,
    MOVE_FRUSTRATION,
    MOVE_HAIL,
    MOVE_HYPER_BEAM,
    MOVE_ICE_CREAM,
	MOVE_MAGIC_CLAW,
    MOVE_ORANGE_BOLT,
    MOVE_ORANGE_CRUSH,
    MOVE_POUND,
    MOVE_PROTECT,
    MOVE_RAIN_DANCE,
    MOVE_RETURN,
	MOVE_ROAR,
	MOVE_ROCK_SMASH,
	MOVE_ROCK_TOMB,
    MOVE_SAFEGUARD,
	MOVE_SANDSTORM,
    MOVE_SECRET_POWER,
    MOVE_SHOCK_WAVE,
    MOVE_STRENGTH,
    MOVE_SUNNY_DAY,
    MOVE_SURF,
    MOVE_TOXIC,
    MOVE_WATERFALL,
	MOVE_WATER_PULSE,
    MOVE_ZEST,
    MOVE_BODY_SLAM,
    MOVE_DOUBLE_EDGE,
    MOVE_MIMIC,
    MOVE_SUBSTITUTE,
    MOVE_ORANGE_WAVE,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_CHOCOBUN] = sChocobunTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_CHOCOBUN]                     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(CHOCOBUN, gMonBackPic_Chocobun),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_CHOCOBUN] = gMonFootprint_Chocobun,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Chocobun_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Chocobun);

[SPECIES_CHOCOBUN] = sAnims_Chocobun,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_CHOCOBUN]                     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(CHOCOBUN, gMonFrontPic_Chocobun),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(CHOCOBUN, gMonPalette_Chocobun),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(CHOCOBUN, gMonShinyPalette_Chocobun),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_CHOCOBUN] = _("Chocobun"),


