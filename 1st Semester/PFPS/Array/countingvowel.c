// Name- Harinadan paswan
// Roll no- 22403
// W A P to Enter your name and calculate the number of Vowels number and Consonant number & Space count
#include <stdio.h>
int main()
{
    char name[50];
    int i = 0, vcount = 0, scount = 0, ccount = 0;
    printf("Enter your name : ");
    gets(name);
    while (name[i] != '\0')
    { 
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            vcount++;
        else if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
            vcount++;
        else if (name[i] == ' ')
            scount++;
        else
            ccount++;
        i++;
    }
    printf("Total Vowel and consonants in my name is %d,  %d and space count is %d ", vcount, ccount, scount);

    return 0;
}