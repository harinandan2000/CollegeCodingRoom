//Name- Harinandan paswan
//Roll no- 22403
// #include <stdio.h>

// void swap(char *x, char *y)
// {
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void reverse(char *str, int k)
// {
//     static int i = 0;

//     if (str[i] == '\0') {
//         return;
//     }

//     if (i <= k) {
//         swap(&str[i], &str[k]);
//         i++;
//     }
// reverse(str, k + 1);
// }

// int main()
// {
//     char str[] = "This is a string";

//     reverse(str, 0);
//     printf("Reverse of the given string is \"%s\"", str);

//     return 0;
// }

#include <stdio.h>

void getstring(char *string)
{
    // char *string will point to the base address of the string to be used for user input
    int i = 0;
    char c;
    do
    {
        c = getchar();
        string[i] = c;
        i++;
    } while (c != '\n');
    string[i - 1] = '\0';
}

void swap(char *x, char *y)
{
    // printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    // *x = *x + *y;
    char temp = *x;
    // printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    // *y = *x - *y;
    *x = *y;
    // printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
    // *x = *x - *y;
    *y = temp;
    // printf("x = %d, %c -- y = %d,%c\n", *x, *x, *y, *y);
}

void reverse(char *arr, int ind)
{
    // static int exit;
    // static int enter = 0;

    static int i = 0;

    // printf("Recursion %d --> string = %s --> i = %d --> ind = %d --> Condition = %d\n", enter, arr, i, ind, (arr[ind] == '\0'));

    if (arr[ind] == '\0')
        return;

    // enter++;

    reverse(arr, ind + 1);

    // exit = ind;
    // printf("---------------------------------------\n");
    // printf("Recursion %d --> string = %s --> i = %d --> ind = %d\n", exit, arr, i, ind);

    if (i <= ind)
    {
        swap(&arr[i], &arr[ind]);
        i++;
    }
    else
        return;

    // exit--;
}

int main()
{
    printf("Input your string: ");
    char string[20];

    getstring(string);
    printf("INPUT  STRING: %s\n", string);
    reverse(string, 0);
    printf("OUTPUT STRING: %s\n", string);

    return 0;
}