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

bool Item::IsHover() {

  if ( CheckCollisionPointRec( GetMousePosition() , rec) ) {
    return true;
  }
  
  return false;

}

void Item::Draw( Vector2 position ) {

  rec.x = position.x;
  rec.y = position.y;


  if ( IsHover() ) DrawTextureV(this->texture, Vector2{position.x, position.y - 8}, WHITE); 
  else DrawTexture(this->texture, position.x, position.y, WHITE); 

  return;

}
