#include<iostream>
using namespace std;
int main(void)
{
	int m, n,i, j,k,sum;
	cout<<"Enter value of n";
	cin>>n;
	int arr[n][n], a[n][n];
	cout<<"Enter values in array1:\n ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter values in array2:\n ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Matrix after mulitplication\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+arr[i][k]*a[k][j];
			}
			cout<<sum<<" ";
		}
		cout<<endl;
	}
	return 0;
}

