#include <stdio.h>

int main() {
    int numArr[4] = {10, 20, 30, 40};

    // Get the size of the numArr
    printf("%lu\n", sizeof(numArr));


    // Get the value of the first element in numArr
    printf("%d\n", *numArr);
    // Get the value of the second element in numArr
    printf("%d\n", *numArr+1);
    // Get the value of the third element in numArr
    printf("%d\n", *numArr+2);
    // and so on..


    // How are pointers relataed to arrays
    int *ptr = numArr;
    for(int i=0; i<4; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}