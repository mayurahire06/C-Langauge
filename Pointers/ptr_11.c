// differences between string literals and string pointers, as well as the mutability of character arrays.

#include <stdio.h>

int main()
{
    // String Literal
    char *strLiteral = "Hello, World!"; // Points to a string literal

    // Printing String Literal
    printf("String Literal: %s\n", strLiteral);

    // Attempting to modify a string literal (should be avoided)
    // Uncommenting the following line can lead to undefined behavior
    // strLiteral[0] = 'h';  // This is unsafe and should not be done

    // String Array (modifiable)
    char strArray[] = "good morning"; // Character array initialized with a string

    // Printing String Array before modification
    printf("String Array before modification: %s\n", strArray);

    // Modifying the string array
    strArray[0] = 'h';                                         // Valid operation
    printf("String Array after modification: %s\n", strArray); // Output: hello, World!

    // String Pointer pointing to the string array
    char *strPointer = strArray; // Pointing to the first element of strArray

    // Using the string pointer to modify the string array
    strPointer[7] = 'w';                                                     // Change 'W' to 'w'
    printf("String Array after modification using pointer: %s\n", strArray); // Output: hello, world!

    return 0;
}
