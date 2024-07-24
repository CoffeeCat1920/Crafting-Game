#include "../include/item.h"

#include <iostream>

void Item::Init() {

  this->texture = LoadTextureFromImage(this->image); 
  
  std::cout << "THE TEXTURE IS" << IsTextureReady(this->texture) << std::endl;

  return;

}

std::string Item::GetName() {

  return this->name;
}

bool Item::IsHover( Rectangle rec ) {


  Vector2 mousePosition = GetMousePosition();
  Vector2 scaledMousePosition = { mousePosition.x * (GAME_WIDTH / (float)SCREEN_WIDTH), mousePosition.y * (GAME_HEIGHT / (float)SCREEN_HEIGHT) };

  if ( CheckCollisionPointRec( scaledMousePosition , rec) ) {

    return true;
  }
  
  return false;

}

void Item::Draw( Vector2 position ) {

  rec.x = position.x;
  rec.y = position.y;

  if ( IsHover(rec) ) DrawTextureV(this->texture, Vector2{position.x, position.y - 8}, WHITE); 
  else DrawTexture(this->texture, position.x, position.y, WHITE); 

  return;

}
