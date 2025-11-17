#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num);  //Program to display multiplication table using for loop.  
    printf("Multiplication Table of %d:\n", num);
    printf("--------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
