#include <stdio.h>
void main()
{
  int arr[5]={2,3,5,6,7}; //Program to search an element in an array(linear search).
  int i,search=6;
  for(i=0;i<5;i++){
     if(arr[i]==search){
         printf("Search is Successful!");
         break;
      }
  }
getch();
}
