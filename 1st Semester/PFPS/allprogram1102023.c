//Harinandan paswan 
//Roll no-22403
//wap demostrode meinue
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, side, b, h, l, w;
    float area, r;
    char flag;
    flag = 'Y';
    while(flag == 'Y')
    {
        system("cls");
        printf("press 1 for squre\n");
        printf("press 2 for circle\n");
        printf("press 3 for traingle\n");
        printf("press 4 for rectangle\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("Enter the side of squre :  ");
            scanf("%d", &side);
            area = (side*side);
            printf("the side of squre:\t%f\n", area);
            break;

            case 2:
            printf("Enter the rechicle of circle:  ");
            scanf("%f", &r);
            area = 3.14*r*r;
            printf("the rechicle of circle:\t%f\n",area);
            break;

            case 3:
            printf("enter the value of traingle:  ");
            scanf("%d %d",&b,&h);
            area = (b*h)/2;
            printf("the value of traingle:\t%f\n",area);
            break;

            case 4:
            printf("enter the value of rectangle:   ");
            scanf("%d %d", &l, &w);
            area = l*w;
            printf("the value of rectangle:\t%f\n", area);
            break;

            default:
            printf("enter your valid in put 1 to 4 .");

        }
        printf("you want to continue press Y/N :  ");
        scanf("%s", &flag);

    }

    return 0;
}