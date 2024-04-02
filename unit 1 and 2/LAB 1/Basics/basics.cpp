#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // putpixel is used to paint a pixel on the screen
    putpixel(200, 200, WHITE);
    // putpixel takes 3 arguments x-coord,y-coord,color
    int x=getpixel(200, 200);
    cout << "Pixel info is:"<<x;
    getch();
    closegraph();
}