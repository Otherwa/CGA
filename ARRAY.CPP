2#include <stdio.h>
#include<conio.h>
int main (){
  clrscr();
  int n;
  printf ("\nEnter size of array = ");
  scanf ("%d", &n);
  int a[10];
  for (int i = 0; i < n; i++)
    {
      printf ("\nenter array element %d ",i+1);
      scanf ("%d", &a[i]);
    }
    printf ("\narray element = ");
  for (i = 0; i < n; i++)
    {
      printf(" %d ",a[i]);

    }


    int var1;
    printf("\nselect operation required:\n 1 for search \n 2 for sort \n 3 for reverse\n");
    scanf("%d",&var1);
    switch(var1){

    case 1:
    int ser;
    printf("\nenter element for search");
    scanf("%d",&ser);
    int fl=0;
    for(int j=0;j<n;j++){
    if(ser==a[j]){
    printf("\nelement found at a[%d]=%d ",j,a[j]);
     break;
       }
	else{
	fl=1;
	}
    }
    if(fl==1){
    printf("element is not present in the array");
    }
    break;

    case 2:
	for(int l=0;l<n-1;l++){
       for(int h=0;h<(n-l)-1;h++){
	   if(a[h]<a[h+1]){
	       int temp;
	       temp = a[h];
	       a[h]=a[h+1];
	       a[h+1]=temp;

	   }
       }
   }
   printf ("\narray element sorted = ");
  for (int i = 0; i < n; i++)
    {
      printf(" %d ",a[i]);
    }


    break;

    case 3:
    printf("\nreversed array is =");
    for(j=n-1;j>=0;--j){
       printf(" %d ",a[j]);
    }
    break;

    default :
    printf("\ngalat vro phirse kar");
    break;
    }
    getch();
    return 0;
}
