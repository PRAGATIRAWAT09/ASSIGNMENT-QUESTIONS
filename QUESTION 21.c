#include <stdio.h>
void main()
{
  int arr[10]={10,20,30,40,50,60,70,80,90,100}; //Program to search an element using binary search. 
  int mid,i,start,end,search=30;
  start=0,end=9;
  for(i=0;i<10;i++){
     mid=(start+end)/2;
     if(arr[mid]==search){
        printf("Search Successful!");
        break;
     }
     if(arr[mid]>search){
        end=mid-1;
     }
     if(arr[mid]<search){
        start=mid+1;
     }
  }
getch();
}
