//Write a program to print the grade of the given student using if else if block
#include <stdio.h>

void printGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
    } else if (marks >= 60 && marks <= 74) {
        printf("Grade C\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade D\n");
    } else if (marks >= 0 && marks <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid marks\n");
    }
}

int main() {
    int studentMarks;

    printf("Enter the marks: ");
    scanf("%d", &studentMarks);

    printGrade(studentMarks);

    return 0;
}
