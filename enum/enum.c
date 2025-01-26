#include <stdio.h>

enum Level {
    LOW=1,
    MEDIUM,
    HIGH
};

int main() {

enum Level myVar = MEDIUM;
    switch(myVar) {
        case 1:
            printf("LOW LEVEL\n");
            break;
        case 2:
            printf("MEDIUM LEVEL\n");
            break;
        case 3:
            printf("HIGH LEVEL\n");
            break;
    }

    return 0;
}