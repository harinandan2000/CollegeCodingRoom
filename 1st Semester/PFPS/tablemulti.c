//w a p to print multipule table
//Harinandan kumar 22403
#include <stdio.h>
#define colmax 29
#define rowmax 30
int main()
{
    int row, column, y;
    row=1;
    printf("multiplication table\n");
    printf("---\t--------\t-------\t------\t----\n");
    do
    {
        column=1;
        do
        {
            y=row*column;
            printf("%d\t", y);
            column=column+1;
        }
        while (column<=colmax);
        printf("\n");
        row=row+1;
    }
    while (row<=rowmax);
    printf("---\t-----\t---------\t-------\t-----\n");
    return 0;
}