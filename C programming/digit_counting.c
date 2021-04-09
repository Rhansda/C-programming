#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter the values: ");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c++;
	}
	printf("%d digits are here",c);
	return 0;
}
