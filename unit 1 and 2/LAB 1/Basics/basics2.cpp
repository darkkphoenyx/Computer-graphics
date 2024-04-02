#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    setcolor(2);
    //to set the color
    setbkcolor(2);
    //to set the background color
    line(200, 200, 400, 400);
    circle(200,200,50);
    rectangle(200, 200, 400, 400);
    getch();
    closegraph();
}