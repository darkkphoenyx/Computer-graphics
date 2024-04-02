#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(200, 100, 10, 20);
    line(10, 20, 50, 60);
    line(50, 60, 200, 100);
    getch();
    closegraph();
}