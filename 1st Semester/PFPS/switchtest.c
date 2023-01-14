//Harinandan paswan 
//Roll no-22403
//wap demostrode meinue in switch of squre circle traingle rectangle
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    
    char flag;
    flag = 'Y','y';
    while(flag == 'Y','y')
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
            {
                int side, area;
            printf("Enter the side of squre :  ");
            scanf("%d", &side);
            area = (side*side);
            printf("the side of squre :\t%d\n", area);
            break;
            }

            case 2:
            {
                float r, area;
            printf("Enter the radius of circle in r :  ");
            scanf("%f", &r);
            area = 3.14*r*r;
            printf("the area of circle :\t%f\n",area);
            break;
            }

            case 3:
            {
                float b, h, area;
            printf("enter the value of traingle in b :  ");
            scanf("%f",&b);
            printf("enter the value of traingle in h :  ");
            scanf("%f",&h);
            area = (b*h)/2;
            printf("the value of traingle :\t%f\n",area);
            break;
            }

            case 4:
            {
                int l, w, area;
            printf("enter the value of rectangle in l :   ");
            scanf("%d", &l);
            printf("enter the value of rectangle in w :   ");
            scanf("%d", &w);
            area = l*w;
            printf("the value of rectangle :\t%d\n", area);
            break;
            }

            default:
            printf("enter your valid in put 1 to 4 .\n");

        }
        printf("you want to continue press Y/N :  ");
        scanf("%s", &flag);

    }

    return 0;
}