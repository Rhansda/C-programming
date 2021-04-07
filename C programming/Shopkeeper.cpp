#include<stdio.h>
int main()
{
	int p,s,x;
	float r,t;
	printf("Enter printed price: ");
	scanf("%d",&p);
	s=p*90/100;
	x=s*106/100;
	printf("Amount to be paid by customer is %d",x);
	return 0;
}
