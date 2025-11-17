#include<stdio.h>
void main()
{
  int a=0,b=1;
  int sum=0,i,n;
  printf("%d\t %d\t",a,b);
  printf("Enter upto how many numbers :"); //Program to print fibonacci series using for loop.
  scanf("%d",&n);
  for(i==0,i<=n,i++){
     sum=a+b;
     printf("%d\t",sum);
     a=b;
     b=sum;
  }
getch();
}
