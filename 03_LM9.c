#include <stdio.h>
int main() {
    int m, n, i, j;

    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);

   
    for (i = 1; i <= n; i++)
     {

        for (j = 1; j <= n - i; j++)
        
        {
            printf(" ");
        }

        for (j = 1; j <= m; j++)
        
        {
            if (i == 1 || i == n || j == 1 || j == m)
            
            {
                printf("*");
            } 
            
            else
            
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
