#include <iostream>
#include "raylib.h"
#include "Game.h"


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
    Game game(10, 10);
    
    Player::head = LoadTexture("assets/head.png"); // Load texture from file into GPU memory (VRAM)
    Player::body = LoadTexture("assets/body.png");
    Player::body_curved = LoadTexture("assets/body_curved.png");
    Player::tail = LoadTexture("assets/tail.png");

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update      
        //----------------------------------------------------------------------------------
        game.update(GetFrameTime());

        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        game.draw(screenWidth, screenHeight);
        ClearBackground(RAYWHITE);

        
        


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

