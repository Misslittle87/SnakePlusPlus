#include "ConsoleRenderer.h"
#include <iostream>

ConsoleRenderer::ConsoleRenderer(int width, int height) : width(width), height(height)
{
    Clear();
}

void ConsoleRenderer::SetCursorPos(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}

void ConsoleRenderer::Clear() {
    std::cout << "\033[2J";
}

void ConsoleRenderer::DrawSnake(int x, int y) {
    SetCursorPos(x, y);
    std::cout << "O";
}


void ConsoleRenderer::RenderBorder() {
    for (int x = 0; x < width; x++) {
        SetCursorPos(x, 0);
        std::cout << "#";
    }

    for (int x = 0; x < width; x++) {
        SetCursorPos(x, height - 1);
        std::cout << "#";
    }

    for (int y = 0; y < height; y++) {
        SetCursorPos(0, y);
        std::cout << "#";

        SetCursorPos(width - 1, y);
        std::cout << "#";
    }
}
