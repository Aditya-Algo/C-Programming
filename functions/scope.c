#include <stdio.h>

int num = 100;

void myFun() {
    printf("%d\n", num);
}

int main() {
    myFun();

    printf("%d\n", num);

    return 0;
}