#include<stdio.h>
int main()
{
	int num,i,p=0,q,j;
	printf("Enter the Number ");
	scanf("%d",&num);
	j=num;
	while(num!=0)
	{
		i=num%10;
		q=(i*i*i);
		p=p+q;
		num=num/10;
		
	}
	if(num==p)
	{
		printf(" is Armstrong number");
	}
	else
	{
		printf(" is not a Armstrong Number");
	}
	return 0;
}
