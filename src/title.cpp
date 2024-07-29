#include "../include/title.h"

void Title::Init() {

  this->boldFont = LoadFont("./resources/font/Kaph.ttf"); 
  this->textFont = LoadFont("./resources/font/tom_thumb.png"); 

}

void Title::Draw() {

  DrawTextEx(textFont, "GAME NAME", Vector2{(float)BLOCK * 2.5, (float)BLOCK * 3}, textFont.baseSize/2, 1, BLACK);

}

GameState Title::Change() {

  if (IsKeyPressed(KEY_SPACE)) return CRAFTING_TABLE;

  return TITLE;

}
