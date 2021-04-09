#include <stdio.h>
void main()
{
    int a, b, c = 0, d, y = 0, k, m;
    printf("Enter a Number: ");
    scanf("%d", &a);
    b = a;
    while (a != 0)
    {
        a = a / 10;
        c++;
    }
    int p[c];
    while (b != 0)
    {
        d = b % 10;
        b = b / 10;
        p[y] = d;
        y++;
    }
    for (k = 0; k < c - 1; k++)
    {
        for (m = k + 1; m < c; m++)
        {
            if (p[k] == p[m])
            {
                printf("%d", p[k]);
            }
        }
    }
}