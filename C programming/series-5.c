#include <stdio.h>
int main()
{
    int i, n;
    float d = 1.00, m = 1.00, s = 0.00, p;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        p = 1.00;
    {
        d = d + 2.00;
        m = m + 1.00;
        for (i = 1; i <= m; i++)
        {
            p = i * p;
        }
        s = s + p / d;
    }
    printf("Sum of series is %f", s);
    return 0;
}