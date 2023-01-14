//harinandan 22403
//program for day of weaks
#include <stdio.h>
int main()
{
    int choice;
    printf("Enter the day of weaks between 1 to 7\n  ");
    scanf("%d", & choice);
    switch(choice)
    {
        case 1:
        printf("SUNDAY");
        break;

        case 2:
        printf("MONDAY");
        break;

        case 3:
        printf("TUESDAY");
        break;

        case 4:
        printf("WEDNESDAY");
        break;

        case 5:
        printf("THURSDAY");
        break;

        case 6:
        printf("FRIDAY");
        break;

        case 7:
        printf("SATURDAY");
        break;

        default:
        printf("keybord enter is not correct place enter number between 1 to 7\n");
    }

    return 0;
    
}