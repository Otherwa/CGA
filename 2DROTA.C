#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{

int gd=DETECT, rx,ry, gm, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
float ra, si, co;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the value lines: ");
    scanf("%d %d %d %d", &x1, &y1,&x2,&y2);
    line(x1, y1, x2, y2);
    printf("Enter the degree of rotation: ");
    scanf("%d", &d);
    xn1 = x1;
    yn1 = y1;
    rx = x2-x1;
    ry = y2-y1;    //radius differnv
    ra = 3.14/180 * d;
    si = sin(ra);
    co = cos(ra);
    xn2 = x1 + rx*co - ry*si;
    yn2 = y1 + rx*si+ ry*co;
    line(xn1, yn1, xn2, yn2);
    getch();
    closegraph();
}