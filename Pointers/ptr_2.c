#include<stdio.h>

void main(){
    int x;
    printf("%d\n", x); //will give garbage value(random memory address)
    printf("%d\n", &x);  //prints self address

    printf("%p\n", x); //will give garbage value(random memory address) in hexadecimal
    printf("%p", &x);  //prints self address in hexadecimal
}