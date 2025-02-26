#include <stdio.h>
int main()
{
    int a, number;
    printf("Enter a Number:");
    scanf("%d", &a);

    printf("Reverse form of %d is:",a);

    while (a != 0)
    {
        number = a % 10;

        printf("%d", number);
        a = a / 10;
    }

    return 0;
}
