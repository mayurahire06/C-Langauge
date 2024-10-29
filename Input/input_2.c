#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a string (up to 9 characters): ");
    gets(str);  //Not safe, as input can exceed buffer size and Deprecated
    printf("You entered: %s\n", str);

    return 0;
}
