// displaying a text in graphics mode
//---Outtext() function is used to display the string at the current position
// syntax: outtext("Text");
//---Outtextxy() funciton is used to display at a certain coordinate
// syntax: outtextxy(x,y,"Text")
#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    outtext("Deepesh");
    cout << "At certain coordinate (x,y)=(200,200)";
    outtextxy(200, 200, "VOldemort");
    getch();
    closegraph();
}