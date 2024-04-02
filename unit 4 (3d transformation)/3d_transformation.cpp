#include <graphics.h>
#include <iostream>
using namespace std;
void display(int x1, int y1, int x2, int y2, int z)
{
    int xmax = getmaxx();
    int ymax = getmaxy();
    int xmid = getmaxx() / 2;
    int ymid = getmaxy() / 2;
    line(xmid, 0, xmid, ymax); // horizontal line
    line(0, ymid, xmax, ymid); // vertical line

    // translating the given points to the centre
    line(x1 + xmid, y1 + ymid, x2 + xmid, y2 + ymid);
    line(x2 + xmid, y2 + ymid, x3 + xmid, y3 + ymid);
    line(x3 + xmid, y3 + ymid, x1 + xmid, y1 + ymid);
}
// for translation
void translate(int x1, int y1, int x2, int y2, int x3, int y3, int tx, int ty)
{
    delay(10);
    cleardevice();
    outtextxy(100, 100, "After Translation:");
    display(x1 + tx, y1 + ty, x2 + tx, y2 + ty, z + tz);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the co-ordinated of the traingle: x1, y1, x2, y2, x3, y3:" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    display(x1, y1, x2, y2, x3, y3);
    while (1)
    {
        int ch;
        cout << "Enter:" << endl;
        << "1.Translation" << endl;
        << "2.Scaling" << endl;
        << "3.Rotation about Z-axis" << endl;
        << "0.Exit" << endl;
        cin >> ch;
        if (ch == 1)
        {
            int tx, ty;
            cout << "Enter Translation Factors tx and ty: " << endl;
            cin >> tx >> ty;
            initgraph(&gd, &gm, NULL);
            translate(x1, y1, x2, y2, x3, y3, tx, ty);
            getch();
            closegraph();
        }
    }
    getch();
    closegraph();
}