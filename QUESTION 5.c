#include <stdio.h>

int main() {
    int num;
    input_loop: 

    printf("Enter a positive number: "); // Program using goto to repeat input until a positive number is entered. 
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        goto input_loop; 
    }

    printf("You entered a positive number: %d\n", num);

    return 0;
}
