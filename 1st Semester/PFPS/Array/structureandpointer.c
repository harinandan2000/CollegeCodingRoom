// Harinandan paswan
// Roll No-22403
// W A P to enter Name, Roll No, Branch and Age of a student and film them("Structure and pointer")
#include <stdio.h>
int main()
{
    struct student
    {

        char fname[15];
        char lname[15];
        int roll_no;
        char branch[5];
        int age;
    };

    struct student s1, s2;
    struct student *p, *q;
    p = &s1;
    q = &s2;
    printf("Enter the first name, last name, Roll-No, Branch and Age of student\n");
    scanf("%s", &s1.fname);
    scanf("%s", &s1.lname);
    scanf("%d", &s1.roll_no);
    scanf("%s", &s1.branch);
    scanf("%d", &s1.age);
    printf("\n");
    printf("PRINTING USING ARROW OPERATOR\n");
    printf("      Name           Roll-No      Branch      Age  \n");
    printf("%5s %5s\t      %2d\t %3s\t      %d\n", p->fname, p->lname, p->roll_no, p->branch, p->age);
    printf("\n PRINTING USING MEMBER OPERATOR\n");
    printf("Enter the first name, last name, Roll-No, Branch and Age of student\n");
    scanf("%s", &q->fname);
    scanf("%s", &q->lname);
    scanf("%d", &q->roll_no);
    scanf("%s", &q->branch);
    scanf("%d", &q->age);
    printf("      Name           Roll-No      Branch      Age  \n");
    printf("%5s %5s\t      %2d\t %3s\t      %d\n", (*q).fname, (*q).lname, (*q).roll_no, (*q).branch, (*q).age);
    // printf("\n USING THE MEMBER OPERATOR FOR FUNCTION");
    // scanf("%s", &(*q).fname);
    // scanf("%s", &(*q).lname);
    // scanf("%d", &(*q).roll_no);
    // scanf("%s", &(*q).branch);
    // scanf("%d", &(*q).age);
    // printf("      Name           Roll-No      Branch      Age  \n");
    // printf("%5s %5s\t      %2d\t %3s\t      %d\n", (*q).fname, (*q).lname, (*q).roll_no, (*q).branch, (*q).age);

    return 0;
}