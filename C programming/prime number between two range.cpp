#include<stdio.h>
int main()
{
	int a,b,i,p,x;
	printf("Enter two renges: ");
	scanf("%d",&a,&b);
	for(i=a;i<=b;i++);
	{
		x=0;
	}
	for(p=2;p<i;p++)
	{
		if(i%p==0)
		{
			x=1;
		}
	}
	if(x==0)
	{
		printf("%d is Prime Number",i);
	}
	return 0;
}
