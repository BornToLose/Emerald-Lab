
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Marillugma[];
extern const u32 gMonBackPic_Marillugma[];
extern const u32 gMonShinyPalette_Marillugma[];
extern const u32 gMonPalette_Marillugma[];
extern const u8 gMonIcon_Marillugma[];
extern const u8 gMonFootprint_Marillugma[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_MARILLUGMA 910

#define FORMS_START SPECIES_MARILLUGMA


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_MARILLUGMA,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_MARILLUGMA


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Marillugma

cry_reverse Cry_Marillugma
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Marillugma::
	.incbin "sound/direct_sound_samples/cries/marillugma.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(MARILLUGMA),

[SPECIES_MARILLUGMA - 1]        = ANIM_V_STRETCH,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_MARILLUGMA] = BACK_ANIM_V_STRETCH,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_MARILLUGMA] = gMonIcon_Marillugma,

[SPECIES_MARILLUGMA] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_POKEMON_NATIONAL(MARILL),
EC_POKEMON_NATIONAL(MARILLUGMA),
EC_POKEMON_NATIONAL(MAROWAK),


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Marillugma[] = INCBIN_U32("graphics/pokemon/marillugma/anim_front.4bpp.lz");
const u32 gMonBackPic_Marillugma[] = INCBIN_U32("graphics/pokemon/marillugma/back.4bpp.lz");
const u32 gMonPalette_Marillugma[] = INCBIN_U32("graphics/pokemon/marillugma/normal.gbapal.lz");
const u32 gMonShinyPalette_Marillugma[] = INCBIN_U32("graphics/pokemon/marillugma/shiny.gbapal.lz");
const u8 gMonIcon_Marillugma[] = INCBIN_U8("graphics/pokemon/marillugma/icon.4bpp");
const u8 gMonFootprint_Marillugma[] = INCBIN_U8("graphics/pokemon/marillugma/footprint.1bpp");


// ----------
// src/data/pokemon/egg_moves.h
// ----------

egg_moves(MARILLUGMA,
	MOVE_PRESENT,
	MOVE_AMNESIA,
	MOVE_FUTURE_SIGHT,
	MOVE_BELLY_DRUM,
	MOVE_PERISH_SONG,
	MOVE_SUPERSONIC,
	MOVE_AQUA_JET,
	MOVE_SUPERPOWER,
	MOVE_REFRESH,
	MOVE_BODY_SLAM,
	MOVE_WATER_SPORT,
	MOVE_MUDDY_WATER,
	MOVE_CAMOUFLAGE,
	MOVE_ACID_ARMOR,
	MOVE_HEAT_WAVE,
	MOVE_CURSE,
	MOVE_SMOKESCREEN,
	MOVE_MEMENTO,
	MOVE_STOCKPILE,
	MOVE_SPIT_UP,
	MOVE_SWALLOW,
	MOVE_ROLLOUT,
	MOVE_INFERNO,
	MOVE_EARTH_POWER,
	MOVE_GUARD_SWAP),


// ----------
// src/data/pokemon/evolution.h
// ----------

[SPECIES_MARILLUGMA]                = {{EVO_LEVEL, 18, SPECIES_AZUMARGO}},


// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sMarillugmaLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE( 1, MOVE_YAWN),
    LEVEL_UP_MOVE( 1, MOVE_SMOG),
    LEVEL_UP_MOVE( 2, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE( 5, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE( 6, MOVE_EMBER),
    LEVEL_UP_MOVE( 7, MOVE_BUBBLE),
    LEVEL_UP_MOVE( 8, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(10, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(10, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(13, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(13, MOVE_HARDEN),
    LEVEL_UP_MOVE(15, MOVE_INCINERATE),
    LEVEL_UP_MOVE(16, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(20, MOVE_AQUA_TAIL),
    LEVEL_UP_MOVE(20, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(22, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(23, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE(27, MOVE_FLAME_BURST),
    LEVEL_UP_MOVE(28, MOVE_AQUA_RING),
    LEVEL_UP_MOVE(29, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(31, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(34, MOVE_LAVA_PLUME),
    LEVEL_UP_MOVE(36, MOVE_AMNESIA),
    LEVEL_UP_MOVE(37, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(40, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(41, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(43, MOVE_RECOVER),
    LEVEL_UP_MOVE(47, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(48, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(50, MOVE_EARTH_POWER),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_MARILLUGMA] = sMarillugmaLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_MARILLUGMA] =
{
	.categoryName = _("Lava Mouse"),
	.height = 4,
	.weight = 85,
	.description = gMarillugmaPokedexText,
	.pokemonScale = 476,
	.pokemonOffset = 20,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_MARILL,
NATIONAL_DEX_MARILLUGMA,
NATIONAL_DEX_MAROWAK,

NATIONAL_DEX_CHEWTLE,
NATIONAL_DEX_MARILLUGMA,
NATIONAL_DEX_GLOOM,

NATIONAL_DEX_IMPIDIMP,
NATIONAL_DEX_MARILLUGMA,
// 1'08" / 0.5m


// ----------
// src/data/pokemon/pokedex_text.h
// ----------
	
const u8 gMarillugmaPokedexText[] = _(
    "These group together in areas that are\n"
    "hotter than normal. It can stay dry,\n"
    "even when it plays in the water.");


// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_MARILLUGMA] =
{
	.baseHP        = 55,
	.baseAttack    = 30,
	.baseDefense   = 45,
	.baseSpeed     = 30,
	.baseSpAttack  = 45,
	.baseSpDefense = 45,
	.types = { TYPE_WATER, TYPE_FIRE },
	.catchRate = 190,
	.expYield = 68,
    .evYield_HP  = 1,
    .evYield_SpAttack  = 1,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 20,
	.friendship = 70,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},
	.abilities = {ABILITY_THICK_FAT, ABILITY_FLAME_BODY, ABILITY_SAP_SIPPER},
	.bodyColor = BODY_COLOR_RED,
	.noFlip = FALSE,
},


// ----------
// src/data/pokemon/teachable_learnsets.h
// ----------

static const u16 sMarillugmaTeachableLearnset[] = {
    MOVE_ATTRACT,
    MOVE_BLIZZARD,
    MOVE_BRICK_BREAK,
    MOVE_DIG,
    MOVE_DIVE,
    MOVE_DOUBLE_TEAM,
    MOVE_FACADE,
    MOVE_FIRE_BLAST,
    MOVE_FLAMETHROWER,
    MOVE_FOCUS_PUNCH,
    MOVE_FRUSTRATION,
    MOVE_HAIL,
    MOVE_HIDDEN_POWER,
    MOVE_ICE_BEAM,
    MOVE_IRON_TAIL,
    MOVE_LIGHT_SCREEN,
    MOVE_OVERHEAT,
    MOVE_PROTECT,
    MOVE_RAIN_DANCE,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_RETURN,
    MOVE_ROCK_SMASH,
    MOVE_ROCK_TOMB,
    MOVE_SECRET_POWER,
    MOVE_STRENGTH,
    MOVE_SUNNY_DAY,
    MOVE_SURF,
    MOVE_TOXIC,
    MOVE_WATERFALL,
    MOVE_WATER_PULSE,
    MOVE_BODY_SLAM,
    MOVE_DEFENSE_CURL,
    MOVE_DOUBLE_EDGE,
    MOVE_DYNAMIC_PUNCH,
    MOVE_ENDURE,
    MOVE_ICE_PUNCH,
    MOVE_ICY_WIND,
    MOVE_MEGA_KICK,
    MOVE_MEGA_PUNCH,
    MOVE_MIMIC,
    MOVE_MUD_SLAP,
    MOVE_ROCK_SLIDE,
    MOVE_ROLLOUT,
    MOVE_SEISMIC_TOSS,
    MOVE_SLEEP_TALK,
    MOVE_SNORE,
    MOVE_SUBSTITUTE,
    MOVE_SWAGGER,
    MOVE_SWIFT,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_MARILLUGMA] = sMarillugmaTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_MARILLUGMA]                       = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(MARILLUGMA, gMonBackPic_Marillugma),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_MARILLUGMA] = gMonFootprint_Marillugma,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Marillugma_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Marillugma);

[SPECIES_MARILLUGMA] = sAnims_Marillugma,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_MARILLUGMA]                   = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 12 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(MARILLUGMA, gMonFrontPic_Marillugma),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(MARILLUGMA, gMonPalette_Marillugma),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(MARILLUGMA, gMonShinyPalette_Marillugma),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_MARILLUGMA] = _("Marillugma"),


