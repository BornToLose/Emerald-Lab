
// ----------
// include/graphics.h
// ----------

extern const u32 gMonShinyPalette_KecleonRed[];
extern const u32 gMonPalette_KecleonRed[];
extern const u8 gMonIcon_KecleonRed[];

extern const u32 gMonShinyPalette_KecleonBrown[];
extern const u32 gMonPalette_KecleonBrown[];
extern const u8 gMonIcon_KecleonBrown[];

extern const u32 gMonShinyPalette_KecleonOrange[];
extern const u32 gMonPalette_KecleonOrange[];
extern const u8 gMonIcon_KecleonOrange[];

extern const u32 gMonShinyPalette_KecleonCyan[];
extern const u32 gMonPalette_KecleonCyan[];
extern const u8 gMonIcon_KecleonCyan[];

extern const u32 gMonShinyPalette_KecleonBlue[];
extern const u32 gMonPalette_KecleonBlue[];
extern const u8 gMonIcon_KecleonBlue[];

extern const u32 gMonShinyPalette_KecleonPurple[];
extern const u32 gMonPalette_KecleonPurple[];
extern const u8 gMonIcon_KecleonPurple[];


// ----------
// include/constants/species.h
// ----------

#define SPECIES_KECLEON_RED		       		 FORMS_START + 330
#define SPECIES_KECLEON_BROWN         		 FORMS_START + 331
#define SPECIES_KECLEON_ORANGE       		 FORMS_START + 332
#define SPECIES_KECLEON_CYAN         		 FORMS_START + 333
#define SPECIES_KECLEON_BLUE          		 FORMS_START + 334
#define SPECIES_KECLEON_PURPLE          	 FORMS_START + 335

#define SPECIES_EGG SPECIES_KECLEON_PURPLE + 1


// ----------
// sound/cry_tables.inc
// ----------

@ Kecleon
cry Cry_Kecleon
cry Cry_Kecleon
cry Cry_Kecleon
cry Cry_Kecleon
cry Cry_Kecleon
cry Cry_Kecleon

@ Kecleon
cry_reverse Cry_Kecleon
cry_reverse Cry_Kecleon
cry_reverse Cry_Kecleon
cry_reverse Cry_Kecleon
cry_reverse Cry_Kecleon
cry_reverse Cry_Kecleon
	
	
// ----------
// src/pokemon.c
// ----------

[SPECIES_KECLEON_RED - 1] = NATIONAL_DEX_KECLEON,
[SPECIES_KECLEON_BROWN - 1] = NATIONAL_DEX_KECLEON,
[SPECIES_KECLEON_ORANGE - 1] = NATIONAL_DEX_KECLEON,
[SPECIES_KECLEON_CYAN - 1] = NATIONAL_DEX_KECLEON,
[SPECIES_KECLEON_BLUE - 1] = NATIONAL_DEX_KECLEON,
[SPECIES_KECLEON_PURPLE - 1] = NATIONAL_DEX_KECLEON,

[SPECIES_KECLEON_RED - 1]     = 30,
[SPECIES_KECLEON_BROWN - 1]   = 30,
[SPECIES_KECLEON_ORANGE - 1]  = 30,
[SPECIES_KECLEON_CYAN - 1]    = 30,
[SPECIES_KECLEON_BLUE - 1]    = 30,
[SPECIES_KECLEON_PURPLE - 1]  = 30,

[SPECIES_KECLEON_RED - 1]        = ANIM_FLICKER_INCREASING,
[SPECIES_KECLEON_BROWN - 1]      = ANIM_FLICKER_INCREASING,
[SPECIES_KECLEON_ORANGE - 1]     = ANIM_FLICKER_INCREASING,
[SPECIES_KECLEON_CYAN - 1]       = ANIM_FLICKER_INCREASING,
[SPECIES_KECLEON_BLUE - 1]       = ANIM_FLICKER_INCREASING,
[SPECIES_KECLEON_PURPLE - 1]     = ANIM_FLICKER_INCREASING,


// ----------
// src/pokemon_animation.c
// ----------

[SPECIES_KECLEON_RED]                       = BACK_ANIM_H_VIBRATE,
[SPECIES_KECLEON_BROWN]                     = BACK_ANIM_H_VIBRATE,
[SPECIES_KECLEON_ORANGE]                    = BACK_ANIM_H_VIBRATE,
[SPECIES_KECLEON_CYAN]                      = BACK_ANIM_H_VIBRATE,
[SPECIES_KECLEON_BLUE]                      = BACK_ANIM_H_VIBRATE,
[SPECIES_KECLEON_PURPLE]                    = BACK_ANIM_H_VIBRATE,


// ----------
// src/pokemon_icon.c
// ----------

[SPECIES_KECLEON_RED] = gMonIcon_KecleonRed,
[SPECIES_KECLEON_BROWN] = gMonIcon_KecleonBrown,
[SPECIES_KECLEON_ORANGE] = gMonIcon_KecleonOrange,
[SPECIES_KECLEON_CYAN] = gMonIcon_KecleonCyan,
[SPECIES_KECLEON_BLUE] = gMonIcon_KecleonBlue,
[SPECIES_KECLEON_PURPLE] = gMonIcon_KecleonPurple,

[SPECIES_KECLEON_RED] = 0,
[SPECIES_KECLEON_BROWN] = 2,
[SPECIES_KECLEON_ORANGE] = 0,
[SPECIES_KECLEON_CYAN] = 0,
[SPECIES_KECLEON_BLUE] = 0,
[SPECIES_KECLEON_PURPLE] = 2,


// ----------
// src/data/graphics/pokemon.h
// ----------

const u32 gMonPalette_KecleonRed[] = INCBIN_U32("graphics/pokemon/kecleon/red/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonRed[] = INCBIN_U32("graphics/pokemon/kecleon/red/shiny.gbapal.lz");
const u8 gMonIcon_KecleonRed[] = INCBIN_U8("graphics/pokemon/kecleon/red/icon.4bpp");

const u32 gMonPalette_KecleonBrown[] = INCBIN_U32("graphics/pokemon/kecleon/brown/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonBrown[] = INCBIN_U32("graphics/pokemon/kecleon/brown/shiny.gbapal.lz");
const u8 gMonIcon_KecleonBrown[] = INCBIN_U8("graphics/pokemon/kecleon/brown/icon.4bpp");

const u32 gMonPalette_KecleonOrange[] = INCBIN_U32("graphics/pokemon/kecleon/orange/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonOrange[] = INCBIN_U32("graphics/pokemon/kecleon/orange/shiny.gbapal.lz");
const u8 gMonIcon_KecleonOrange[] = INCBIN_U8("graphics/pokemon/kecleon/orange/icon.4bpp");

const u32 gMonPalette_KecleonCyan[] = INCBIN_U32("graphics/pokemon/kecleon/cyan/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonCyan[] = INCBIN_U32("graphics/pokemon/kecleon/cyan/shiny.gbapal.lz");
const u8 gMonIcon_KecleonCyan[] = INCBIN_U8("graphics/pokemon/kecleon/cyan/icon.4bpp");

const u32 gMonPalette_KecleonBlue[] = INCBIN_U32("graphics/pokemon/kecleon/blue/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonBlue[] = INCBIN_U32("graphics/pokemon/kecleon/blue/shiny.gbapal.lz");
const u8 gMonIcon_KecleonBlue[] = INCBIN_U8("graphics/pokemon/kecleon/blue/icon.4bpp");

const u32 gMonPalette_KecleonPurple[] = INCBIN_U32("graphics/pokemon/kecleon/purple/normal.gbapal.lz");
const u32 gMonShinyPalette_KecleonPurple[] = INCBIN_U32("graphics/pokemon/kecleon/purple/shiny.gbapal.lz");
const u8 gMonIcon_KecleonPurple[] = INCBIN_U8("graphics/pokemon/kecleon/purple/icon.4bpp");


// ----------
// src/data/pokemon/level_up_learnset_pointers.h
// ----------

[SPECIES_KECLEON_RED] = sKecleonLevelUpLearnset,
[SPECIES_KECLEON_BROWN] = sKecleonLevelUpLearnset,
[SPECIES_KECLEON_ORANGE] = sKecleonLevelUpLearnset,
[SPECIES_KECLEON_CYAN] = sKecleonLevelUpLearnset,
[SPECIES_KECLEON_BLUE] = sKecleonLevelUpLearnset,
[SPECIES_KECLEON_PURPLE] = sKecleonLevelUpLearnset,


// ----------
// src/data/pokemon/species_info.h
// ----------

#define KECLEON_SPECIES_INFO(color)                                         \
    {                                                                       \
        .baseHP        = 60,                                                \
        .baseAttack    = 90,                                                \
        .baseDefense   = 70,                                                \
        .baseSpeed     = 40,                                                \
        .baseSpAttack  = 60,                                                \
        .baseSpDefense = 120,                                               \
        .types = { TYPE_NORMAL, TYPE_NORMAL},                               \
        .catchRate = 200,                                                   \
        .expYield = 154,                                                    \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                   \
        .abilities = {ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN}, \
        .bodyColor = color,                                                 \
        .noFlip = FALSE,                                                    \
    }

[SPECIES_KECLEON] = KECLEON_SPECIES_INFO(BODY_COLOR_GREEN),

[SPECIES_KECLEON_RED]    = KECLEON_SPECIES_INFO(BODY_COLOR_RED),
[SPECIES_KECLEON_BROWN]    = KECLEON_SPECIES_INFO(BODY_COLOR_BROWN),
[SPECIES_KECLEON_ORANGE]    = KECLEON_SPECIES_INFO(BODY_COLOR_BROWN),
[SPECIES_KECLEON_CYAN]    = KECLEON_SPECIES_INFO(BODY_COLOR_BLUE),
[SPECIES_KECLEON_BLUE]    = KECLEON_SPECIES_INFO(BODY_COLOR_BLUE),
[SPECIES_KECLEON_PURPLE]    = KECLEON_SPECIES_INFO(BODY_COLOR_PURPLE),


// ----------
// src/data/pokemon/teachable_learnset_pointers.h
// ----------

[SPECIES_KECLEON_RED] = sKecleonTeachableLearnset,
[SPECIES_KECLEON_BROWN] = sKecleonTeachableLearnset,
[SPECIES_KECLEON_ORANGE] = sKecleonTeachableLearnset,
[SPECIES_KECLEON_CYAN] = sKecleonTeachableLearnset,
[SPECIES_KECLEON_BLUE] = sKecleonTeachableLearnset,
[SPECIES_KECLEON_PURPLE] = sKecleonTeachableLearnset,


// ----------
// src/data/pokemon_graphics/back_pic_coordinates.h
// ----------

[SPECIES_KECLEON_RED]                  = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
[SPECIES_KECLEON_BROWN]                = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
[SPECIES_KECLEON_ORANGE]               = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
[SPECIES_KECLEON_CYAN]                 = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
[SPECIES_KECLEON_BLUE]                 = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
[SPECIES_KECLEON_PURPLE]               = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },


// ----------
// src/data/pokemon_graphics/back_pic_table.h
// ----------

SPECIES_SPRITE(KECLEON_RED, gMonBackPic_Kecleon),
SPECIES_SPRITE(KECLEON_BROWN, gMonBackPic_Kecleon),
SPECIES_SPRITE(KECLEON_ORANGE, gMonBackPic_Kecleon),
SPECIES_SPRITE(KECLEON_CYAN, gMonBackPic_Kecleon),
SPECIES_SPRITE(KECLEON_BLUE, gMonBackPic_Kecleon),
SPECIES_SPRITE(KECLEON_PURPLE, gMonBackPic_Kecleon),


// ----------
// src/data/pokemon_graphics/front_pic_anims.h
// ----------

[SPECIES_KECLEON_RED] = sAnims_Kecleon,
[SPECIES_KECLEON_BROWN] = sAnims_Kecleon,
[SPECIES_KECLEON_ORANGE] = sAnims_Kecleon,
[SPECIES_KECLEON_CYAN] = sAnims_Kecleon,
[SPECIES_KECLEON_BLUE] = sAnims_Kecleon,
[SPECIES_KECLEON_PURPLE] = sAnims_Kecleon,


// ----------
// src/data/pokemon_graphics/front_pic_coordinates.h
// ----------

[SPECIES_KECLEON_RED]                  = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
[SPECIES_KECLEON_BROWN]                = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
[SPECIES_KECLEON_ORANGE]               = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
[SPECIES_KECLEON_CYAN]                 = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
[SPECIES_KECLEON_BLUE]                 = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
[SPECIES_KECLEON_PURPLE]               = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },


// ----------
// src/data/pokemon_graphics/front_pic_table.h
// ----------

SPECIES_SPRITE(KECLEON_RED, gMonFrontPic_Kecleon),
SPECIES_SPRITE(KECLEON_BROWN, gMonFrontPic_Kecleon),
SPECIES_SPRITE(KECLEON_ORANGE, gMonFrontPic_Kecleon),
SPECIES_SPRITE(KECLEON_CYAN, gMonFrontPic_Kecleon),
SPECIES_SPRITE(KECLEON_BLUE, gMonFrontPic_Kecleon),
SPECIES_SPRITE(KECLEON_PURPLE, gMonFrontPic_Kecleon),


// ----------
// src/data/pokemon_graphics/palette_table.h
// ----------

SPECIES_PAL(KECLEON_RED, gMonPalette_KecleonRed),
SPECIES_PAL(KECLEON_BROWN, gMonPalette_KecleonBrown),
SPECIES_PAL(KECLEON_ORANGE, gMonPalette_KecleonOrange),
SPECIES_PAL(KECLEON_CYAN, gMonPalette_KecleonCyan),
SPECIES_PAL(KECLEON_BLUE, gMonPalette_KecleonBlue),
SPECIES_PAL(KECLEON_PURPLE, gMonPalette_KecleonPurple),


// ----------
// src/data/pokemon_graphics/shiny_palette_table.h
// ----------

SPECIES_SHINY_PAL(KECLEON_RED, gMonPalette_KecleonRed),
SPECIES_SHINY_PAL(KECLEON_BROWN, gMonShinyPalette_KecleonBrown),
SPECIES_SHINY_PAL(KECLEON_ORANGE, gMonPalette_KecleonOrange),
SPECIES_SHINY_PAL(KECLEON_CYAN, gMonPalette_KecleonCyan),
SPECIES_SHINY_PAL(KECLEON_BLUE, gMonShinyPalette_KecleonBlue),
SPECIES_SHINY_PAL(KECLEON_PURPLE, gMonShinyPalette_KecleonPurple),


// ----------
// src/data/text/species_names.h
// ----------

[SPECIES_KECLEON_RED] = _("Kecleon"),
[SPECIES_KECLEON_BROWN] = _("Kecleon"),
[SPECIES_KECLEON_ORANGE] = _("Kecleon"),
[SPECIES_KECLEON_CYAN] = _("Kecleon"),
[SPECIES_KECLEON_BLUE] = _("Kecleon"),
[SPECIES_KECLEON_PURPLE] = _("Kecleon"),


