#include <stdio.h>
#include <stdlib.h>

    typedef struct Ponto{
        int x;
        int y;
    } Ponto;

    int main (int argc, char*argv[]) {

        int a = 2;
        int b = 2;
        int *p = &a;

        printf("a= %d \t b= %d\n ", a, b);
        printf("a= %d \t b= %d\n", &a, &b);

        b = 3;
        printf("a= %d\t b= %d \n", a, b);

        a = 4;
        printf("a = %d \t b = %d \n", a, b);

        printf("&p= %p \t p= %p \t *p= %d \n", &p, p, *p);

        *p =5;
        printf("a = %d \t b= %d \n", a, b);

        p = malloc(sizeof(int)*5);
        *p = 3;
        p[0] = 3;
        p[1] = 55;

        printf("&p = %p \t p = %p \t *p = %d\n", &p, p, *p);
        printf("&p = %p \t p = %p \t *p = %d\n", &p, &p[1], p[1]);

        Ponto A;
        A.x = 4; //acessar um inteiro dentro de A
        A.y = 4;
        printf("A(%d, %d) \n", A.x, A.y);

        //printf("",);
        //printf("a = %d \t b = %d\n", a,b); 

        exit(0);
    }