#include <stdio.h>
int main()
{
	int a, b, i, x;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	for (i = a; i <= b; i++)
	{
		for (x = 2; x < i; x++)
		{
			if (i % x == 0)
				break;
		}
		if (x == i)
			printf("%d ", i);
	}
	return 0;
}
