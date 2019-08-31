#include<stdio.h>
void SelectionSort(int arr[], int n);
void printArr(int arr[],int n);
void SelectionSort(int arr[],int n)
{
	int min,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
void printArr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	SelectionSort(arr,n);
	printArr(arr,n);
	return 0;
}
