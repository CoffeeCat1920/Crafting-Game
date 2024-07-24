#ifndef TITLE_H
#define TITLE_H

#include "./raylib.h"
#include "./settings.h"
#include "./gamemanager.h"

class Title {

private:

  Font boldFont;
  Font textFont;

public:

  void Init();
  void Draw();
  GameState Change();

};

#endif // !TITLE_H
