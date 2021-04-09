#include<stdio.h>
int main()
{
	int n,p,x=0;
	printf("Enter a Number= ");
	scanf("%d",&n);
	while(n!=0)
	{
		p=n%10; 
		n=n/10;
		if(p==0)
		{
			x=1;
		}
		if(x==0)
		printf("the number is a Duck Number",n);
		else
		{
			printf("the number is not a duck number",n);
			
		}
		return 0;
	}
}
