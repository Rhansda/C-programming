#include <stdio.h>
int main()
{
    int i, n;
    float d = 2.00, m = 0.00, a, k = 7;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    printf("Enter the value of a: ");
    scanf("%f", &a);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            m = m + (d * a) / k;
            k = k - 2;
            d = d + 2;
        }
        else
        {
            m = m - (d * a) / k;
            k = k - 2;
            d = d + 2;
        }
        printf("%Sum of series is %f", m, k);
        return 0;
    }
}