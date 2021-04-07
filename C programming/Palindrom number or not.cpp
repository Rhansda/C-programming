#include<stdio.h>
int main()
{
	int num,p,r=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
	while(num!=0);
	{
		p=num%10;
		num=num/10;
		r=r*10+p;
	}
	
	printf("%d is a palindrom Number",num);
		return 0;
	
}
