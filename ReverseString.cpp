#include<iostream>
#include<cstring>
using namespace std;
void reverse_String(char *str);
int main(int argc, char *argv[])
{
	char *str;
	str=argv[1];
	reverse_String(str);
	cout<<str;
	return 0;
}
void reverse_String(char *str)
{
	int len=strlen(str);
	char temp;
	int i;
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}
