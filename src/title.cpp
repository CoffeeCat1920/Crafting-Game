#include "../include/title.h"

void Title::Init() {

  this->boldFont = LoadFont("./resources/font/Kaph.ttf"); 
  this->textFont = LoadFont("./resources/font/m6x11.ttf"); 

}

void Title::Draw() {

  DrawTextEx(boldFont, "GAME NAME", Vector2{(float)BLOCK * 2.5, (float)BLOCK * 3}, boldFont.baseSize, 1, WHITE);

}

GameState Title::Change() {

  if (IsKeyPressed(KEY_SPACE)) return CRAFTING_TABLE;

  return TITLE;

}
