#include<stdio.h>
#include<conio.h>

void mergerev(int a[10],int l,int m,int h){
int b[10],i,j,k=0;
i=l;
j=m+1;
while((i<m+1)&&(h+1)){
if(a[i]<a[j]){
b[k]=a[i];
i++;
}
else{
b[k]=a[j];
j++;

}
k++;
}
while(i<m+1){
b[k]=a[i];
k++;
i++;
}
while(j<l+1){
b[k]=a[j];
j++;
k++;
}
while(i<k){
a[l]=b[i];
k++;
}
}




void mergesrt(int arr[10],int l, int h){
if(l<h){
int mid=(l+h)/2;
mergesrt(arr,l,mid);
mergesrt(arr,mid+1,h);
mergerev(arr,l,mid,h);
}
}

void main(){
int i,j,a[10]={12,31,56,67,11,1,5},n=7,ele;
clrscr();
printf("\nArry elements =");
for(i=0;i<n;i++){
printf(" dd%d ",a[i]);
}
mergesrt(a,0,n-1);

getch();
}