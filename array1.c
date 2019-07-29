//Sorted-Rotated Array: Pair of elements that evaluate to a given sum.
#include<stdio.h>
void rotateArr(int arr[], int n, int rotations);
void printArr(int arr[], int n);
void findSum(int arr[], int n);
int main(void)
{
int n, i, num, rotations;
printf("Enter no of elements: ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter no. of rotations: ");
scanf("%d",&rotations);
rotateArr(arr,n,rotations);
printf("Array after rotation:\n");
printArr(arr,n);
findSum(arr,n);
return 0;
}
void rotateArr(int arr[], int n, int rotations)
{
int i, temp, j;
for(i=0;i<rotations;i++)
{
temp=arr[n-1];
for(j=n-1;j>0;j--)
{
  arr[j]=arr[j-1];
}
arr[0]=temp;
}
}
void printArr(int arr[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
void findSum(int arr[], int n)
{
int num, i, j, index1, index2;
printf("Enter number to evaluate: ");
scanf("%d",&num);
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if((arr[i]+arr[j])==num)
  {
   printf("%d %d\n", arr[i], arr[j]);
  }
 }
}
}

