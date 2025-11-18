#include <stdio.h>
long int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return base * power(base, exp - 1);
    }
}

int main() {  //Program to calculate power of a number using recursion.
    int base, exp;
    long int result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d",&exp);
    result = power(base, exp);

    // Print the result
    printf("%d raised to the power of %d is %ld\n", base, exp, result);

    return 0;
}
