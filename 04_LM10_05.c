#include <stdio.h>

int main()
{
    int i, j, lines;

    printf("Enter lines: ");
    scanf("%d", &lines);

    for (i = 1; i <= lines; i++)
    {
        for (j = i; j < lines; j++)

        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)

        {
            if (j % 2 == 1)

            {
                printf(" 0");
            }
            else

            {
                printf(" 1");
            }
        }

        printf("\n");
    }

    return 0;
}