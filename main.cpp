#include <iostream>
#include "./include/raylib.h"
#include "./include/settings.h"
#include "./include/gamemanager.h"
#include "./include/title.h"
#include "./include/craftingtable.h"

class Game {

private:

  GameState currentState; 

  Title title;
  CraftingTable craftingtable;

  RenderTexture2D target; 

public:

  Game() : currentState(CRAFTING_TABLE) {}

  void Init() {
    title.Init();
    craftingtable.Init();

    target = LoadRenderTexture(GAME_WIDTH, GAME_HEIGHT);

    return;
  }


  void Draw() {
    // Start drawing to the render texture
    BeginTextureMode(target);
    ClearBackground(RAYWHITE);

    switch (currentState) {
      case TITLE:
        title.Draw();
        currentState = title.Change();
        break;

      case CRAFTING_TABLE:
        craftingtable.Draw();
        currentState = craftingtable.Change();
        break;

      default:
        break;
    }

    EndTextureMode(); // End drawing to the render texture

    // Start drawing to the screen
    BeginDrawing();
    ClearBackground(BLACK);

    // Draw the render texture scaled up from 192x192 to 512x512
    DrawTexturePro(target.texture,
                   { 0, 0, (float)target.texture.width, -(float)target.texture.height }, // Flip vertically by using negative height
                   { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT },
                   { 0, 0 },
                   0.0f,
                   WHITE);

    EndDrawing();
  }


  ~Game() {
    //UnloadRenderTexture(target); // Unload render texture
  }

};

int main (int argc, char *argv[]) {
  
  std::cout << "Game Start" << std::endl;

  Game game;

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "I made immortality :)");

  game.Init();

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    game.Draw();
  }

  CloseWindow();

  return 0;
}
