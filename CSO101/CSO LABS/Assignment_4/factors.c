#include <stdio.h>

int main()
{
    int n;
    printf("Enter number = ");
    scanf("%d", &n);

    printf("Factors of the number %d are = ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    
}