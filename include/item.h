#ifndef ITEM_H
#define ITEM_H

#include "./raylib.h"
#include "./settings.h"

#include <string>

class Item {

private:

  std::string name;
  std::string lore;
  Image image;
  
  Texture texture;
  Rectangle rec;

public:

  Item( std::string name, Image image ) : name(name), image(image) {
    rec.width = 64;
    rec.height = 64;

    //texture = LoadTextureFromImage(image);

  }

  void Init(); 
  bool IsHover();
  void Draw( Vector2 position );

  void SetLore( std::string lore );

  std::string GetName();

};

#endif // !ITEM_H
