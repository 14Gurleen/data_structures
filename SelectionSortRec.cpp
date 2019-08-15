#include<iostream>
#include<stdlib.h>
using namespace std;
void selection_sort(int arr[], int n, int index);
int min(int arr[], int i, int j);
int main(int argc, const char *argv[])
{
	int i, k=0;
	int arr[25];
	for(i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	selection_sort(arr,k,0);
	for(i=1;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
int min(int arr[], int i, int j)
{
	int k;
	if(i==j)
	return i;
	k=min(arr,i+1,j);
	return (arr[i]<arr[k])?i:k;
}
void selection_sort(int arr[], int n, int index=0)
{
	if(index==n)
	return;
	int k=min(arr,index,n-1);
	if(k!=index)
	{
		int temp=arr[k];
		arr[k]=arr[index];
		arr[index]=temp;
	}
	selection_sort(arr,n,index+1);
}


