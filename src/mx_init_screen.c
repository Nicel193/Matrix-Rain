#include "header.h"

void mx_init_screen(int argc)
{
    if (argc > 2)
    {
        mx_printerr("input: ./matrix_rain [-s]\n");
        exit(-1);
    }

    setlocale(LC_ALL, "ja_JP.UTF8");
    initscr();
    noecho();
    curs_set(0);
    start_color();
    init_color(0, 0, 0, 0);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_WHITE, COLOR_BLACK);
}
