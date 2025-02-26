#include <stdio.h>
int main()
{
    int n, i;
    //input n=1 other else it not gone show the same value what is on the example
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < 4; i++)

    {
        printf(" ");
    }
    printf("%d\n", n++);

    for (i = 0; i < 3; i++)

    {
        printf(" ");
    }

    for (i = 0; i < 3; i++)

    {
        printf("%d", n++);
    }
    printf("\n");

    for (i = 0; i < 2; i++)

    {
        printf(" ");
    }
    for (i = 0; i < 5; i++)

    {
        printf("%d", n++);
    }
    printf("\n");

    for (i = 0; i < 1; i++)

    {
        printf(" ");
    }
    n = 0;
    for (i = 0; i < 7; i++)

    {
        printf("%d", n++);
        if (n == 10)
            n = 0;
    }
    printf("\n");

    n = 7;
    for (i = 0; i < 0; i++)

    {
        printf(" ");
    }
    for (i = 0; i < 9; i++)

    {
        printf("%d", n++);
        if (n == 10)
            n = 0;
    }
    printf("\n");

    return 0;
}
