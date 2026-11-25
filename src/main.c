#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "Olá, Raylib!");
    TraceLog(LOG_INFO, "Raylib version (macro) : %s", RAYLIB_VERSION);
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawPixel(350, 340, RED);
        DrawLine(150, 350, 550, 350, BLUE);
        DrawText(TextFormat("Raylib v%s", RAYLIB_VERSION), 20, 20, 20,
                 DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
