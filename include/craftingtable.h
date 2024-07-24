#ifndef CRAFTING_TABLE_H
#define CRAFTING_TABLE_H

#include "./gamemanager.h"
#include "./itemlist.h"
#include "../include/settings.h"
#include "raylib.h"

#include <cstring>
#include <ctime>
#include <vector>

#include <iostream>

class CraftingTable {

private:

  std::vector<Item> unlockedItems;

  Image background, table, cloth, whiteCloth, pot, boxes;

  Texture t_background, t_table, t_cloth, t_whiteCloth, t_pot, t_boxes;

public:

  CraftingTable() {

    unlockedItems.push_back( water );
    unlockedItems.push_back( mud );

    background = LoadImage("./resources/background/background.png");
    table = LoadImage("./resources/background/table.png");
    cloth = LoadImage("./resources/background/cloth.png");
    whiteCloth = LoadImage("./resources/background/white_cloth.png");
    pot = LoadImage("./resources/background/pot.png");
    boxes = LoadImage("./resources/background/blocks.png");

  }

  void Init(); 
  void Background();
  void Grid();
  void Draw();
  GameState Change();

};

#endif // !CRAFTING_TABLE_H
