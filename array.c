//Right rotate first half & left rotate second half.
#include<stdio.h>
void printArr(int arr[], int n);
int main(void)
{
int n, i, first, temp, temp1;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
first=n/2;
temp=arr[first-1];
for(i=first-1;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
temp1=arr[first];
for(i=first;i<n-1;i++)
{
arr[i]=arr[i+1];
}
arr[n-1]=temp1;
printf("After rotation of array:\n");
printArr(arr,n);
return 0;
}
void printArr(int arr[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}

