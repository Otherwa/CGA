#include<stdio.h>
#include<conio.h>

int arr[10];
int n = 0;
int size=10;

void heap(int n,int m){
int par=(m-1)/2;

if(arr[par]>0){
  if(arr[m]>arr[par]){
  int temp;
  temp = arr[par];
  arr[par]=arr[m];
  arr[m]=temp;

  heap(n,par);
  }
}
	}

void insrt(){
int data;
if(n==size){
printf("\nNo space");
return;
}
printf("\nEnter element = ");
scanf("%d",&data);

printf("\n%d",n);
arr[n]=data;
n++;
heap(n,n-1);

	}

void disp(){
int i;
printf("Max heap =");
for(i=0;i<n;i++){
printf(" %d ",arr[i]);
}


	}


void main(){
int opt,flag=0;
clrscr();
while(flag==0){
printf("\n\n1 for disp\n\n2 for insrt\n\n3 for exit\n\n");
scanf("%d",&opt);
switch(opt){

case 1:
disp();
break;

case 2:
insrt();
break;

case 3:
flag=1;
break;

default:
printf("Try Agian");

}


}

	}