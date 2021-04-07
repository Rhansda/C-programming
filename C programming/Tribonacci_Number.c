#include<stdio.h>
int main()
{
	int a,b,c,d=0,p=1,x=2,i=1;
	printf("Enter the nth number: ");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("%d",d);
		b=d+p+x;
		d=p;
		x=b;
		i++;
	}
	return 0;
}
