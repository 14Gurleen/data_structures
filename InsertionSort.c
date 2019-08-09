#include<stdio.h>
#include<stdlib.h>
void Insertion(int arr[],int n);
void printArr(int arr[],int n);
void Insertion(int arr[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}
void printArr(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main(int argc,char *argv[])
{
	int i, n,k=0;
	printf("Enter no. of elements in array: ");
	n=atoi(argv[1]);
	int arr[argc];
	for(i=2;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
              	k++;
	}
	Insertion(arr,n);
	printArr(arr,n);
	return 0;
}

