#include <graphics.h>
// include other necessary header files also
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    // insert the actual body part
    line(200, 200, 800, 800);
    circle(200, 200, 150);
    getch();
    closegraph();
}