#include "../include/craftingtable.h"


void CraftingTable::Init() {

  this->t_background = LoadTextureFromImage(background);
  this->t_table = LoadTextureFromImage(table);
  this->t_cloth = LoadTextureFromImage(cloth);
  this->t_whiteCloth = LoadTextureFromImage(whiteCloth);
  this->t_pot = LoadTextureFromImage(pot);
  this->t_boxes = LoadTextureFromImage(boxes);

  for ( int i = 0; i < 6; i++ ) {

    unlockedItems[i].Init(); 

  }

  downButton.Init();

}

void CraftingTable::Grid() {

  int j = 1;
  float x = 0;
  float y = 0; 

  for ( int i = 0; i < 6; i++ ) {

    unlockedItems[i].Draw( Vector2 { 16 * (float)(3+x)  , 16 * float( 3.2+ y)  } );

    x++;

    if ( i == j ) {
      y = y + 1.1;
      j = j+2;
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
