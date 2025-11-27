#include <iostream>

#include "Snake.h"

Snake::Snake(int startX, int startY) : x(startX), y(startY)
{
}

int Snake::GetX() const {
    return x;
}

int Snake::GetY() const {
    return y;
}
