// Name- Harinandan paswan
// Roll no- 22403
// WAP to enter a line & print them

#include <stdio.h>

int main()
{
    char line[50], character;
    int i = 0;
    printf("Enter your string here \n");
    do
    {
        character = getchar();
        line[i] = character;
        i++;

    }
    while (character != '\n');
    i = i - 1;
    line[i] = '\0';
    printf("your line is a follows\n");
    printf("%s", line);
    return 0;
}