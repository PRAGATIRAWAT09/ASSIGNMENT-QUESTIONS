#include <stdio.h>

int main() {
    int num, rev = 0, digit;
    printf("Enter a number: "); //Program to reverse a number using while loop. 
    scanf("%d", &num);

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10; 
    }
    printf("Original Number: %d\n", originalNum);
    printf("Reversed Number: %d\n", reversedNum);

    return 0; 
}
