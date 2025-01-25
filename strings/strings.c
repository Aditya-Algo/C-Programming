#include <stdio.h>

int main() {

    char charArr[] = "Hello World";
    printf("%s\n", charArr);

    printf("%c\n", charArr[1]);

    charArr[0] = 'h';

    printf("%s\n", charArr);

    return 0;
}