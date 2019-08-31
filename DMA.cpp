#include<iostream>
using namespace std;
int main(void)
{
	int m,n,i,j;
	cin>>m>>n;
	int *arr[m];
	for(i=0;i<m;i++)
	arr[i]=(int *)malloc(n*sizeof(int));
	int count=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(arr+i)+j)=count++;
			cout<<*(*(arr+i)+j)<<" ";
		}
	}
	return 0;
}

