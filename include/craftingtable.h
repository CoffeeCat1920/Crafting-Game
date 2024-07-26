#ifndef CRAFTING_TABLE_H
#define CRAFTING_TABLE_H

#include "./gamemanager.h"
#include "./itemlist.h"
#include "../include/settings.h"
#include "button.h"
#include "raylib.h"

#include <cstring>
#include <ctime>
#include <vector>

#include <iostream>

class CraftingTable {

private:

  std::vector<Item> unlockedItems;

  Button downButton;

  Image background, table, cloth, whiteCloth, pot, boxes;

  Texture t_background, t_table, t_cloth, t_whiteCloth, t_pot, t_boxes;

  int list_start, list_end;

public:

  CraftingTable() : downButton( LoadImage("./resources/ui/png/arrow.png") ) {

    unlockedItems.push_back( water );
    unlockedItems.push_back( dirt );
    unlockedItems.push_back( mud );
    
    unlockedItems.push_back( heart1 );
    unlockedItems.push_back( heart2 );
    unlockedItems.push_back( heart3 );

    unlockedItems.push_back( heart4 );
    unlockedItems.push_back( heart5 );
    unlockedItems.push_back( heart6 );

    background = LoadImage("./resources/background/background.png");
    table = LoadImage("./resources/background/table.png");
    cloth = LoadImage("./resources/background/cloth.png");
    whiteCloth = LoadImage("./resources/background/white_cloth.png");
    pot = LoadImage("./resources/background/pot.png");
    boxes = LoadImage("./resources/background/blocks.png");

    list_start = 0;
    list_end = 6;


  }

  void Init(); 
  void Background();
  void Grid();
  void Draw();
  GameState Change();

};

#endif // !CRAFTING_TABLE_H
