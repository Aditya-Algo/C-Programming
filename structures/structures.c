#include <stdio.h>

struct Car {
        char brand[100];
        char model[100];
        int year;
    };

int main() {

    struct Car Car1 = {"BMW", "X5", 2025};
    struct Car Car2 = {"Mercedes", "S-Class", 2025};

    printf("%s %s %d\n", Car1.brand, Car1.model, Car1.year);
    printf("%s %s %d\n", Car2.brand, Car2.model, Car2.year);
    
    return 0;
}