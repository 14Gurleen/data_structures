#include<iostream>
using namespace std;
void add(int arr[20][20], int arr1[20][20],int addition[20][20], int m, int n);
void subtract(int arr[20][20], int arr1[20][20],int sub[20][20], int m, int n);
int main(void)
{
	int n,m,i,j;
	cout<<"Enter no. of elements in array: ";
	cin>>n>>m;
	int arr[20][20],arr1[20][20],addition[20][20],sub[20][20];
	cout<<"Enter values in array 1:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter values in array 2:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Matrix after addition\n";
	add(arr,arr1,addition,m,n);
	cout<<"Matrix after subtraction\n";
	subtract(arr,arr1,sub,m,n);
	return 0;
}
void add(int arr[20][20],int arr1[20][20],int addition[20][20],int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			addition[i][j]=arr[i][j]+arr1[i][j];
		cout<<addition[i][j]<<" ";
		}
	cout<<endl;
	}
}
void subtract(int arr[20][20],int arr1[20][20],int sub[20][20], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sub[i][j]=arr[i][j]-arr1[i][j];
		cout<<sub[i][j]<<" ";
		}
	cout<<endl;
	}
}


