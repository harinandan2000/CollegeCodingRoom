// Harinandan paswan
// Roll no- 22403
// W A P to print swiping the value of variable
#include <stdio.h>

void swapv(int a, int b);
void swapr(int *a, int *b);

int main()
{

    int x, y;
    // x = 10;
    // y = 20;
    printf("Enter the valu of X : ");
    scanf("%d", &x);
    printf("Enter the valu of y : ");
    scanf("%d", &y);

    printf("The value of x = : %d and y = : %d\n", x, y);
    printf("The function pass by value is used here\n");

    swapv(x, y); // function pass by value

    printf("The value of x = : %d and y = : %d\n", x, y);
    printf("The function pass by refernce is used here\n");

    swapr(&x, &y); // function pass by adress

    printf("The value of x = : %d and y = : %d\n", x, y);
    printf("The function pass by value is used here\n");

    return 0;
}
void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    a = temp;
}
void swapr(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}