#include<stdio.h>
#include<conio.h>

int arr[20],locat;

void disp(){
int i;
if(locat==0){
printf("Empty ");
return;
}
for(i=0;i<locat;i++){
      printf(" %d ",arr[i]);
}
printf("\n");
}
void dele(){




}

void insrt(int ele,int loc){
int par;
while(loc>0){
par=(loc-1)/2;
if(ele<=arr[par]){
arr[loc]=ele;
return;
}
arr[loc]=arr[par];
}
arr[0]=ele;
}


}

void main(){
int opt,ele,flag=0;
clrscr();
while(flag==0){
printf("\n\n1 for insert\n2 for delete\n3 for display\n4 for exit = \n");
scanf("%d",&opt);
printf("\n\n");
switch(opt){
case 1:
printf("Element to insert = ");
scanf("%d",&ele);
locat+=1;
break;

case 2:

break;

case 3:

break;

case 4:
flag=1;

default:
printf("\ntry again");
break;
getch();
}



}



}