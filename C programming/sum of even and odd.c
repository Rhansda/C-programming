#include <stdio.h>
int main()
{
	int a, b, c = 0;
	x;
	printf("Enter a Number: ");
	scanf("%d", &a);
	while (a != 0)
	{
		b = a % 10;
		a = a / 10;
		if (b % 2 == 0)
		{
			c = c + a;
		}
		if (b % 2 == 1)
		{
			x = x + a;
		}
		printf("Sum of even number is %d%d", x, c);
	}
}
