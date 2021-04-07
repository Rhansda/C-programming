#include<stdio.h>
int main()
{
	int a,b,p=0;
	printf("Enter the Number: ") ;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		if(b%2==1)
		{
			printf("Display the odd digits: %d",b);
		}
		return 0;
	}
}

