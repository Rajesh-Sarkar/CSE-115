#include <stdio.h>
void Hollow_Right_Triangle(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter lins: ");
    scanf("%d", &n);

    if (n <= 0)

    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    Hollow_Right_Triangle(n);

    return 0;
}