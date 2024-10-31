#include <stdio.h>

int main() {
    // Declare an array of string pointers
    const char *strArray[] = {
        "Hello, World!",
        "Welcome to C programming.",
        "Pointers are powerful.",
        "Arrays of strings.",
        "Goodbye!"
    };

    // Calculate the number of strings in the array
    int size = sizeof(strArray) / sizeof(strArray[0]);
    printf("String %d:\n", size);

    // Print each string using the array of pointers
    printf("Array of Strings:\n");
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i + 1, strArray[i]); 
        // printf("String %d: %s\n", i + 1, *(strArray + i)); //same
    }

    // Example: Uncommenting the following line will lead to undefined behavior.
    // strArray[1] = "This will cause issues."; // Modifying pointer to a new string
    
    return 0;
}
