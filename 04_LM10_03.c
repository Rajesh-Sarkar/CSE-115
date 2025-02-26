#include<stdio.h>
int main()
{
    int n,i;
    //input n=1 other else it not gone show the same value what is on the example
    printf("Enter n: ");
    scanf("%d", &n);

    for (i=1;i <= 1;i++)
    {
        printf("%d",n++);
    }
    printf("\n");

    for (i=1;i <= 2;i++)
    {
        printf("%d",n++);
    }
    printf("\n");

    for (i=1;i <= 3;i++)
    {
        printf("%d",n++);
    }
    printf("\n");


    for (i=1;i <= 4;i++)
    {
        if (i == 4)
        {
            printf("0 ");
        }

        else

        {
            printf("%d",n++);
        }
    }
    printf("\n");


    for (i=1;i <= 5;i++)

    {
        printf("%d",i);
    }

    printf("\n");

    return 0;
}
