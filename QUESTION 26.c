#include <stdio.h>
#include <string.h>
int main()
{
char str[100]; //Program to check whether a string is palindrome.
char reversed_str[100];
printf("Enter a string:");
scanf("%s",str);
strcpy(reversed_str,str);
strrev(reversed_str);
if(strcmp(str,reversed_str)==0){
printf("%s is a palindrome.\n",str);
}else
  printf("%s is not a palindrome.\n",str);
return 0;
}
