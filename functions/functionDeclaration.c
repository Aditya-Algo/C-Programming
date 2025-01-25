#include <stdio.h>

int calFun(int x, int y) {
    return x+y;
}

int main() {

    int result = calFun(2, 1);

    printf("%d\n", result);

    return 0;
}