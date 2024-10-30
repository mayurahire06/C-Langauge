#include<stdio.h>

void main(){
    int num = 44;
    int *ptr = &num;
    printf("%d\n", ptr); //prints num address
    printf("%d\n", &num); //num address
    printf("%d", &ptr); //pointer address
}