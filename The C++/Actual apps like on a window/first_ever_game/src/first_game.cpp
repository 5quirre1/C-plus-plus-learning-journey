#include <raylib.h>

int main() {
    int ballX = 400;
    int ballY = 400;
    Color green = {20, 160, 133, 255};
    InitWindow(800, 800, "greg");
    SetTargetFPS(60);


    while(WindowShouldClose() == false) {
        if (IsKeyDown(KEY_RIGHT)) {
            ballX += 3;
        }
        else if (IsKeyDown(KEY_LEFT)) {
            ballX -= 3;
        }
        else if (IsKeyDown(KEY_UP)) {
            ballY -= 3;
        }
        else if (IsKeyDown(KEY_DOWN)) {
            ballY += 3;
        }
        

        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballX, ballY, 20, WHITE);
        
        EndDrawing();
        
    }


    CloseWindow();
    return 0;
}
