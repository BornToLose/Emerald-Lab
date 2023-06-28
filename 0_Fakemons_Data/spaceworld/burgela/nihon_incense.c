
// ----------
// include/graphics.h
// ----------

extern const u32 gItemIcon_NihonIncense[];
extern const u32 gItemIconPalette_NihonIncense[];


// ----------
// include/constants/items.h
// ----------

#define ITEM_NIHON_INCENSE 763

#define ITEMS_COUNT 764


// ----------
// src/daycare.c
// ----------

{ SPECIES_TANGELA,      ITEM_NIHON_INCENSE, SPECIES_BURGELA },


// ----------
// src/data/item_icon_table.h
// ----------

[ITEM_NIHON_INCENSE] = {gItemIcon_NihonIncense, gItemIconPalette_NihonIncense},


// ----------
// src/data/items.h
// ----------

[ITEM_NIHON_INCENSE] =
{
	.name = _("Nihon Incnse"),
	.itemId = ITEM_SEA_INCENSE,
	.price = 2000,
	.holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
	.description = sNihonIncenseDesc,
	.pocket = POCKET_ITEMS,
	.type = ITEM_USE_BAG_MENU,
	.fieldUseFunc = ItemUseOutOfBattle_CannotUse,
	.flingPower = 10,
},


// ----------
// src/data/graphics/items.h
// ----------

const u32 gItemIcon_NihonIncense[] = INCBIN_U32("graphics/items/icons/nihon_incense.4bpp.lz");
const u32 gItemIconPalette_NihonIncense[] = INCBIN_U32("graphics/items/icon_palettes/nihon_incense.gbapal.lz");


// ----------
// src/data/text/item_descriptions.h
// ----------

static const u8 sNihonIncenseDesc[] = _(
    "A hold item that\n"
    "serves to prevent\n"
	"evolution.");

