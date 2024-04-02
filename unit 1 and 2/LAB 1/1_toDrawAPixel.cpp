// Program to illustrate the point plotting on the screen
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    putpixel(50, 50, WHITE);
    getch();
    closegraph();
    return 0;
}