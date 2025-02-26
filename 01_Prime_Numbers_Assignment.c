#include <stdio.h>
#include<math.h>

int main()
{
    int m, n, flag, i, j;
    int sum = 0;

    printf("Enter the value of m=");
    scanf("%d", &m);

    printf("Enter the value of n=");
    scanf("%d", &n);

    for (i = m; i <= n; i++)
    {
        flag = 1;

        if (i == 0 || i == 1)
        {
            continue;
        }
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            sum = sum + i;
        }
    }
    printf("Sum of prime numbers between %d and %d is: %d\n", m, n, sum);
    return 0;
}