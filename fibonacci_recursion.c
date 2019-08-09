#include<stdio.h>
void printFibonacci(int n)
{
  static int a=0,b=1,c;
  if(n>0){
  c=a+b;
  a=b;
  b=c;
  printf("%d ",c);
  printFibonacci(n-1);
  }
}
int main(void)
{
 int n;
 printf("Enter no. of elements: ");
 scanf("%d",&n);
 printf("%d %d ",0,1);
 printFibonacci(n-2);
 return 0;
}
