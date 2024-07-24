#include "../include/button.h"

#include "../include/raylib.h"

void Button::Init() {
  
  texture = LoadTextureFromImage(image);

}

bool Button::IsHover() {

  Vector2 mousePosition = GetMousePosition();
  Vector2 scaledMousePosition = { mousePosition.x * (GAME_WIDTH / (float)SCREEN_WIDTH), mousePosition.y * (GAME_HEIGHT / (float)SCREEN_HEIGHT) };

  if ( CheckCollisionPointRec(GetMousePosition(), rec) ) {

    return true;  

  }
  else {

    return false;

  }

}

bool Button::IsClick() {

  if ( IsHover() && IsMouseButtonUp(MOUSE_BUTTON_LEFT) ) {

    return true;

  }
  else {

    return false;

  }


}

void Button::Draw( Vector2 position ) {  

  rec.x = position.x;
  rec.y = position.y;

  if ( IsHover() ) DrawTextureV(this->texture, Vector2{position.x, position.y - 8}, WHITE); 
  else DrawTexture(this->texture, position.x, position.y, WHITE); 

}
