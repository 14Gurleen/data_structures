#include<stdio.h>
int binarySearch(int arr[], int beg, int end, int num);
int main(void)
{
	int n, i, num,beg,end,result;
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search: ");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	result=binarySearch(arr,beg,end,num);
	if(result==-1)
	{
		printf("Not Found");
	}
	else
	{
		printf("%d",result);
	}
	return 0;
}
int binarySearch(int arr[], int beg, int end, int num)
{
	int mid;
	while(beg<=end)
	{
		mid=(beg+(end-beg)/2);
		if(arr[mid]==num)
		{
			return mid;
		}
		if(arr[mid]<num)
		{
			beg=mid+1;
		}
		else
			end=mid-1;
	}
	return -1;
}

