#include <stdio.h>

int main() {

    int age;

    printf("Vote Eligibilty\n");

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }

    return 0;
}