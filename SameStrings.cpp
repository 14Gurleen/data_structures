#include<iostream>
#include<string.h>
using namespace std;
void same_string(string str, string str1);
int main(int argc, char *argv[])
{
	char *str, *str1;
	str=argv[1];
	str1=argv[2];
	same_string(str,str1);
return 0;
}
void same_string(string str, string str1)
{
	int len=str.size();
	int len1=str1.size();
	int flag=0, i;
	if(len != len1)
		cout<<"Strings are not equal";
	else
	{
		for(i=0;i<len;i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]+=32;
			}
		}
		for(i=0;i<len1;i++)
		{
			if(str1[i]>='A'&&str1[i]<='Z')
			{
				str1[i]+=32;
			}
		}
		for(i=0;i<len;i++)
		{
			if(str[i]==str1[i])
			{
				flag=1;
			}
		}
		if(flag==1)
			cout<<"Strings are equal";
		else
			cout<<"Strings are not equal";
	}
}
