#include <stdio.h>

int main() {
    char ch;

    printf("Press any key to continue: ");
    ch = getchar();  //Reads a single character from standard input (stdin).
    printf("You pressed: %c\n", ch);

    return 0;
}
