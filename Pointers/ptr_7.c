#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Declare a pointer and point it to the first element of the array
    int *ptr = arr;

    // Accessing elements using the pointer
    printf("Using pointer to access array elements:\n");
    for (int i = 0; i < length; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));  // Dereferencing the pointer to get the element
        // printf("Element %d: %d\n", i, ptr[i]); //same
    }

    // Modifying elements using the pointer
    for (int i = 0; i < length; i++) {
        *(ptr + i) += 5;  // Increment each element by 5
    }

    // Print modified array using the pointer
    printf("\nModified array elements:\n");
    for (int i = 0; i < length; i++) {
        printf("Element %d: %d\n", i, arr[i]);  // Print modified values
    }

    return 0;
}
