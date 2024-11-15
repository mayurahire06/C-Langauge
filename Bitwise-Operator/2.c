#include <stdio.h>

int main() {
    int num = 4; // Binary: 00000100

    // Left shift by 1 position
    int leftShift1 = num << 1; // Equivalent to num * 2^1
    // Left shift by 2 positions
    int leftShift2 = num << 2; // Equivalent to num * 2^2

    // Right shift by 1 position
    int rightShift1 = num >> 1; // Equivalent to num / 2^1
    // Right shift by 2 positions
    int rightShift2 = num >> 2; // Equivalent to num / 2^2

    printf("Original number: %d\n", num);
    printf("After left shift by 1 (<< 1): %d\n", leftShift1);
    printf("After left shift by 2 (<< 2): %d\n", leftShift2);
    printf("After right shift by 1 (>> 1): %d\n", rightShift1);
    printf("After right shift by 2 (>> 2): %d\n", rightShift2);

    return 0;
}
