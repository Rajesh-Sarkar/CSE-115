#include <stdio.h>
int main() 
{
    int n, sum = 0;
    int is_prime;
    printf("Enter a number: ");
    scanf("%d", &n);


    while (n> 0)
    {
        sum += n % 10; 
        n /= 10; 
    }

    printf("Sum of digits: %d\n", sum);

    if (sum < 2)
    {
        printf("%d is not a prime number.\n", sum);
    } 
    
    else
     {
        is_prime = 1;
        for (int i = 2; i < sum; i++) {
            if (sum % i == 0) 
            {
                is_prime= 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d is a prime number.\n", sum);
        } 
        
        else
        
        {
            printf("%d is not a prime number.\n", sum);
        }
    }

    return 0;
}