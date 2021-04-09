#include<stdio.h>
int main()
{
	int a,b,c,d,p;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("%d",&b);
	c=a;
	d=b;
	while(c!=d)
	{
		if(c>=b)
		{
			c=c-d;
		}
		if(c<=d)
		{
			d=d-c;
		}
	}
	printf("GCD is %d",c);
	p=a*b/c;
	printf("LCM is %d",p);
	return 0;
}
