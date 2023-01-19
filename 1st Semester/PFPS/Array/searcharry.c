// wap to search and array element
// harinandan 

#include <stdio.h>
int main()
{
    int num[10], search, i, flag=1;
    printf("enter 10 integer value in array\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("enter the value to be search\n");
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