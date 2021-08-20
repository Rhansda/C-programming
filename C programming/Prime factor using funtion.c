#include<stdio.h>
int prime(int x);
int main()
{
	int num,y;
	printf("Enter a number: ");
	scanf("%d",&num);
	y=prime(num);
	printf("%d",y);
	return 0;
}
int prime(int x)
{
	int i,j,p=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			p=1;
		}
		if(p==0)
		{
			printf("%d is prime factor\n",i);
		}
		else
		{
			printf("%d is not a prime factor\n",i);
		}
		return 0;
	}
}
