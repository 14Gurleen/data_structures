#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int i,j,n;
	int temp=0, count=0, location=0;
	string str;
	str=argv[1];
	n=str.length();
	int freq[n];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		freq[i]=count;
		count=0;
		if(freq[i]>temp)
		{
			temp=freq[i];
			location=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(freq[i]==temp)
		{
			cout<<"Maximum occuring character is "<<str[i]<<" = "<<temp<<" times";
		}

	}
	return 0;
}
