//harinandan 22403
//program for month of year print
#include <stdio.h>
int main()
{
    int choice;
    char month;
    month = 'Y';

    while(month == 'Y')
    {
        printf("Enter the month of year between 1 to 12 :   ");
        scanf("%d", & choice);
        switch(choice)

        {
            case 1:
            printf("JANUARY\n");
            break;

            case 2:
            printf("FEBRUARY\n");
            break;

            case 3:
            printf("MARCH\n");
            break;

            case 4:
            printf("APRIL\n");
            break;

            case 5:
            printf("MAY\n");
            break;

            case 6:
            printf("JUNE\n");
            break;

            case 7:
            printf("JULY\n");
            break;

            case 8:
            printf("AUGUST\n");
            break;

            case 9:
            printf("SEPTEMBER\n");
            break;

            case 10:
            printf("OCTOBER\n");
            break;

            case 11:
            printf("NOVEMBER\n");
            break;

            case 12:
            printf("DECEMBER\n");
            break;

            default: 
            printf("keybord enter is not correct please['] enter number between 1 to 12\n");
        }

        printf("you want to continue press Y/N :  ");
        scanf("%s", &month);

    }


    return 0;
    
}