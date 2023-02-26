//wap to calculate simple using function(with argument with return)
//Harinandan paswan
//Roll no-22403

#include<stdio.h>
int simple(int a, int b, int c); //This is function declaration

int main()
{
    int P, R, T, I;
    printf("enter the value of P, R & T\n");
    scanf("%d %d %d", &P, &R, &T);
    I=simple(P,R,T); //This is funtion calling
    printf("the simple interest is %d", I);
    return 0;
}

int simple(int a, int b, int c) //This is funtion definition
{
    int cal;
    cal = (a*b*c)/100;
    return(cal);
}