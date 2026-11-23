#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main(void) {
    int a = 1;
    int b = 4;

    // Pass memory addresses of 'a' and 'b' to modify the original variables
    swap(&a, &b);

    printf("Values after swap: a = %d, b = %d\n", a, b);

    return 0;
}

// Swaps the values of two integers via pointer dereferencing
void swap(int *a, int *b) {
    int temp = *a;  // Save the value at address 'a'
    *a = *b;        // Copy the value at address 'b' into 'a'
    *b = temp;      // Place the saved value into 'b'
}
