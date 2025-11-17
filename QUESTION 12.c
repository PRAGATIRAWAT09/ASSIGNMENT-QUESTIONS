#include <stdio.h>

int fact(int n) {
    int i, factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i; 
    }
    return factorial;
}

int main() {
    int num;
    printf("Enter a non-negative number: "); //Program to calculate factorial using a function(call by value).
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = fact(num);
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}
