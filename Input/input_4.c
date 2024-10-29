#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Clear newline left in buffer by previous scanf
    while (getchar() != '\n'); 

    // while (getchar() != '\n') {
    // // Empty body; do nothing inside the loop
    // }

    printf("Enter your name: ");
    scanf("%49s", name);  // Limits input to 49 characters, preventing overflow

    printf("Name: %s, Age: %d, Height: %.2f meters\n", name, age, height);

    return 0;
}
