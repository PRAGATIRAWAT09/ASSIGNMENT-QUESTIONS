#include <stdio.h>
void swap(int *num1, int *num2);

int main() {
    int a, b;
    printf("Enter two numbers: "); //Program to swap two numbers using call by reference.
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping in main:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping in main:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    return 0;
}

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;   
    *num1 = *num2;  
    *num2 = temp;   

    printf("\nInside swap function (after swapping):\n");
    printf("Value of num1 = %d\n", *num1);
    printf("Value of num2 = %d\n", *num2);
}
