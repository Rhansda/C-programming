#include<stdio.h>
int main()
{
	int a,b,c,d=1,p,q=0;
	printf("Enter the Number: ");
	scanf("%d",&a);
	b=a;
	for(c=2;c<a;c++)
	{
		if(b%c==0)
		{
			d=0;
		}
	}
	if(d==1)
	{
		while(b!=0)
		{
			p=b%10;
			b=b/10;
			q=q*10+p;
		}
		if(a==q)
		{
			printf("%d is a twisted prime",a);
		}
		else
		{
			printf("%d is a twisted Prime Number",a);
		}
	}
		else
		{
			printf("%d is not a prime number",a);
		}
	return 0;
}
