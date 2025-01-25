#include <stdio.h>
#include <string.h>

int main() {

    char charArr[50] = "PROGRAMMING";
    printf("%ld\n", strlen(charArr));

    printf("%ld\n", sizeof(charArr));

    char str1[] = "Programming";
    char str2[] = "Coding";
    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}