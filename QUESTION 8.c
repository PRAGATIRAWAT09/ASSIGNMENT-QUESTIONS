#include <stdio.h>

int main() {
    int n, i = 1, factorial = 1;

    printf("Enter a positive number: "); //progarm to find factorial of a number using while loop.
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= n) {
            factorial *= i; 
            i++;          
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
