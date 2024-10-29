#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    // Reads a line of input, including spaces, from a specified input stream (usually stdin).
    fgets(name, sizeof(name), stdin);  // Reads up to 19 characters safely
    printf("Hello, %s", name);

    return 0;
}
