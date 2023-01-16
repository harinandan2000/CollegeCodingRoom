//wap to search and array element
// Harinandan paswan
//Roll no- 22403

#include <stdio.h>
int main()
{
    int num[10], search, i, flag = 1;
    printf("Enter 10 integer value in array \n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }   

    printf("Enter the value to be searched\n");
    scanf("%d", &search);

    for(i=0; i<10; i++)
    {
        if(search == num[i])
        flag = 0;
    }

    if(flag == 0)
    printf("search sucessfull\n");
    else
    printf("unsucessfull\n");

    return 0;
}