#include <stdio.h>

int main() {
    int score = 100;

    int *ptr = &score;

    printf("%d\n", score);
    printf("%p\n", &score);
    printf("%p\n", ptr);

    // Dereference
    printf("%d\n", *ptr);

    return 0;
}