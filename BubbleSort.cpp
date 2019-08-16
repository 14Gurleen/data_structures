#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, const char *argv[])
{
	int i, j, k=0;
	int arr[30];
	for(i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	for(i=1;i<argc-1;i++)
	{
		for(j=1;j<argc-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=1;i<argc-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
