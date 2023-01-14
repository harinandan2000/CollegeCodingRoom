//made by harinandan 22403
//lip year check

#include <stdio.h>
int main()
{
    int year, L;
    printf("Enter your year:  ");
    scanf("%d", & year);
    printf("you have entered %d as your year\n",year);
    L = year%4;
    if(L==0)
    printf("This is a lip year");
    else  
    printf("this is a not lip year");

        return 0;
    } 