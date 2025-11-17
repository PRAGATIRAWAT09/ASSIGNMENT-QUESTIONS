#include <stdio.h>

int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num); // program to check whether a numberis even or odd.
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
