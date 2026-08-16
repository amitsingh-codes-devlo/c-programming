#include <stdio.h>

/*
Basic grading system using if-else and else-if
*/

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("A+");
    }
    else if (marks > 80) {
        printf("B+");
    }
    else if (marks > 70) {
        printf("C+");
    }
    else {
        printf("You are Failed");
    }

    return 0;
}
