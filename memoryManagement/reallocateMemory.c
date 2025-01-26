#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr1, *ptr2;

    // Allocate Memory
    ptr1 = malloc(4);

    // Attempt To Resize The Memory
    ptr2 = realloc(ptr1, 8);

    // Check whether realloc is able to resize the memory or not
    if(ptr2 == NULL) {
        printf("Failed. Unable to resize memory\n");
    } else {
        printf("Success. 8 bytes reallocated at address %p \n", ptr2);
        ptr1 = ptr2; // Update ptr1 to point the newly allocated memory
    }

    free(ptr1);
    return 0;
}