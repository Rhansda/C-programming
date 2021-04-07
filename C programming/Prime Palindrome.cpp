#include<stdio.h>
int main()
{
	int num,i,x,p=0,r,rev=0;
	printf("Enter any Number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			p++;
		}
	}
	x=num;
	while(num!=0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	if((p==0)&&(rev==x))
	{
		printf("%d is Prime Palindrome",x);
	}
	else
	{
		printf("%d is not a Prime Palindrome",x);
	}
	return 0;
}
