#include "../include/item.h"

void Item::Init() {

  this->texture = LoadTextureFromImage(this->image); 
  
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

  if ( IsHover(rec) ) DrawTextureV(this->texture, Vector2{position.x, position.y - 2}, WHITE); 
  else DrawTexture(this->texture, position.x, position.y, WHITE); 

  return;

}

bool Item::isEmpty() const {

  return !IsTextureReady(this->texture) || this->name.empty();

}
