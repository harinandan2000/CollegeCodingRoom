//wap to enter the name roll marks and print them using struture
//hariadan paswan
// roll-22403

#include<stdio.h>
int main()
{ 
    struct student
    {
        char name[20];
        int roll;
        float marks;

    };
    struct student s1;
    printf("enter the name, roll and obtained marks of student\n");
    scanf("%s",& s1.name);
    scanf("%d",&s1.roll);
    scanf("%f",&s1.marks);
    printf("student details is as follows\n");
    printf("name\t \troll \tmarks\n");
    printf("%s \t%d \t%f", s1.name, s1.roll, s1.marks);
    return 0;
}