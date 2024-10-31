#include <stdio.h>

int main() {
    // String literal (immutable)
    char *strLiteral = "Hello";
    // strLiteral[0] = 'J'; // Uncommenting this line will cause undefined behavior

    // Character array (mutable)
    char strArray[] = "World"; 
    strArray[0] = 'w'; // This is allowed; now strArray is "world"
    
    printf("String Literal: %s\n", strLiteral); // Will print "Hello"
    printf("Character Array: %s\n", strArray);  // Will print "world"

    return 0;
}
