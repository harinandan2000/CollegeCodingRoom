//wap to enter the name roll marks obtainted by stat 10 studt
//harinandan paswan
//roll-22403

#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int roll;
        float marks;
    };
    struct student std[10];
    int i;
    for(i=0; i<10; i++)
    {
    printf("Enter the details of student Name ,roll ,marks \n");
    printf("enter the details of %d student\n",i+1);
    scanf("%s",&std[i].name);
    scanf("%d",&std[i].roll);
    scanf("%f",&std[i].marks);
    printf("name\t  \troll \tmarks\n");
    printf("%s \t%d \t%f\n", std[i].name, std[i].roll, std[i].marks);

    }
    return 0;
    

}