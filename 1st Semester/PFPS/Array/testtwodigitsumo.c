//Name- Harinandan paswan
//Roll-No- 22403

#include <stdio.h>

int checksum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    if (sum % 7 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    for (int i = 10; i <= 99; i++)
    {
        if (checksum(i) == 1)
            printf("%d, ", i);
    }
    return 0;
}

// int main()
// {
//     int sum, temp;
//     for (int i = 10; i <= 99; i++)
//     {
//         sum = 0;
//         temp = i;
//         while (temp != 0)
//         {
//             sum = sum + temp % 10;
//             temp = temp / 10;
//         }
//         if (sum % 7 == 0)
//             printf("%d, ", i);
//     }
//     return 0;
// }