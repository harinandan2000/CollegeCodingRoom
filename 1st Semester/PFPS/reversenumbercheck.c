// wap to print reverse the digit of a number
//Harinandan paswan
// Roll-no. 22403
#include <stdio.h>

int main()
{
    int num, reverse=0, r;

    printf("please enter the number to be reverse:\t      ");
    scanf("%d", &num);

    do
    {
        r = num%10;
        reverse = reverse*10+r;
        num = num/10;

    }
    while(num !=0);
    printf("the number after is: %d\t         ", reverse);


    return 0;
}