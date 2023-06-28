
// ----------
// include/graphics.h
// ----------

extern const u32 gMonFrontPic_Phancero[];
extern const u32 gMonBackPic_Phancero[];
extern const u32 gMonShinyPalette_Phancero[];
extern const u32 gMonPalette_Phancero[];
extern const u8 gMonIcon_Phancero[];
extern const u8 gMonFootprint_Phancero[];

// ----------
// include/constants/pokedex.h
// ----------

NATIONAL_DEX_PHANCERO,

#define NATIONAL_DEX_COUNT  NATIONAL_DEX_PHANCERO


// ----------
// include/constants/species.h
// ----------

#define SPECIES_PHANCERO 912

#define FORMS_START SPECIES_PHANCERO


// ----------
// sound/cry_tables.inc
// ----------

cry Cry_Phancero

cry_reverse Cry_Phancero
	

// ----------
// sound/direct_sound_data.inc
// ----------

	.align 2
Cry_Phancero::
	.incbin "sound/direct_sound_samples/cries/phancero.bin"
	

// ----------
// src/pokemon.c
// ----------

SPECIES_TO_NATIONAL(PHANCERO),

[SPECIES_PHANCERO - 1]        = ANIM_V_SHAKE,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_PHANCERO] = BACK_ANIM_H_VIBRATE,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_PHANCERO] = gMonIcon_Phancero,

[SPECIES_PHANCERO] = 1,


// ----------
// src/data/easy_chat/easy_chat_words_by_letter.h
// ----------

EC_MOVE2(PETAL_DANCE),
EC_POKEMON_NATIONAL(PHANCERO),
DOUBLE_SPECIES_NAME
EC_POKEMON(PHANPY),


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonFrontPic_Phancero[] = INCBIN_U32("graphics/pokemon/phancero/anim_front.4bpp.lz");
const u32 gMonBackPic_Phancero[] = INCBIN_U32("graphics/pokemon/phancero/back.4bpp.lz");
const u32 gMonPalette_Phancero[] = INCBIN_U32("graphics/pokemon/phancero/normal.gbapal.lz");
const u32 gMonShinyPalette_Phancero[] = INCBIN_U32("graphics/pokemon/phancero/shiny.gbapal.lz");
const u8 gMonIcon_Phancero[] = INCBIN_U8("graphics/pokemon/phancero/icon.4bpp");
const u8 gMonFootprint_Phancero[] = INCBIN_U8("graphics/pokemon/phancero/footprint.1bpp");


// ----------
// src/data/pokemon/egg_moves.h
// ----------



// ----------
// src/data/pokemon/evolution.h
// ----------



// ----------
// src/data/pokemon/level_up_learnsets.h
// ----------

static const struct LevelUpMove sPhanceroLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_POUND),
    LEVEL_UP_MOVE( 1, MOVE_TELEPORT),
    LEVEL_UP_MOVE( 7, MOVE_GUST),
    LEVEL_UP_MOVE(10, MOVE_LICK),
    LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_ACID_ARMOR),
    LEVEL_UP_MOVE(35, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(40, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(45, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(50, MOVE_SKY_ATTACK),
    LEVEL_UP_MOVE(60, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(70, MOVE_WRAP),
    LEVEL_UP_MOVE(75, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(80, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(85, MOVE_MIRROR_MOVE),
    LEVEL_UP_MOVE(90, MOVE_AIR_SLASH),
    LEVEL_UP_MOVE(95, MOVE_TRI_ATTACK),
    LEVEL_UP_MOVE(100, MOVE_JUMP_KICK),
    LEVEL_UP_END
};


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_PHANCERO] = sPhanceroLevelUpLearnset,


// ----------
// src/data/pokemon/pokedex_entries.h
// ----------

[NATIONAL_DEX_PHANCERO] =
{
	.categoryName = _("Glitchbird"),
	.height = 15,
	.weight = 468,
	.description = gPhanceroPokedexText,
	.pokemonScale = 331,
	.pokemonOffset = 10,
	.trainerScale = 256,
	.trainerOffset = 0,
},


// ----------
// src/data/pokemon/pokedex_orders.h
// ----------

NATIONAL_DEX_PETILIL,
NATIONAL_DEX_PHANCERO,
NATIONAL_DEX_PHANPY,

NATIONAL_DEX_BLISSEY,
NATIONAL_DEX_PHANCERO,
NATIONAL_DEX_ABSOL,

NATIONAL_DEX_MR_RIME,
NATIONAL_DEX_PHANCERO,
// 5'03" / 1.6m


// ----------
// src/data/pokemon/pokedex_text.h
// ----------

const u8 gPhanceroPokedexText[] = _(
    "It resides in a lost realm within which\n"
    "creates illusions to protect itself. It\n"
    "only ever reveals itself under unusual\n"
	"circumstances.");


// ----------
// src/data/pokemon/species_info.h
// ----------

[SPECIES_PHANCERO] =
{
	.baseHP        = 178,
	.baseAttack    = 137,
	.baseDefense   = 57,
	.baseSpeed     = 128,
	.baseSpAttack  = 85,
	.baseSpDefense = 65,
	.types = { TYPE_GHOST, TYPE_FLYING },
	.catchRate = 3,
	.expYield = 216,
    .genderRatio = MON_GENDERLESS,
	.eggCycles = 80,
	.friendship = 0,
	.growthRate = GROWTH_FAST,
    .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
	.abilities = {ABILITY_CACOPHONY, ABILITY_NONE, ABILITY_CONTRARY}, // Change to Cacophony once implemented
	.bodyColor = BODY_COLOR_PURPLE,
	.noFlip = FALSE,
},


// ----------
// src/data/pokemon/teachable_learnsets.h
// ----------

static const u16 sPhanceroTeachableLearnset[] = {
	MOVE_AERIAL_ACE,
	MOVE_BLIZZARD,
	MOVE_CURSE,
	MOVE_CUT,
	MOVE_DARK_PULSE,
	MOVE_DETECT,
	MOVE_DOUBLE_TEAM,
	MOVE_DREAM_EATER,
	MOVE_EARTHQUAKE,
	MOVE_FLY,
	MOVE_FOCUS_BLAST,
	MOVE_FRUSTRATION,
	MOVE_HEADBUTT,
	MOVE_HEAT_WAVE,
	MOVE_HIDDEN_POWER,
	MOVE_HYPER_BEAM,
	MOVE_ICY_WIND,
	MOVE_KNOCK_OFF,
	MOVE_NIGHTMARE,
	MOVE_PROTECT,
	MOVE_PSYCHIC,
	MOVE_PSYCH_UP,
	MOVE_RAIN_DANCE,
	MOVE_REST,
	MOVE_RETURN,
	MOVE_ROOST,
	MOVE_SANDSTORM,
	MOVE_SEISMIC_TOSS,
	MOVE_SHADOW_BALL,
	MOVE_SHADOW_CLAW,
	MOVE_SKY_ATTACK,
	MOVE_SNORE,
	MOVE_SOLAR_BEAM,
	MOVE_STEEL_WING,
	MOVE_SUPERPOWER,
	MOVE_SURF,
	MOVE_SWIFT,
	MOVE_THIEF,
	MOVE_THUNDER,
	MOVE_THUNDER_WAVE,
	MOVE_TOXIC,
	MOVE_TRI_ATTACK,
	MOVE_WILL_O_WISP,
    MOVE_BODY_SLAM,
    MOVE_DOUBLE_EDGE,
    MOVE_ENDURE,
    MOVE_COUNTER,
    MOVE_MIMIC,
    MOVE_MUD_SLAP,
    MOVE_SLEEP_TALK,
    MOVE_SUBSTITUTE,
    MOVE_SWAGGER,
    MOVE_SWORDS_DANCE,
    MOVE_UNAVAILABLE,
};


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_PHANCERO] = sPhanceroTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_PHANCERO]                     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(PHANCERO, gMonBackPic_Phancero),


// ----------
// src/data/pokemon_graphics/enemy_mon_elevation.h
// ----------

[SPECIES_PHANCERO] = 6,


// ----------
// src/data/pokemon_graphics/footprint_table.h
// ----------

[SPECIES_PHANCERO] = gMonFootprint_Phancero,


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

static const union AnimCmd sAnim_Phancero_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

SINGLE_ANIMATION(Phancero);

[SPECIES_PHANCERO] = sAnims_Phancero,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_PHANCERO]                     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(PHANCERO, gMonFrontPic_Phancero),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(PHANCERO, gMonPalette_Phancero),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(PHANCERO, gMonShinyPalette_Phancero),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_PHANCERO] = _("Phancero"),


