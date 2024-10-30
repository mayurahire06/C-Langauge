#include <stdio.h>

void main(){
    int *ptr;
    
    printf("%p\n", (void *)ptr);  // Print the (uninitialized) value of ptr
    printf("%p", (void *)&ptr);   // Print the address of the ptr variable itself
}
