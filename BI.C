#include<stdio.h>
#include<conio.h>
int binarySearch(int arr[10], int lo, int x, int hi)
{
    if (lo <= hi) {
	int mid =(lo+hi)/2;
	if (arr[mid] == x){
	    return mid;
	    }
	else if (x <arr[mid]){
	    return binarySearch(arr,lo,x, mid-1);
	    }
	else{
	return binarySearch(arr,mid+1,x, hi);
	}
    }
    return -1;
}

int main()
{
    int arr[10] = {2,3,4,10,11,40,90};
    int n = 7,x,i,result;
    clrscr();
    printf("\nArray ele = ");
    for (i=0;i<n;i++){
    printf(" %d ",arr[i]);
    }
    printf("\nElement to search = ");
    scanf("%d",&x);
    result = binarySearch(arr, 0,x,n-1);
    if(result == -1){
    printf("Element is not present in array");
    }
    else{
    printf("Element is present at index %d of arry",result);
    }
    getch();
    return 0;
}