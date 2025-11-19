#include <stdio.h>  //Program using recursion to find GCD(Greatest Common Divisor).

int findGCD(int a, int b) {  
    if (b == 0) {
        return a;
    }
    else {
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2, gcd;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
