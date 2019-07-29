#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[15]="hello world";
	printf("%s\n",str);
	char str1[15]="hello%world";
	printf("%s\n",str1);
	char str2[15]="hello%world";
	puts(str2);
        char str3[]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
	printf("%s\n",str3);
	const char *str4="hello world";
	printf("%s\n",str4);
	char *str5="hello world";
	printf("%s\n",str5);
	char str6[15]="world";
	printf("%d\n",(strlen(str3)));
	printf("%s\n",(strstr(str1,str6)));
	printf("%s\n",strcpy(str,"hi"));
	int result=strcmp(str1,str2);
	if(result==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are unequal");
	}
	char str7[]="\nThis is ", str8[]="C program";
	strcat(str7,str8);
	puts(str7);
	char *r;
	 r=strpbrk(str,str7);
	if(r != 0)
		printf("First matching character: %c\n",*r);
	else
		printf("Not found");
	return 0;
}
