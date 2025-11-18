#include <stdio.h>
void main(){
  int arr[]={1,5,2,3,6};  //Program to sort elements using bubble sort.
  int i,j,temp,n=5;
  for(i=0;i<n-1;i++){
     for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
           temp=arr[j+1];
           arr[j+1]=arr[j];
           arr[j]=temp;
       }
    }
}
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
getch();
}
