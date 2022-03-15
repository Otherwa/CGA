#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],b[10],c[20];
int a1,b1,c1;
printf("\nEnter size of A and B array = ");
scanf("%d %d",&a1,&b1);
c1=b1+a1;
for(int i=0;i<a1;i++){
printf("\nEnter array element A[%d] =",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<b1;i++){
printf("\nEnter array element B[%d] =",i+1);
scanf("%d",&b[i]);
}
int pos_1=a1;
for(i=0;i<a1;i++){
c[i]=a[i];
}
int j = 0;
for(i=pos_1;i<c1;i++){
c[i]=b[j];
j=j+1;
}
printf("\nMerged array C is = ");
for(i=0;i<c1;i++){
printf(" %d ",c[i]);
}
int var_1;
printf("\n Press 1 for sorting in decending\n Press 2 for sorting in ascending");
scanf("%d",&var_1);

switch(var_1){
case 1:
for(i=0;i<c1-1;i++){
  for(int h=0;h<(c1-i)-1;h++){
     if(c[h]<c[h+1]){
     int temp=c[h];
     c[h]=c[h+1];
     c[h+1]=temp;
     }
  }
}
printf("descending sort = ");
for(i=0;i<c1;i++){
printf(" %d ",c[i]);
}
break;

case 2:
for(i=0;i<c1-1;i++){
  for(int h=0;h<(c1-i)-1;h++){
     if(c[h]>c[h+1]){
     int temp=c[h];
     c[h]=c[h+1];
     c[h+1]=temp;
     }
  }
}
printf("\nasescending sort = ");
for(i=0;i<c1;i++){
printf(" %d ",c[i]);
}
break;
}

getch();
}
