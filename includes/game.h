#ifndef GAME_H
#define GAME_H

#include "pong.h"
#include <ncurses.h>

typedef struct
{
    // Game Window Data
    int x, y;
    int width, height;
    WINDOW* window;

    // Data
    GAME_DATA* data;
} GAME;

double time_ms();

GAME* create_game(int x, int y, int width, int height, bool is_vs);
void render_game(GAME* game);
void delete_game(GAME* game);

void game(bool vs_mode);

#endif // GAME_H