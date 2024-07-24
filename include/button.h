#ifndef BUTTON_H
#define BUTTON_H

#include "../include/raylib.h"
#include "../include/settings.h"

class Button {

private:

  Image image;
  Texture2D texture;

  Rectangle rec;

  bool IsHover();

public:

  Button ( Image image ) : image(image) {

    rec.width = 16; 
    rec.height = 16;

  }

  void Init();

  bool IsClick();
  void Draw( Vector2 position );

};

#endif // !BUTTON_H
