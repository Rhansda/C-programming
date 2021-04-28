#include <stdio.h>
int main()
{
	int a, b, i, p, x;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	for (i = a; i <= b; i++)
	{
		x = 0;
		for (p = 2; p < i; p++)
		{
			if (i % p == 0)
				x ++;
		}
		if (x == 2)
			Printf("%d ", i);
	}
	return 0;
}

