#include<stdio.h>
int max(int a,int b);
{if (a>b)
  return a;
else  
  return b;
}
void main()
{
  int result;
  printf("Enter two numbers:");//Program to find maximum of two numbers using function. 
  scanf("%d %d",&a,&b);
  result=max(a,b);
  printf("%d",result);
  getch();
}
