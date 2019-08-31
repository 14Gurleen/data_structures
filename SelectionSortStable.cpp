#include<iostream>
using namespace std;
void selection_sort(int arr[], int size);
void printArr(int arr[], int size);
void selection_sort(int arr[], int size)
{
	int i, j, min_index;
	for(i=0;i<size-1;i++)
	{
		min_index=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min_index])
				min_index=j;
			int flag=arr[min_index];
			while(min_index>i)
			{
				arr[min_index]=arr[min_index-1];
				min_index--;
			}
			arr[i]=flag;
		}
	}
}
void printArr(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main(void)
{
	int i, n;
	cout<<"Enter value of n: ";
	cin>>n;
	int arr[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
	printArr(arr,n);
	return 0;
}

