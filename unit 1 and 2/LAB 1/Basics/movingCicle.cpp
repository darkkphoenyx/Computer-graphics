// moving circle with filled pattern in x-direction
#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    for (int i = 0; i <= 500; i++)
    {
        setfillstyle(1, RED);
        circle(200 + i, 200, 50);
        floodfill(200 + i, 201, WHITE);
        delay(50);
        cleardevice(); // clears the display after each iteration
    }
    getch();
    closegraph();
}