#ifndef ITEM_H
#define ITEM_H

#include "./raylib.h"
#include "./settings.h"

#include <iostream>
#include <string>

class Item {

private:

  std::string name;
  std::string lore;
  Image image;
  
  Texture texture;
  Rectangle rec;

  bool selected;
  Color tint;


public:

  Item() {}

  Item( std::string name, Image image, std::string lore) : name(name), image(image) {
    
    rec.width = 16;
    rec.height = 16;

    selected = false;
    tint = WHITE;
     
    lore = lore;

  }

  void Init(); 
  bool IsHover( Rectangle rec );
  bool isClick();
  void DrawText();
  void Draw( Vector2 position );

  void SetLore( std::string lore );
  std::string GetName();

  bool isEmpty() const;

};

#endif // !ITEM_H
