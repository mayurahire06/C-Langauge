#include <stdio.h>

// Function to print the value pointed to by a void pointer
void printValue(void *ptr, char type) {
    switch (type) {
        case 'i':  // Integer
            printf("Integer value: %d\n", *(int *)ptr);
            break;
        case 'f':  // Float
            printf("Float value: %.2f\n", *(float *)ptr);
            break;
        case 'c':  // Character
            printf("Character value: %c\n", *(char *)ptr);
            break;
        default:
            printf("Unknown type\n");
            break;
    }
}

int main() {
    int num = 10;
    float fnum = 5.5;
    char ch = 'A';

    // Declare void pointers
    void *ptr1 = &num;
    void *ptr2 = &fnum;
    void *ptr3 = &ch;

    // Print values using void pointers
    printValue(ptr1, 'i');  // Prints: Integer value: 10
    printValue(ptr2, 'f');  // Prints: Float value: 5.50
    printValue(ptr3, 'c');  // Prints: Character value: A

    return 0;
}
