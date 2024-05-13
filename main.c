#include "raylib.h"
#include "BasicVariables.h"
int main() {

    const int screenWidth = 800;
    const int screenHeight = 600;

    
    InitWindow(screenWidth, screenHeight, "Raylib basic window");

    //full screen
    ToggleFullscreen();
    //FPS
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
      BeginDrawing();
      ClearBackground(WHITE);                      //draw the background   
      DrawText("It works!", 50, 50, 20, BLACK);    //DrawText(TEXT,position_x,position_y,size,color)
      EndDrawing();
    }
    CloseWindow();
    return 0;
}
