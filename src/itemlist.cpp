#include "../include/itemlist.h"

Item water = Item( "WATER", LoadImage("./resources/items/pngs/water.png") );
Item dirt = Item( "DIRT", LoadImage("./resources/items/pngs/dirt.png") );
Item mud = Item( "MUD", LoadImage("./resources/items/pngs/mud.png") );

Item heart1 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );
Item heart2 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );
Item heart3 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );
Item heart4 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );
Item heart5 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );
Item heart6 = Item( "heart", LoadImage("./resources/items/pngs/heart.png") );

void SetLore() {

  water.SetLore("Beer which don't turn you high");
  dirt.SetLore("Thing which make thing dirty");
  mud.SetLore("Eww, it's on my hand");

}
