#include<stdio.h>
int main()
{
	int i,num,x=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	i=1;
	while(i<num)
	{
		if(num%i==0)
		{
			x=x+i;
		}
		i++;
	}
		if(num==x)
		printf("%d is a perfect Number ",i);
		else
		printf("%d is not a perfect Number ",i);	
	return 0;
}
