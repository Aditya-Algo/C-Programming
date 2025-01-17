#include <stdio.h>

int a;  // Global Variable

int main() {

    int b;  // Local Variable
    static int c;   // Static Variable


    printf("%d\n", a); // Default Value of Global Variable is 0
    printf("%d\n", b); // Default Value of Local Variable is Garbage (any poitive or negative number)
    printf("%d\n", c); // Default Value of Static Variabele is 0

    return 0;
}