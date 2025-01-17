#include <stdio.h>

int main() {

    int a = 100, b = 90, c = 80;

    if (a > b) {
        if (a > c) {
            printf("%d", a);
        }
        else {
            printf("%d", c);
        }
    }
    else {
        if (b > c) {
            printf("%d", b);
        }
        else {
            printf("%d", c);
        }
    }

    return 0;
}