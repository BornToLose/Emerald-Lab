
// ----------
// include/graphics.h
// ----------

extern const u32 gItemIcon_PrimeStone[];
extern const u32 gItemIconPalette_PrimeStone[];


// ----------
// include/constants/items.h
// ----------

#define FIRST_NEW_ITEM 764
#define ITEM_PRIME_STONE 765
#define LAST_NEW_ITEM 766

#define ITEMS_COUNT 767

#define ITEM_HAS_EFFECT(item) (((item) >= ITEM_POTION && (item) <= LAST_BERRY_INDEX) || ((item) >= FIRST_NEW_ITEM && (item) <= LAST_NEW_ITEM))


// ----------
// src/data/item_icon_table.h
// ----------

[ITEM_PRIME_STONE] = {gItemIcon_PrimeStone, gItemIconPalette_PrimeStone},


// ----------
// src/data/items.h
// ----------

[ITEM_PRIME_STONE] =
{
	.name = _("Prime Stone"),
	.itemId = ITEM_PRIME_STONE,
	.price = 3000,
	.description = sPrimeStoneDesc,
	.pocket = POCKET_ITEMS,
	.type = ITEM_USE_PARTY_MENU,
	.fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
	.flingPower = 30,
},

// ----------
// src/data/pokemon/item_effects.h
// ----------

[ITEM_PRIME_STONE - ITEM_POTION]       = gItemEffect_EvoItem,


// ----------
// src/data/graphics/items.h
// ----------

const u32 gItemIcon_PrimeStone[] = INCBIN_U32("graphics/items/icons/prime_stone.4bpp.lz");
const u32 gItemIconPalette_PrimeStone[] = INCBIN_U32("graphics/items/icon_palettes/prime_stone.gbapal.lz");


// ----------
// src/data/text/item_descriptions.h
// ----------

static const u8 sPrimeStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

