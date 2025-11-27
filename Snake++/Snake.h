#ifndef SNAKE_H
#define SNAKE_H

class Snake {
public:
    Snake(int startX, int startY);

    int GetX() const;
    int GetY() const;

private:
    int x;
    int y;
};

#endif
