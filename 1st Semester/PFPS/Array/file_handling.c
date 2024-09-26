

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    int rollno;
    int branch;
};

int main()
{
    struct Student students[4];
    FILE *file;

    // Open file for writing
    file = fopen("student_details.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter details for 50 students:\n");

    // Input details for each student
    for (int i = 0; i < 4; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Roll no: ");
        scanf("%d", &students[i].rollno);
        printf("Branch:  ");
        scanf("%d", &students[i].branch);

        // Write details to file
        fprintf(file, "%s\n %d\n %d\n  %d\n", students[i].name, students[i].age, students[i].rollno, students[i].branch);
    }

    // Close the file
    fclose(file);

    // Open file for reading
    file = fopen("student_details.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Display details of all students
    printf("\nDetails of all students:\n");
    for (int i = 0; i < 4; i++)
    {
        fscanf(file, "%s %d %d %d", students[i].name, &students[i].age, &students[i].rollno, &students[i].branch);
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll no: %d\n", students[i].rollno);
        printf("Branch: %d\n", students[i].branch);
    }

    // Close the file
    fclose(file);

    return 0;
}
