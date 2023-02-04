//find the trace of matrix
//Harinandan paswan
//Roll no- 22403
#include <stdio.h>
int main()
{
    int rows, columns, i, j, trace = 0, tra_arr[rows][columns];
    printf("Enter the rows and columns :\n");
    scanf("%d%d", &rows, &columns);
    printf("Enter the matrix element : \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%4d",tra_arr[rows][columns]);
        }
        printf("\n");
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            if(i==j)
            {
                trace = trace + tra_arr[rows][columns];
            }
        }
    }
    printf("The trace of the matrix : %d\n", trace);


    return 0;
}