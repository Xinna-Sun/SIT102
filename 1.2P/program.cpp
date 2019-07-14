#include "splashkit.h"

void draw_house_scene()
{
    // the steps for draw house goes here
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_BRIGHT_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    refresh_screen();
}

void draw_custom_drawing()
{
    // procedure to draw my custom drawing
    clear_screen(COLOR_WHITE);
    fill_triangle(COLOR_ORANGE, 250, 450, 400, 300, 550, 450);
    fill_triangle(COLOR_ORANGE, 250, 150, 400, 300, 550, 150);
    fill_triangle(COLOR_PURPLE, 250, 150, 400, 300, 250, 450);
    fill_triangle(COLOR_PURPLE, 550, 150, 400, 300, 550, 450);
    fill_rectangle(COLOR_WHITE, 350, 250, 100, 100);
    fill_ellipse(COLOR_BLACK, 375, 275, 50, 50);
    fill_rectangle(COLOR_WHITE, 385, 285, 30, 30);
    refresh_screen(60);
}

int main()
{
    open_window("Shapes by Fadhil", 800, 600);

    draw_house_scene();   // calls the above procedure
    delay(5000);

    draw_custom_drawing();   // calls the procedure to draw my custom drawing
    delay(5000);

    draw_house_scene();   // calls the procedure again!
    delay(5000);

    draw_custom_drawing();   // calls the procedure to draw my custom drawing again!
    delay(5000);

    return 0;
}
