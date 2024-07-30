#ifndef ENGINE_H
#define ENGINE_H

#include <SDL.h>
#include <stdbool.h>

typedef struct {
    SDL_Window *window;
    SDL_Renderer *renderer;
    bool isRunning;
} Engine;

bool Engine_Init(Engine *engine, const char *title, int width, int height);
void Engine_HandleEvents(Engine *engine);
void Engine_Update(Engine *engine);
void Engine_Render(Engine *engine);
void Engine_Clean(Engine *engine);

#endif // ENGINE_H
