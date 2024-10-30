#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // printf("%d", length);
    // printf("%d\n", arr); //<address of arr[0]>
    // printf("%d\n", arr[3]);

    int *ptr = arr;
    printf("Element %d\n", *(ptr)); //prints 1st element
    printf("Element %d\n", arr); //prints base address
    printf("Element %d\n", arr[0]); //prints 1st element
    
    return 0;
}
