#include "../include/craftingtable.h"


void CraftingTable::Init() {

  this->t_background = LoadTextureFromImage(background);
  this->t_table = LoadTextureFromImage(table);
  this->t_cloth = LoadTextureFromImage(cloth);
  this->t_whiteCloth = LoadTextureFromImage(whiteCloth);
  this->t_pot = LoadTextureFromImage(pot);
  this->t_boxes = LoadTextureFromImage(boxes);

  mud.Init();

}

void CraftingTable::Grid() {

  const int DISTANCE = 10; 

  int x = 1;
  
  mud.Draw( Vector2  {16 * 2, 16 * 2} );

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

  return;

}

GameState CraftingTable::Change() {

  return CRAFTING_TABLE;
}
