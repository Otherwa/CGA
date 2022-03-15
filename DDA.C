#include<stdio.h>
#inlcude<conio.h>
#inlcude<graphics.h>

void main(){
int gm=DETECT,gd,i;
float x1,y1,x2,y2;
float dx,dy,steps,xinc,yinx;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
printf("ENTER initial coords :");
scanf("%f %f",&x1,&y1);
printf("ENTER final coords :");
scanf("%f %f",&x2,&y2);

dx=x2-x1;
dy=y2-y1;
if(dx>dy){
steps=dx;
}
else{
steps=dy;
}
xinc=(dx/steps);
yinc=(dy/steps);
i=0;
while(i<steps){
x1+=xinc;
y1+=yinc;
setPixel(x,y);
}


}