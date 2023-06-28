
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Burgela[];
extern const u32 gMonBackPic_Burgela[];
extern const u32 gMonShinyPalette_Burgela[];
extern const u32 gMonPalette_Burgela[];
extern const u8 gMonIcon_Burgela[];
extern const u8 gMonFootprint_Burgela[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_BURGELA 908

#define FORMS_START SPECIES_BURGELA


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_BURGELA,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_BURGELA


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Burgela

cry_reverse Cry_Burgela
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Burgela::
	.incbin "sound/direct_sound_samples/cries/burgela.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(BURGELA),

[SPECIES_BURGELA - 1]        = ANIM_BOUNCE_ROTATE_TO_SIDES,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_BURGELA] = BACK_ANIM_V_STRETCH,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_BURGELA] = gMonIcon_Burgela,

[SPECIES_BURGELA] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_MOVE2(BULLET_SEED),
EC_POKEMON_NATIONAL(BURGELA),
EC_WORD_BUSY,


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Burgela[] = INCBIN_U32("graphics/pokemon/burgela/anim_front.4bpp.lz");
const u32 gMonBackPic_Burgela[] = INCBIN_U32("graphics/pokemon/burgela/back.4bpp.lz");
const u32 gMonPalette_Burgela[] = INCBIN_U32("graphics/pokemon/burgela/normal.gbapal.lz");
const u32 gMonShinyPalette_Burgela[] = INCBIN_U32("graphics/pokemon/burgela/shiny.gbapal.lz");
const u8 gMonIcon_Burgela[] = INCBIN_U8("graphics/pokemon/burgela/icon.4bpp");
const u8 gMonFootprint_Burgela[] = INCBIN_U8("graphics/pokemon/burgela/footprint.1bpp");


// ----------
// src/data/pokemon/egg_moves.h
// ----------

egg_moves(BURGELA,
	MOVE_FLAIL,
	MOVE_CONFUSION,
	MOVE_MEGA_DRAIN,
	MOVE_AMNESIA,
	MOVE_LEECH_SEED,
	MOVE_NATURE_POWER,
	MOVE_ENDEAVOR,
	MOVE_LEAF_STORM,
	MOVE_POWER_SWAP,
	MOVE_GIGA_DRAIN,
	MOVE_RAGE_POWDER,
	MOVE_NATURAL_GIFT,
	MOVE_WAKE_UP_SLAP),


// ----------
// src/data/pokemon/evolution.h
// ----------

[SPECIES_BURGELA]                = {{EVO_LEVEL, 15, SPECIES_TANGELA}},


// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sBurgelaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_INGRAIN),
    LEVEL_UP_MOVE( 1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE( 4, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE( 7, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(10, MOVE_ABSORB),
    LEVEL_UP_MOVE(14, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(17, MOVE_BIND),
    LEVEL_UP_MOVE(20, MOVE_GROWTH),
    LEVEL_UP_MOVE(23, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(27, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(30, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(33, MOVE_NATURAL_GIFT),
    LEVEL_UP_MOVE(36, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(38, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(41, MOVE_SLAM),
    LEVEL_UP_MOVE(44, MOVE_TICKLE),
    LEVEL_UP_MOVE(46, MOVE_WRING_OUT),
    LEVEL_UP_MOVE(50, MOVE_POWER_WHIP),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_BURGELA] = sBurgelaLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_BURGELA] =
{
	.categoryName = _("Vine"),
	.height = 7,
	.weight = 200,
	.description = gBurgelaPokedexText,
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_BUNNELBY,
NATIONAL_DEX_BURGELA,
NATIONAL_DEX_BURMY,

NATIONAL_DEX_SIZZLIPEDE,
NATIONAL_DEX_BURGELA,
// 2'07" / 0.8m

NATIONAL_DEX_MIENFOO,
NATIONAL_DEX_BURGELA,
// 44.3 - 54.9 lbs / 20.1 - 24.9 kg


// ----------
// src/data/pokemon/pokedex_text.h
// ----------

const u8 gBurgelaPokedexText[] = _(
    "It hides among the shrubs by burrowing\n"
    "itself in the ground. The unruly vines\n"
    "hanging from its head can be clipped\n"
    "and planted to grow more.");


// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_BURGELA] =
{
	.baseHP        = 40,
	.baseAttack    = 40,
	.baseDefense   = 70,
	.baseSpeed     = 40,
	.baseSpAttack  = 70,
	.baseSpDefense = 45,
	.types = { TYPE_GRASS, TYPE_GRASS },
	.catchRate = 140,
	.expYield = 85,
	.evYield_Defense   = 1,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 20,
	.friendship = 70,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
	.abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
	.bodyColor = BODY_COLOR_BLUE,
	.noFlip = FALSE,
},


// ----------
// src/data/pokemon/teachable_learnsets.h
// ----------

static const u16 sBurgelaTeachableLearnset[] = {
    MOVE_ATTRACT,
    MOVE_BULLET_SEED,
    MOVE_CUT,
    MOVE_DOUBLE_TEAM,
    MOVE_FACADE,
    MOVE_FLASH,
    MOVE_FRUSTRATION,
    MOVE_GIGA_DRAIN,
    MOVE_HIDDEN_POWER,
    MOVE_PROTECT,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_RETURN,
    MOVE_ROCK_SMASH,
    MOVE_SECRET_POWER,
    MOVE_SHOCK_WAVE,
    MOVE_SLUDGE_BOMB,
    MOVE_SOLAR_BEAM,
    MOVE_SUNNY_DAY,
    MOVE_THIEF,
    MOVE_TOXIC,
    MOVE_BODY_SLAM,
    MOVE_DOUBLE_EDGE,
    MOVE_ENDURE,
    MOVE_MIMIC,
    MOVE_PSYCH_UP,
    MOVE_SLEEP_TALK,
    MOVE_SNORE,
    MOVE_SUBSTITUTE,
    MOVE_SWAGGER,
    MOVE_SWORDS_DANCE,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_BURGELA] = sBurgelaTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_BURGELA]                       = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(BURGELA, gMonBackPic_Burgela),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_BURGELA] = gMonFootprint_Burgela,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Burgela_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Burgela);

[SPECIES_BURGELA] = sAnims_Burgela,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_BURGELA]                       = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 18 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(BURGELA, gMonFrontPic_Burgela),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(BURGELA, gMonPalette_Burgela),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(BURGELA, gMonShinyPalette_Burgela),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_BURGELA] = _("Burgela"),


