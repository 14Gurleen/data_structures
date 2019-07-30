#include<stdio.h>
int max_sum_subarray(int arr[], int n);
int main(void)
{
	int n, i;
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result=max_sum_subarray(arr,n);
	printf("%d",result);
	return 0;
}
int max_sum_subarray(int arr[], int n)
{
	int max=0,max1=0,start=0,end=0,s=0;
	for(int i=0;i<n;i++)
	{
		max+=arr[i];
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
	printf("Starting index: %d\n",start);
	printf("Ending index: %d\n",end);
	//printf("Maximum Sum Of Array: %d",max);
	return max1;
}
	
