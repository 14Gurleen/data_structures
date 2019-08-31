#include<iostream>
using namespace std;
void swap(int *num1, int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int partition(int arr[], int low, int high)
{
	int pivot_index=high;
	int pivot=arr[pivot_index];
	int i=low-1;//index of smaller element
	for(int j=low;j<=high;j++)
	{
		if(j==pivot_index)
			continue;
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[pivot_index]);
	return (i+1);
}
void quick_sort(int arr[], int start, int end)
{
	if(start>=end)
		return;
	int pi=partition(arr,start,end);
	quick_sort(arr,start,pi-1);
	quick_sort(arr,pi+1,end);
}
int main(void)
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quick_sort(arr,0,n-1);
	cout<<"Array after sorting:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

