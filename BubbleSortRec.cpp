#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n);
void printArr(int arr[], int n);
int main(int argc, const char *argv[])
{
	int i,j,k=0;
	int arr[30];
	for(i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	bubble_sort(arr,k);
	printArr(arr,k);
	return 0;
}
void bubble_sort(int arr[], int n)
{
	if(n==1)
		return;
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	bubble_sort(arr,n-1);
}
void printArr(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
