
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Cottonbun[];
extern const u32 gMonBackPic_Cottonbun[];
extern const u32 gMonShinyPalette_Cottonbun[];
extern const u32 gMonPalette_Cottonbun[];
extern const u8 gMonIcon_Cottonbun[];
extern const u8 gMonFootprint_Cottonbun[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_COTTONBUN 911

#define FORMS_START SPECIES_COTTONBUN


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_COTTONBUN,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_COTTONBUN


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Cottonbun

cry_reverse Cry_Cottonbun
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Cottonbun::
	.incbin "sound/direct_sound_samples/cries/cottonbun.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(COTTONBUN),

[SPECIES_COTTONBUN - 1]     = ANIM_H_JUMPS_V_STRETCH,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_COTTONBUN] = BACK_ANIM_CONCAVE_ARC_SMALL,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_COTTONBUN] = gMonIcon_Cottonbun,

[SPECIES_COTTONBUN] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_MOVE(COSMIC_POWER),
EC_POKEMON_NATIONAL(COTTONBUN),
EC_MOVE2(COTTON_SPORE),


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Cottonbun[] = INCBIN_U32("graphics/pokemon/cottonbun/anim_front.4bpp.lz");
const u32 gMonBackPic_Cottonbun[] = INCBIN_U32("graphics/pokemon/cottonbun/back.4bpp.lz");
const u32 gMonPalette_Cottonbun[] = INCBIN_U32("graphics/pokemon/cottonbun/normal.gbapal.lz");
const u32 gMonShinyPalette_Cottonbun[] = INCBIN_U32("graphics/pokemon/cottonbun/shiny.gbapal.lz");
const u8 gMonIcon_Cottonbun[] = INCBIN_U8("graphics/pokemon/cottonbun/icon.4bpp");
const u8 gMonFootprint_Cottonbun[] = INCBIN_U8("graphics/pokemon/cottonbun/footprint.1bpp");


// ----------
// src/data/pokemon/evolution.h
// ----------

[SPECIES_COTTONBUN]                = {{EVO_LEVEL, 40, SPECIES_CHOCOBUN}},


// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sCottonbunLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_WRAP),
    LEVEL_UP_MOVE( 1, MOVE_LEER),
    LEVEL_UP_MOVE( 1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE( 1, MOVE_TWISTER),
    LEVEL_UP_MOVE( 8, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE( 15, MOVE_MACH_PUNCH),
    LEVEL_UP_MOVE( 22, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE( 29, MOVE_SLAM),
    LEVEL_UP_MOVE( 38, MOVE_AGILITY),
    LEVEL_UP_MOVE( 47, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE( 56, MOVE_OUTRAGE),
    LEVEL_UP_MOVE( 65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_COTTONBUN] = sCottonbunLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_COTTONBUN] =
{
	.categoryName = _("Bunny"),
	.height = 4,
	.weight = 55,
	.description = gCottonbunPokedexText,
	.pokemonScale = 491,
	.pokemonOffset = 16,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_COSMOG,
NATIONAL_DEX_COTTONBUN,
NATIONAL_DEX_COTTONEE,

NATIONAL_DEX_BUNEARY,
NATIONAL_DEX_COTTONBUN,
NATIONAL_DEX_DUCKLETT,

NATIONAL_DEX_BUNEARY,
NATIONAL_DEX_COTTONBUN,
NATIONAL_DEX_STUNKY,


// ----------
// src/data/pokemon/pokedex_text.h
// ----------
	
const u8 gCottonbunPokedexText[] = _(
    "This Pokémon hatched from a chocolate\n"
    "egg. It has a tendency to play with\n"
    "its food for a while before finally\n"
    "eating it.");
	

// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_COTTONBUN] =
{
	.baseHP        = 60,
	.baseAttack    = 70,
	.baseDefense   = 70,
	.baseSpeed     = 65,
	.baseSpAttack  = 65,
	.baseSpDefense = 70,
	.types = { TYPE_FAIRY, TYPE_FAIRY },
	.catchRate = 145,
	.expYield = 150,
    .evYield_Attack  = 2,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 2,
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

static const u16 sCottonbunTeachableLearnset[] = {
    MOVE_ATTRACT,
    MOVE_BLIZZARD,
    MOVE_DOUBLE_TEAM,
    MOVE_FACADE,
    MOVE_FIRE_BLAST,
    MOVE_FLAMETHROWER,
    MOVE_FRUSTRATION,
    MOVE_HAIL,
    MOVE_HYPER_BEAM,
    MOVE_ICE_BEAM,
    MOVE_IRON_TAIL,
    MOVE_POUND,
    MOVE_PROTECT,
    MOVE_RAIN_DANCE,
    MOVE_REST,
    MOVE_RETURN,
    MOVE_SAFEGUARD,
    MOVE_SECRET_POWER,
    MOVE_SUNNY_DAY,
    MOVE_SURF,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_TOXIC,
    MOVE_WATERFALL,
    MOVE_WATER_PULSE,
    MOVE_BODY_SLAM,
    MOVE_DOUBLE_EDGE,
    MOVE_MIMIC,
    MOVE_SUBSTITUTE,
    MOVE_THUNDER_WAVE,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_COTTONBUN] = sCottonbunTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_COTTONBUN]                    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  4 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(COTTONBUN, gMonBackPic_Cottonbun),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_COTTONBUN] = gMonFootprint_Cottonbun,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Cottonbun_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Cottonbun);

[SPECIES_COTTONBUN] = sAnims_Cottonbun,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_COTTONBUN]                    = { .size = MON_COORDS_SIZE(32, 64), .y_offset =  9 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(COTTONBUN, gMonFrontPic_Cottonbun),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(COTTONBUN, gMonPalette_Cottonbun),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(COTTONBUN, gMonShinyPalette_Cottonbun),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_COTTONBUN] = _("Cottonbun"),


