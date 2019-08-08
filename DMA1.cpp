#include<iostream>
using namespace std;
int main(void)
{
	int m, i, j, count=0;
	cin>>m;
	int **arr=(int **)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		arr[i]=(int *)malloc(m*sizeof(int));
		*(*(arr+i)+j)=count++;
		cout<<*(*(arr+i)+j)<<" ";
	}
	return 0;
}


