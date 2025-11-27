#include <iostream>

#include "ConsoleRenderer.h"
#include "Snake.h"

using namespace std;

int main() {
    ConsoleRenderer renderer(100, 100);

    renderer.Clear();
    renderer.RenderBorder();

    Snake snake(20, 10);

    renderer.DrawSnake(snake.GetX(), snake.GetY());


    return 0;
}