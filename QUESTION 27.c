#include <stdio.h>
#include <string.h>  //Program using structure to store and display student details. 

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
