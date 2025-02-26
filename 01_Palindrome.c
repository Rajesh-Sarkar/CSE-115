#include <stdio.h>
int main()
{
    int n, original_number, reversed_number = 0, remainder;

    printf("Enter a Number =");
    scanf("%d", &n);

    original_number = n;

    while (n > 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    if (original_number == reversed_number)
    {
        printf("%d is palindorme number", original_number);
    }
    else
    {
        printf("%d is not a palindrome number", original_number);
    }
    return 0;
}