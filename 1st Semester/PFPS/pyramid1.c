// w a p to print pyramid
//harinandan kumar 
//Roll no- 22403
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, y, x=40;
    //scrscr();
    printf("\n Enter a number for \ngenerating the pyramid : \n ");
    scanf("%d", &num);
    for(y=0; y<=num; y++)
    {
        gotaxy(x, y+1);
        for(i=0; i<=y; i++)
        printf("3%d", abs(i));
        x=x-3;
    }
    
    return 0;
}