//WAP TO PRINT THE VALUE AND ADRESS OF VARIABLE USING POINTER
//NAME- HARINANDAN PASWAN
//ROLL- 22403


#include <stdio.h>
int main()
{
    int x = 10;
    int *p;
    p = &x;
    printf("The value %d is stored at address %u\n", x, &x);
    printf("The value %d is stored at address %u\n", x, p);
    printf("The value %d is stored at address %u\n", *p, p);

    return 0;
}