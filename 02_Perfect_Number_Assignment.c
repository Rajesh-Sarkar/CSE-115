#include <stdio.h>
int main()
{
    int a, b, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("All perfect numbers from 1 to %d is:\n", num);
    for (a = 1; a <= num; a++)
    {
        sum = 0;
        for (b = 1; b < a; b++)
        {
            if (a % b == 0)
            {
                sum = sum + b;
            }
        }
        if (sum == a)
            printf("%d is a perfect number\n", a);
    }
    return 0;
}
