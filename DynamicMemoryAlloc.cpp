#include<iostream>
using namespace std;
int main(void)
{
	int m,n,count=0;
	cin>>m>>n;
	int *arr=(int *)malloc(m*n*sizeof(int));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			*(arr+i*n+j)=count++;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<*(arr+i*n+j)<<" ";
		}
	}
return 0;
}
