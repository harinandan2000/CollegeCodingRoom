
// AIM:- Write a C program to find the number of lines in a text file.

#include <stdio.h>

int main()
{
    FILE *filePointer;
    char filename[100];
    char ch;
    int lineCount = 0;

    // Get the file name from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    filePointer = fopen(filename, "r");

    // Check if the file opened successfully
    if (filePointer == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Exit the program with an error code
    }

    // Count the number of lines in the file
    while ((ch = fgetc(filePointer)) != EOF)
    {
        if (ch == '\n')
        {
            lineCount++;
        }
    }

    // Close the file
    fclose(filePointer);

    // Print the result
    printf("Number of lines in the file: %d\n", lineCount);

    return 0; // Exit the program successfully
}
