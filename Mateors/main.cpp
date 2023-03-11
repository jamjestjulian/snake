#include <iostream>
#include "raylib.h"


int main(void)
{
    // Window Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1280;
    const int screenHeight = 720;
    InitWindow(screenWidth, screenHeight, "snake");
    SetTargetFPS(60); 
    //--------------------------------------------------------------------------------------
    // Initialization

    Texture2D head = LoadTexture("assets/head.png"); // Load texture from file into GPU memory (VRAM)
    Texture2D body = LoadTexture("assets/body.png");
    Texture2D body_curved = LoadTexture("assets/body_curved.png");
    Texture2D tail = LoadTexture("assets/tail.png");

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        
        DrawTexturePro(head,Vector2{100,0},180,1, WHITE);
        DrawTexturePro(tail, Vector2{ 100,50 },180,1, WHITE);
        DrawTexturePro(body, Vector2{ 100,112 },90,1,WHITE);
        DrawTexturePro(body_curved, Vector2{ 100,300 },0,1,WHITE);



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

