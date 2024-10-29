#include <stdio.h>

int main() {
    char str[20];

    printf("Enter the string: ");
    scanf("%19[^\n]", str);  // Limit input to 19 characters to prevent overflow

    printf("%s\n", str);

    return 0;
}
