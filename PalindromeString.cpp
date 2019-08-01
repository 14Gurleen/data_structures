#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char *argv[])
{
	char *str;
	str=argv[1];
	int n=strlen(str);
	int i, j, flag=0;
	for(i=0;i<n;i++)
	{
			if(str[i] != str[n-1-i])
			{
				flag=1;
			}
	}
	if(flag==1)
		cout<<"String is Not Palindrome";
	else
		cout<<"String is Palindrome";
	return 0;
}

