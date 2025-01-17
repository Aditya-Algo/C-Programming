// Switch-Case Statemet(Jumping Statement)

#include <stdio.h>

void main() {

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    switch(n) {
        case 1 : printf("ONE\n"); break;
        case 2 : printf("TWO\n"); break;
        case 3 : printf("THREE\n"); break;
        case 4 : printf("FOUR\n"); break;
        case 5 : printf("FIVE\n"); break;
        default : printf("INVALID NUMBER....\n");
    }

}