//Wap to calculate simple interest using function (no agyrment no return)
//Harinandan paswan
//Roll no - 22403
#include <stdio.h>
int main()
{
    simple();

}
int simple()
{
    int P, R, T, I;
    printf("Enter the value of P, R and T:: \n");
    scanf("%d%d%d", &P, &R, &T);
    I = (P*R*T)/100;
    printf("The simple interest is : %d", I);

}