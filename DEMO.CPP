#include <graphics.h>
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
int gnd = DETECT,gmaar,x,y,xx,yy,i;
initgraph(&gnd,&gmaar,"C:\\TurboC3\\BGI");
line(100,100,200,100);
line(100,100,200,200);
line(200,200,200,100);
setfillstyle(1,RED);
floodfill(160,150,WHITE);
x=getmaxx();
y=getmaxy();
for(i=1;i<10;i++){
circle(xx=random(y),yy=random(y),23);
setfillstyle(i,i);
floodfill(xx,yy,WHITE);
}
setcolor(3);
arc(300,300,0,180,28);
setfillstyle(3,WHITE);
bar(300,300,400,400);
bar3d(150,150,300,300,140,12);
ellipse(250,450,0,180,120,60);
fillellipse(250,460,120,40);

getch();
return 0;
}
