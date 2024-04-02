// setfilstyle() and floodfill() in C
//---setfillstyle(): sets the current fill pattern and fill color.
// syntax: void setfillstyle(int pattern, int color)
//---floodfill(): fill an enclosed area.
// syntax: floodfill(int x, int y, int border_color)
#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    setcolor(15);
    circle(200, 200, 50);
    setfillstyle(2, 9);
    floodfill(200, 200, WHITE);
    getch();
    closegraph();
}