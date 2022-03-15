#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
float x,y,rx,ry,a,b,p;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

printf("\Enter x and y: ");
scanf("%f %f",&x,&y);
printf("\n Enter x and y radius: ");
scanf("%f %f",&rx,&ry);
a=0;
b=ry;
p=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
while((2*a*ry*ry)<=(2*b*rx*rx))
{
   putpixel(x+a,y-b,WHITE);
   putpixel(x-a,y+b,WHITE);
   putpixel(x+a,y+b,WHITE);
   putpixel(x-a,y-b,WHITE);
  if(p<0)
  {
  a=a+1;
   p=p+(2*ry*ry*a)+(ry*ry);
   }
  else
{
a=a+1;
b=b-1;
p=p+(2*ry*ry*a+ry*ry)-(2*rx*rx*b);

}

}
p=(((float)a+0.5)*((float)a+0.5)*ry*ry)+(b-1)*((b-1)*rx*rx)-(rx*rx*ry*ry);
while(b>=0)
{   putpixel(x+a,y-b,WHITE);
    putpixel(x-a,y+b,WHITE);
    putpixel(x+a,y+b,WHITE);
    putpixel(x-a,y-b,WHITE);
if(p>0)
{
b=b-1;
p=p-(2*rx*rx*b)+(rx*rx);

}
else
{ b=b-1;
  a=a+1;
p=p+(2*ry*ry*a)-(2*rx*rx*b)-(rx*rx);

}

}
getch();
closegraph();
}
