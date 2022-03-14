#include <stdio.h>

int main()
{
    long int n, i = 2;
    scanf("%ld", &n);
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%ld", i);
            if (n != i)
                printf("x");
            n /= i;
        }
        else
            i++;
    }
    printf("\n");
}