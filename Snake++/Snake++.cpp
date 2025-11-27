#include <iostream>

#include "ConsoleRenderer.h"

using namespace std;

int main() {
    ConsoleRenderer renderer(40, 20);

    renderer.Clear();
    renderer.RenderBorder();

    return 0;
}