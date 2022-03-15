#include<stdio.h>
#include<conio.h>
void main(){
int a[10];
int n,i,j;
clrscr();
printf("\nSize of arry = ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n%d elemnt in arry ",i+1);
scanf("%d",&a[i]);
}
printf("\nArry elements = ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++){
for(j=0;j<(n-i)-1;j++){
  if(a[j]<a[j+1])
  {
  int temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
  }
}
}
printf("\n\n\nBubble sorted = ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
getch();
}