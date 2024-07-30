#include "engine.h"

int main(int argc, char *argv[]) {
    Engine engine;

    if (!Engine_Init(&engine, "Basic SDL Engine", 800, 600)) {
        return -1;
    }

    while (engine.isRunning) {
        Engine_HandleEvents(&engine);
        Engine_Update(&engine);
        Engine_Render(&engine);
    }

    Engine_Clean(&engine);

    return 0;
}
