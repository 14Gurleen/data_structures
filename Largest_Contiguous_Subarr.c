#include<stdio.h>
int largest_subarray(int arr[],int n);
int main(void)
{
	int n, i;
	printf("Enter no. of values in array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	largest_subarray(arr,n);
	return 0;
}
int largest_subarray(int arr[], int n)
{
	int max=0, max1=0,start=0,end=0,s=0;
	for(int i=0;i<n;i++)
	{
		max += arr[i];
		if(max<0)
		{
			max=0;
			s=i+1;
		}
		else if(max1<max)
		{
			max1=max;
			start=s;
			end=i;
		}
	}	
	printf("Starting index:%d\n",start);
	printf("Ending index:%d",end);
}

	

