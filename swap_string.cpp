#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string str1="Hello";
	string str2="World";
	cout<<"String 1: "<<str1<<endl;
	cout<<"String 2: "<<str2<<endl;
	str1.swap(str2);
	cout<<"String 1 after swapping: "<<str1<<endl;
	cout<<"String 2 after swapping: "<<str2;
	return 0;
}
