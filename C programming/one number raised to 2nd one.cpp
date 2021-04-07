#include<stdio.h>
int power(int x,int y);
int main()
{
	int a,b;
	printf("Enter the 1st number: ");
	scanf("%d",&a);
	printf("Enter the 2nd number: ");
	scanf("%d",&b);
	printf("%d to the power of %d is %d\n",a,b,power(a,b));
	return 0;
}
int power(int x,int y)
{
	int i,p=1;
	for(i=1;i<=y;i++)
	{
		p=p*x;
	}
	return(p);
}
