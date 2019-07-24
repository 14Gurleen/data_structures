#include<stdio.h>
int main(void)
{
	int num, n, i;
	scanf("%d",&n);
	int data[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	printf("Enter no. ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(data[i]==num)
		{
			break;
		}
		else if(num==9)
		{
			printf("Not found");
		}
		return 0;
	}
