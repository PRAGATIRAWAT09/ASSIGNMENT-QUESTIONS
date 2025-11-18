#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
   int start=0;
   int end=strlen(str)-1;
   char temp;
   while(start<end){
      temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      start++;
      end--;
   }
}
int main() //Program to reverse a string without using strrev().
{
char myString[]="Hello World!";
printf("Original String:%s\n",myString);
reverseString(myString);
printf("Reversed String:%s\n",myString);
return 0;
}

