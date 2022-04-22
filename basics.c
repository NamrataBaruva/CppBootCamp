#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    char c;
    long long int n1;
    long int n2;
    short int n3;
    signed char c1;
    unsigned char c2;
    bool b;
    signed int n4;
    unsigned int n5;
    float f;
    double d;
    long double d1;

    printf("The size of integer type is: %zu\n", sizeof(n));
    printf("The size of integer type is:%d\n", sizeof(int));
    printf("The size of char type is:%d\n", sizeof(c));
    printf("The size of char type is:%d\n", sizeof(char));
    printf("The size of long long int type is:%d\n", sizeof(n1));
    printf("The size of long int type is:%d\n", sizeof(n2));
    printf("The size of short int type is:%d\n", sizeof(n3));
    printf("The size of signed char type is:%d\n", sizeof(c1));
    printf("The size of unsigned char type is:%d\n", sizeof(c2));
    printf("The size of bool type is:%d\n", sizeof(b));
    printf("The size of signed int type is:%d\n", sizeof(n4));
    printf("The size of unsigned int type is:%d\n", sizeof(n5));
    printf("The size of float type is:%d\n", sizeof(f));
    printf("The size of double type is:%d\n", sizeof(d));
    printf("The size of long double type is:%d\n", sizeof(d1));

    return EXIT_SUCCESS;
}