#include<iostream>
#include<cstring>
using namespace std;
void removeDuplicate(char *str);
void removeAll(char *str, char Remove, int index);
int main(void)
{
	char str[20];
	cout<<"Enter string: ";
	cin>>str;
	removeDuplicate(str);
	cout<<"String after removing duplicates\n"<<str;
	return 0;
}
void removeDuplicate(char * str)
{
	int i=0;
	while(str[i] != '\0')
	{
		removeAll(str,str[i],i+1);
		i++;
	}
}
void removeAll(char *str, char Remove, int index)
{
	int i;
	while(str[index] != '\0')
	{
		if(str[index]==Remove)
		{
			i=index;
		while(str[i] != '\0')
		{
			str[i]=str[i+1];
			i++;
		}
		}
	else
	{
		index++;
	}
	}
}


		
	

				
				
