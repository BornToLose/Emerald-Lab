
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Azumargo[];
extern const u32 gMonBackPic_Azumargo[];
extern const u32 gMonShinyPalette_Azumargo[];
extern const u32 gMonPalette_Azumargo[];
extern const u8 gMonIcon_Azumargo[];
extern const u8 gMonFootprint_Azumargo[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_AZUMARGO 911

#define FORMS_START SPECIES_AZUMARGO


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_AZUMARGO,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_AZUMARGO


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Azumargo

cry_reverse Cry_Azumargo
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Azumargo::
	.incbin "sound/direct_sound_samples/cries/azumargo.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(AZUMARGO),

[SPECIES_AZUMARGO - 1]     = ANIM_SHRINK_GROW,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_AZUMARGO] = BACK_ANIM_DIP_RIGHT_SIDE,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_AZUMARGO] = gMonIcon_Azumargo,

[SPECIES_AZUMARGO] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_WORD_AWW,
EC_POKEMON_NATIONAL(AZUMARGO),
DOUBLE_SPECIES_NAME


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Azumargo[] = INCBIN_U32("graphics/pokemon/azumargo/anim_front.4bpp.lz");
const u32 gMonBackPic_Azumargo[] = INCBIN_U32("graphics/pokemon/azumargo/back.4bpp.lz");
const u32 gMonPalette_Azumargo[] = INCBIN_U32("graphics/pokemon/azumargo/normal.gbapal.lz");
const u32 gMonShinyPalette_Azumargo[] = INCBIN_U32("graphics/pokemon/azumargo/shiny.gbapal.lz");
const u8 gMonIcon_Azumargo[] = INCBIN_U8("graphics/pokemon/azumargo/icon.4bpp");
const u8 gMonFootprint_Azumargo[] = INCBIN_U8("graphics/pokemon/azumargo/footprint.1bpp");


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

static const struct LevelUpMove sAzumargoLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_SHELL_SMASH),
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_SHELL_SMASH),
    LEVEL_UP_MOVE( 1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE( 1, MOVE_EARTH_POWER),
    LEVEL_UP_MOVE( 1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE( 1, MOVE_YAWN),
    LEVEL_UP_MOVE( 1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE( 1, MOVE_SMOG),
    LEVEL_UP_MOVE( 1, MOVE_EMBER),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE( 2, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE( 5, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE( 6, MOVE_EMBER),
    LEVEL_UP_MOVE( 7, MOVE_BUBBLE),
    LEVEL_UP_MOVE( 8, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(10, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(10, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(13, MOVE_HARDEN),
    LEVEL_UP_MOVE(13, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(15, MOVE_INCINERATE),
    LEVEL_UP_MOVE(16, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(20, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(21, MOVE_AQUA_TAIL),
    LEVEL_UP_MOVE(22, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(25, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE(27, MOVE_FLAME_BURST),
    LEVEL_UP_MOVE(29, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(31, MOVE_AQUA_RING),
    LEVEL_UP_MOVE(34, MOVE_LAVA_PLUME),
    LEVEL_UP_MOVE(35, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(36, MOVE_AMNESIA),
    LEVEL_UP_MOVE(42, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(43, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(46, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(47, MOVE_RECOVER),
    LEVEL_UP_MOVE(54, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(58, MOVE_EARTH_POWER),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_AZUMARGO] = sAzumargoLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_AZUMARGO] =
{
	.categoryName = _("Lava Rabbit"),
	.height = 8,
	.weight = 285,
	.description = gAzumargoPokedexText,
	.pokemonScale = 448,
	.pokemonOffset = 16,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_AZUMARILL,
NATIONAL_DEX_AZUMARGO,
NATIONAL_DEX_AZURILL,

NATIONAL_DEX_OCTILLERY,
NATIONAL_DEX_AZUMARGO,
NATIONAL_DEX_LARVESTA,

NATIONAL_DEX_SIRFETCHD,
NATIONAL_DEX_AZUMARGO,
// 2'11" / 0.9m


// ----------
// src/data/pokemon/pokedex_text.h
// ----------
	
const u8 gAzumargoPokedexText[] = _(
    "Its body is as hot as lava and is always\n"
    "billowing. The bubble-like pattern on\n"
    "its stomach helps it camouflage itself\n"
    "when it's in the water.");
	

// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_AZUMARGO] =
{
	.baseHP        = 75,
	.baseAttack    = 50,
	.baseDefense   = 100,
	.baseSpeed     = 40,
	.baseSpAttack  = 65,
	.baseSpDefense = 80,
	.types = { TYPE_WATER, TYPE_FIRE },
	.catchRate = 75,
	.expYield = 154,
    .evYield_HP  = 2,
    .evYield_Defense  = 1,
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

static const u16 sAzumargoTeachableLearnset[] = {
    MOVE_ATTRACT,
    MOVE_BLIZZARD,
    MOVE_BRICK_BREAK,
    MOVE_DIG,
    MOVE_DIVE,
    MOVE_DOUBLE_TEAM,
    MOVE_EARTHQUAKE,
    MOVE_FACADE,
    MOVE_FIRE_BLAST,
    MOVE_FLAMETHROWER,
    MOVE_FOCUS_PUNCH,
    MOVE_FRUSTRATION,
    MOVE_HAIL,
    MOVE_HIDDEN_POWER,
    MOVE_HYPER_BEAM,
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
    MOVE_SANDSTORM,
    MOVE_SECRET_POWER,
    MOVE_SOLAR_BEAM,
    MOVE_STRENGTH,
    MOVE_SURF,
    MOVE_SUNNY_DAY,
    MOVE_TOXIC,
    MOVE_WATERFALL,
    MOVE_WATER_PULSE,
    MOVE_BODY_SLAM,
    MOVE_DEFENSE_CURL,
    MOVE_DOUBLE_EDGE,
    MOVE_DYNAMIC_PUNCH,
    MOVE_ENDURE,
    MOVE_EXPLOSION,
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

[SPECIES_AZUMARGO] = sAzumargoTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_AZUMARGO]                    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(AZUMARGO, gMonBackPic_Azumargo),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_AZUMARGO] = gMonFootprint_Azumargo,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Azumargo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Azumargo);

[SPECIES_AZUMARGO] = sAnims_Azumargo,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_AZUMARGO]                    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  6 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(AZUMARGO, gMonFrontPic_Azumargo),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(AZUMARGO, gMonPalette_Azumargo),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(AZUMARGO, gMonShinyPalette_Azumargo),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_AZUMARGO] = _("Azumargo"),


