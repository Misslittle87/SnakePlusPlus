#ifndef CONSOLERENDERER_H
#define CONSOLERENDERER_H

class ConsoleRenderer {
public:
    ConsoleRenderer(int width, int height);

    void Clear();
    void RenderBorder();
    void DrawSnake(int x, int y);

private:
    int width;
    int height;

    void SetCursorPos(int x, int y);
};

#endif
