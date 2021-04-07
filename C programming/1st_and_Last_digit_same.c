#include<stdio.h>
int main()
{
	int a,b,p=0,q;
	printf("Enter a Number: ");
	scanf("%d",&a);
	b=a%10;
	while(a!=0)
	{
		a=a%10;
		q=a%10;
		p=p*10+q;
	}
	p=p%10;
	if(b==p)
	{
		printf("1st Digit & Last Digit are same",b);
	}
	return 0;
}
