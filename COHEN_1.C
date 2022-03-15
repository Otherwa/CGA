#include<stdio.h>
#include<conio.h>
#incldue<graphics.h>
//fucntion
void get_code(int x,int y);
int gm =DETECT,gd,x1,y1,x2,y2;
int x_max = 426;
int x_min = 213;
int y_max = 318;
int y_min = 159;
int m;
void main(){
int code1,code2,chk;
initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
line(213,0,213,479);
line(426,0,426,479);
line(0,159,639,159);
line(0,318,639,318);
printf("Enter line co-ords :");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
setcolor(RED);
line(x1,y1,x2,y2);
code1 = code(x1,y1);
code2 = code(x2,y2);
while((code1!=0)||(code!=0)){
m = (y2-y2)/(x2-x1);
chk = code1&code2;
if(chk!=0){
return;
}
if(code1 == 0){
chk = code2;
}
else{
chl = code1;
}

if((chk&1)!=0){
x=x_min;
y=y1+m*(x_min-x1);
}
if((chk&2)!=0){
x=x_max;
y=y1+m*(x_max-x1);
}
if((chk&4)!=0){
x=x1+(y_min-y1)/m;
y=y_min;
}
if((chk&8)!=0){
x=x1+(y_max-y1)/m;
y=y_max;
}

if(chk == code1){
x1 = x;
y1 = y;
code1 = outcode(x,y);
}

if(chk == code2){
x2 = x;
y2 = y;
code2 = outcode(x,y);
}


	}
setcolor(100)
line(x1,y1,x2,y2)

}

int code(int x,int y){
int top = 8;
int left = 1;
int right = 2;
int bottom = 4;
int center = 0;
int code_gen = center;
if(x < x_min){
code_gen = code_gen | left;
}
else if(x > x_max){
code_gen = code_gen | right;
}

if(y > y_min){
code_gen = code_gen | bottom;
}
else if(y < y_max){
code_gen = code_gen | top;
}
return code_gen;
}
