
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Jungela[];
extern const u32 gMonBackPic_Jungela[];
extern const u32 gMonShinyPalette_Jungela[];
extern const u32 gMonPalette_Jungela[];
extern const u8 gMonIcon_Jungela[];
extern const u8 gMonFootprint_Jungela[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_JUNGELA 909

#define FORMS_START SPECIES_JUNGELA


// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_JUNGELA,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_JUNGELA


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Jungela

cry_reverse Cry_Jungela
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Jungela::
	.incbin "sound/direct_sound_samples/cries/jungela.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(JUNGELA),

[SPECIES_JUNGELA - 1]        = ANIM_H_STRETCH,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_JUNGELA] = BACK_ANIM_V_STRETCH,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_JUNGELA] = gMonIcon_Jungela,

[SPECIES_JUNGELA] = 0,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_POKEMON_NATIONAL(JUMPLUFF),
EC_POKEMON_NATIONAL(JUNGELA),
EC_WORD_JUST,


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Jungela[] = INCBIN_U32("graphics/pokemon/jungela/anim_front.4bpp.lz");
const u32 gMonBackPic_Jungela[] = INCBIN_U32("graphics/pokemon/jungela/back.4bpp.lz");
const u32 gMonPalette_Jungela[] = INCBIN_U32("graphics/pokemon/jungela/normal.gbapal.lz");
const u32 gMonShinyPalette_Jungela[] = INCBIN_U32("graphics/pokemon/jungela/shiny.gbapal.lz");
const u8 gMonIcon_Jungela[] = INCBIN_U8("graphics/pokemon/jungela/icon.4bpp");
const u8 gMonFootprint_Jungela[] = INCBIN_U8("graphics/pokemon/jungela/footprint.1bpp");


// ----------
// src/data/pokemon/egg_moves.h
// ----------

egg_moves(JUNGELA,
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

[SPECIES_TANGELA]               = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH},
								   {EVO_ITEM, ITEM_PRIME_STONE, SPECIES_JUNGELA}},
								   

// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sJungelaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_BLOCK),
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
    LEVEL_UP_MOVE(40, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(43, MOVE_SLAM),
    LEVEL_UP_MOVE(46, MOVE_TICKLE),
    LEVEL_UP_MOVE(49, MOVE_WRING_OUT),
    LEVEL_UP_MOVE(50, MOVE_GRASSY_TERRAIN),
    LEVEL_UP_MOVE(53, MOVE_POWER_WHIP),
    LEVEL_UP_MOVE(56, MOVE_BLOCK),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_JUNGELA] = sJungelaLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_JUNGELA] =
{
	.categoryName = _("Mischief"),
	.height = 16,
	.weight = 554,
	.description = gJungelaPokedexText,
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_JUMPLUFF,
NATIONAL_DEX_JUNGELA,
NATIONAL_DEX_JYNX,

NATIONAL_DEX_ARTICUNO,
NATIONAL_DEX_JUNGELA,
NATIONAL_DEX_PIGNITE,

//NATIONAL_DEX_ENAMORUS, //Therian Form
NATIONAL_DEX_JUNGELA,
// 5'07" / 1.7m


// ----------
// src/data/pokemon/pokedex_text.h
// ----------

const u8 gJungelaPokedexText[] = _(
    "It compensates its poor vision with its\n"
    "heightened senses. Its self-styled vines\n"
	"are a source of pride, so it will help\n"
    "Burgela and Tangela style theirs.");


// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_JUNGELA] =
{
	.baseHP        = 90,
	.baseAttack    = 85,
	.baseDefense   = 125,
	.baseSpeed     = 75,
	.baseSpAttack  = 100,
	.baseSpDefense = 60,
	.types = { TYPE_GRASS, TYPE_GRASS },
	.catchRate = 30,
	.expYield = 211,
	.evYield_Defense   = 2,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 20,
	.friendship = 70,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
	.abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
	.bodyColor = BODY_COLOR_BLUE,
	.noFlip = FALSE,
},


// ----------
// src/data/pokemon/teachable_learnsets.h
// ----------

static const u16 sJungelaTeachableLearnset[] = {
    MOVE_AERIAL_ACE,
    MOVE_ATTRACT,
    MOVE_BULLET_SEED,
    MOVE_CUT,
    MOVE_CURSE,
    MOVE_DOUBLE_TEAM,
    MOVE_EARTHQUAKE,
    MOVE_FACADE,
    MOVE_FLASH,
    MOVE_FRUSTRATION,
    MOVE_GIGA_DRAIN,
    MOVE_HEADBUTT,
    MOVE_HIDDEN_POWER,
    MOVE_HYPER_BEAM,
    MOVE_HYPER_VOICE,
    MOVE_PROTECT,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_RETURN,
    MOVE_ROCK_SMASH,
    MOVE_ROCK_TOMB,
    MOVE_SECRET_POWER,
    MOVE_SHOCK_WAVE,
    MOVE_SLUDGE_BOMB,
    MOVE_SOLAR_BEAM,
    MOVE_SUNNY_DAY,
    MOVE_THIEF,
    MOVE_TOXIC,
    MOVE_ENDURE,
    MOVE_MIMIC,
    MOVE_MUD_SLAP,
    MOVE_PSYCH_UP,
    MOVE_ROCK_SLIDE,
    MOVE_SLEEP_TALK,
    MOVE_SNORE,
    MOVE_SUBSTITUTE,
    MOVE_SWAGGER,
    MOVE_SWEET_SCENT,
    MOVE_SWORDS_DANCE,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_JUNGELA] = sJungelaTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_JUNGELA]                    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(JUNGELA, gMonBackPic_Jungela),


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_JUNGELA] = gMonFootprint_Jungela,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Jungela_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Jungela);

[SPECIES_JUNGELA] = sAnims_Jungela,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_JUNGELA]                    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(JUNGELA, gMonFrontPic_Jungela),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(JUNGELA, gMonPalette_Jungela),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(JUNGELA, gMonShinyPalette_Jungela),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_JUNGELA] = _("Jungela"),


