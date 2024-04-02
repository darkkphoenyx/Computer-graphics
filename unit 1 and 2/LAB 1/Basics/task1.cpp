// draw a line by using putpixel() using for loop
#include <graphics.h>
// #include <dos.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    for (int i = 100; i <= 500; i++)
    {
        delay(10); // to add a delay(in miliseconds)
        putpixel(i, 100, 5);
    }
    getch();
    closegraph();
}