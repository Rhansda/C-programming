#include <stdio.h>
int main()
{
    int a, i, p = 0;
    printf("Enter the limit: ");
    scanf("%d", &a);
    for (i = 50; i < a; i++)
    {
        if (a % 2 == 0)
        {
            p = 1;
        }
    }
    if (p == 0)
    {
        printf("%d is a prime number: ", a);
    }
    else
    {
        printf("%d is not a prime number: ", a);
    }
    return 0;
}