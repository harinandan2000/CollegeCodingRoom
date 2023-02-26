#include <stdio.h>

int main()
{
    char a = 'a';
    char a2 = 'a';
    char b = 'b';
    char *x = &a;
    char *y = &a2;
    char *z = &b;

    printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    *x = *x + *y;
    printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    *y = *x - *y;
    printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    *x = *x - *y;
    printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    return 0;
}