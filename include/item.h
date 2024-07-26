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
    rec.width = 16;
    rec.height = 16;
  }

  void Init(); 
  bool IsHover( Rectangle rec );
  void Draw( Vector2 position );

  void SetLore( std::string lore );

  std::string GetName();

  bool isEmpty() const;

};

#endif // !ITEM_H
