#include "../include/craftingtable.h"


void CraftingTable::Init() {

  this->t_background = LoadTextureFromImage(background);
  this->t_table = LoadTextureFromImage(table);
  this->t_cloth = LoadTextureFromImage(cloth);
  this->t_whiteCloth = LoadTextureFromImage(whiteCloth);
  this->t_pot = LoadTextureFromImage(pot);
  this->t_boxes = LoadTextureFromImage(boxes);
  this->t_lore = LoadTextureFromImage(lore);

  for ( int i = 0; i < 9; i++ ) {

    unlockedItems[i].Init(); 

  }

  downButton.Init();

}

void CraftingTable::Grid() {

  float x = 0;
  float y = 0; 

  if ( downButton.IsClick() ) {

    this->list_start = list_start+9;
    this->list_end = list_end+9;

  }

  int j;

  j = list_start + 2;

  for ( int i = list_start; i < list_end; i++ ) {

    if (!unlockedItems[i].isEmpty()) unlockedItems[i].Draw( Vector2 { 16 * (float)(1.8+x)  , 16 * float( 3.4+ y)  } );

    x++;

    if ( j == i ) {

      j = j+3;
      y = y + 1;
      x = 0;

    } 


  }

}

void CraftingTable::Background() {

  DrawTexture(t_background, 0, 0, WHITE);
  DrawTexture(t_table, 0, 0, WHITE);
  DrawTexture(t_cloth, 0, 0, WHITE);
  DrawTexture(t_whiteCloth, 0, 0, WHITE);
  DrawTexture(t_pot, 0, 0, WHITE);
  DrawTexture(t_boxes, 0, 0, WHITE);
  DrawTexture(t_lore, 0, 0, WHITE);

}

void CraftingTable::Draw() {

  Background();

  Grid();

  downButton.Draw( Vector2 { 16 * 2.8, 16 * 6.5 } );

  return;

}

GameState CraftingTable::Change() {

  return CRAFTING_TABLE;

}
