//wap to print the
//harinandan paswan
//roll no- 22403
#include <stdio.h>
#include <conio.h>

int main()
{
    
    int num;
    char choice;
    choice='y';

    while(choice=='y')
    {
        
        printf("Enter the number to be checked\n");
        scanf("%d", &num);

        if(num%2 == 0)
        printf("this is an even number\n");
        else
        printf("this is an odd number\n");
        printf("you wanty to continue for next value press y or n \n");
        scanf("%s", &choice);
    
    }

    return 0;

}