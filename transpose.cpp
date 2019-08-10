#include<iostream>
using namespace std;
void Transpose(int arr[30][30], int mat[30][30], int n);
int main(void)
{
	int n, i, j;
	cout<<"Enter value of n: ";
	cin>>n;
	int arr[30][30], mat[30][30];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	Transpose(arr,mat,n);
	cout<<"Transpose Of Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
void Transpose(int arr[30][30], int mat[30][30], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat[i][j]=arr[j][i];
		}
	}
}

