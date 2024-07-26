#include "../include/craftingtable.h"


void CraftingTable::Init() {

  this->t_background = LoadTextureFromImage(background);
  this->t_table = LoadTextureFromImage(table);
  this->t_cloth = LoadTextureFromImage(cloth);
  this->t_whiteCloth = LoadTextureFromImage(whiteCloth);
  this->t_pot = LoadTextureFromImage(pot);
  this->t_boxes = LoadTextureFromImage(boxes);

  for ( int i = 0; i < 9; i++ ) {

    unlockedItems[i].Init(); 

  }

  downButton.Init();

}

void CraftingTable::Grid() {

  float x = 0;
  float y = 0; 

  if ( downButton.IsClick() ) {

    this->list_start = list_start+6;
    this->list_end = list_end+6;

  }

  int j = list_start + 1;

  for ( int i = list_start; i < list_end; i++ ) {

    if (!unlockedItems[i].isEmpty()) unlockedItems[i].Draw( Vector2 { 16 * (float)(3+x)  , 16 * float( 3.2+ y)  } );

    x++;

    if ( j == i ) {

      j = j+2;
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

}

void CraftingTable::Draw() {

  Background();

  Grid();

  downButton.Draw( Vector2 { 16 * 3.5, 16 * 6.5 } );

  return;

}

GameState CraftingTable::Change() {

  return CRAFTING_TABLE;

}
