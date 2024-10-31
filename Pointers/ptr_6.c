#include <stdio.h>

int main() {
    int value = 42;            // A normal integer variable
    int *ptr = &value;        // Pointer to the integer variable
    int **ptr_to_ptr = &ptr;  // Pointer to the pointer

    // Displaying values
    printf("Value: %d\n", value);            // Prints the value
    printf("Pointer points to value: %d\n", *ptr); // Dereferencing ptr gives value
    printf("Pointer to pointer points to value: %d\n", **ptr_to_ptr); // Dereferencing ptr_to_ptr gives value

    // Modifying value using pointer to pointer
    **ptr_to_ptr = 100; // Changes the original value

    printf("New Value: %d\n", value); // Prints the new value

    return 0;
}
