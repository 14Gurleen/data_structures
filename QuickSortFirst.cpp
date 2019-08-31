#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void swap(int *num1, int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int partition(int arr[], int low, int high)
{
	int pivot_index=low;
	int pivot=arr[pivot_index];
	int i=high+1;
	for(int j=high;j>low;j--)
	{
		if(arr[j]>=pivot)
		{
			i--;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(&arr[i-1],&arr[pivot_index]);
	return (i-1);
}
void quick_sort(int arr[], int low, int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quick_sort(arr,low,pi-1);
		quick_sort(arr,pi+1,high);
	}
}
int main(int argc, const char *argv[])
{
	int arr[argc],k=0;
	for(int i=2;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
		srand(time(0));
		quick_sort(arr,0,k-1);
		for(int i=0;i<k;i++)
		{
			cout<<arr[i]<<" ";
		}
	return 0;
}



