#include <stdio.h>

int main() {
    
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks == 100) {
        printf("Grade: O");
    }
    else if (marks >= 90 && marks < 100) {
        printf("Grade: E");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Grade: A");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade: B");
    }
    else {
        printf("Grade: C");
    }

    return 0;
}