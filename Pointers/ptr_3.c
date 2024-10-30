#include <stdio.h>

void main(){
    int *ptr;
    printf("%p\n", ptr);  // Print uninitialized pointer (garbage address)
    printf("%p", &ptr);   // Print address of ptr
}
