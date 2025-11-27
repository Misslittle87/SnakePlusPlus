#ifndef CONSOLERENDERER_H
#define CONSOLERENDERER_H

class ConsoleRenderer {
public:
    ConsoleRenderer(int width, int height);

    void Clear();
    void RenderBorder();

private:
    int width;
    int height;

    void SetCursorPos(int x, int y);
};

#endif
