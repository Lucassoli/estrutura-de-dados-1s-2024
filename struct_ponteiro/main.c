#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){

    int a = 2;
    int b = a;
    int *p = &a;

    printf("a = %d \t  b = %d\n", a, b);
    printf("&a = %p \t &b = %p\n", &a, &b);

    b = 3;
    printf("a = %d \t  b = %d\n", a, b);

    a = 4;
    printf("a = %d \t  b = %d\n", a, b);

    printf("&p = %p \t  p = %p \t *p = %d\n", &p, p, *p);

    *p = 5;
    printf("a = %d \t  b = %d\n", a, b);

    exit(0);

}