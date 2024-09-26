
// Write a Program 50 students details in c

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[4];

    printf("Enter details for 50 students:\n");

    // Input details for each student
    for (int i = 0; i < 4; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display details of all students
    printf("\nDetails of all students:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
