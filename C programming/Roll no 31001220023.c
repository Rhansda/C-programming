#include<stdio.h>
int duck(int x);
int main()
{
	int num,q;
	printf("Enter a number: ");
	scanf("%d",&num);
	q=duck(num);
	printf("%d",q);
	return 0;
}
int duck(int x)
{
	int i,num,p=0;
	while(x!=0)
	{
		num=x%10;
		x=x/10;
		if(num==0)
		{
			p=1;
		}
	}
	if(p==1)
	{
		printf("Number is a duck number\n");
	}
	else
	{
			printf("Number is not a duck number\n");
	}
	return 0;
}

