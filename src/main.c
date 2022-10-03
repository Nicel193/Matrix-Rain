#include "header.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    mx_init_screen(argc);
    mx_intro((argc > 1) ? argv[1] : NULL);

    int mx = 0, my = 0;
    int speed_animation = 100;
    int color = 1;

    getmaxyx(stdscr, mx, my);

    t_rain_drop *raindrops = mx_init_raindrops(my); 

    while (true)
    {
        if (mx_input_manager_rain(&speed_animation, &color))
            break;

        mx_raindrop_algorithm(mx, my, raindrops, &color);
    }

    free(raindrops);
    endwin();

    return 0;
}

