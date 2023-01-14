//x, n times using the while loop
// Harinandan kumar 22403

#include<stdio.h>
int main()
{
    int count, n;
    float x, y;
    printf("Enter the value of x  : ");
    scanf("%f", &x);
    printf("Enter the value of  n : ");
    scanf("%d", &n);
    y = 1.0;
    count = 1;  //Intialisation
    //loop begins
    while(count<=n) //testing
    {
        y = y*x;
        count++;    //incrementing
    }
    //end the loop
    printf("\nx = %f; n = %d; x to power n = %f\n",x,n,y);
    return 0;
}