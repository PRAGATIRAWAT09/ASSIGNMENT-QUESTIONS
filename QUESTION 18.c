#include <stdio.h>

int main() {
    int n, i;  //Program to calculate sum and average of array elements.
    float sum = 0, average;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nSum of array elements: %.2f\n", sum);
    average = sum / n;
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
