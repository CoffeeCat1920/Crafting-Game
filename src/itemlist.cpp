#include "../include/itemlist.h"

Item water = Item( "WATER", LoadImage("./resources/items/pngs/water.png"), "Beer which don't make you high" );
Item dirt = Item( "DIRT", LoadImage("./resources/items/pngs/dirt.png"), "Thing which make other things dirty" );
Item mud = Item( "MUD", LoadImage("./resources/items/pngs/mud.png"), "Perfect to ruin shoes" );

Item heart1 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );
Item heart2 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );
Item heart3 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );
Item heart4 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );
Item heart5 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );
Item heart6 = Item( "heart", LoadImage("./resources/items/pngs/heart.png"), "\0" );

void SetLore() {

  water.SetLore("Beer which don't turn you high");
  dirt.SetLore("Thing which make thing dirty");
  mud.SetLore("Eww, it's on my hand");

}
