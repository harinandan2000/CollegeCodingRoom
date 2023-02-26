#include <stdio.h>
void swap(i, j);

int main (int argc, const char * argv[])
{
    int i, j;

    i = 1;
    j = 9;
    printf("i = %d and j = %d\n", i, j);

    swap(&i, &j);
    printf("\nnow i = %d and j = %d\n", i, j);

    return 0;
}

swap(i, j)
int *i, *j;
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
