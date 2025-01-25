#include <stdio.h>

int main() {

    int ages[] = {20, 21, 36, 75, 12, 89, 11};

    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for(int i=0; i<length; i++) {
        if(lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }

    printf("Lowest Age is %d\n", lowestAge);

    return 0;
}