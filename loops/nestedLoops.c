#include <stdio.h>

int main() {

    int i, j;

    for(i=0; i<2; i++) {
        printf("Outer: \n");
        for(j=1; j<=5; j++) {
            printf("Inner: %d\n", j);
        }
    }


    return 0;
}