#include <stdio.h>

int main() {

    int passwd;
    printf("Enter Password: ");
    scanf("%d", &passwd);

    if (passwd == 123456) {
        printf("Welcome User");
    }

    return 0;
}