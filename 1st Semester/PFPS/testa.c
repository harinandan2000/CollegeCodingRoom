#include <stdio.h>
//#include <conio.h>
int main()
{
    int table(int, int);
    int n, i; // local variable
    //clrscr();
    printf("Enter any num : ");
    scanf("%d", &n);
    for (i = 1; i <=10; i++)
    {
        printf(" %d*%d= %d\n", n, i, table(n, i));
    }
    return 0;
}
int table(n, i)
{
    int t;
    if (i == 1)
    {
        return (n);
    }
    else
    {
        t = (table(n, i - 1) + n);
        return (t);
        // return(table(n,i-1)+n);
    }
}