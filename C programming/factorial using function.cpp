#include<stdio.h>
int fact(int x);
int main()
{
	int num,fact;
	scanf("%d",&num);
	fact=(num);
	printf("fact=%d\n",fact);
	return 0;
}
int fact(int x)
{
	int i,p=1;
	for(i=1;i<=x;i++)
	p=p*i;
	return(p);
}
