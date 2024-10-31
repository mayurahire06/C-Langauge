#include <stdio.h>

int main() {
    // Initialize a string using an array of characters
    char str[] = "Hello, World!";
    
    // Declare a pointer to a character and point it to the first character of the string
    char *ptr = str;

    // Print the string using the pointer
    printf("String using pointer: %s\n", ptr);

    // Print each character using pointer arithmetic
    printf("Characters in the string:\n");
    for (int i = 0; *(ptr + i) != '\0'; i++) {
        printf("Character at position %d: %c\n", i, *(ptr + i));
    }

    // Modify the string using the pointer
    ptr[7] = 'C'; // Change 'W' to 'C'

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
