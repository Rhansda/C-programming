#include<stdio.h>
int main()
{
	int bs;
	float da, hr,gs;
	printf("Enter the basic salary: ");
	scanf("%d",&bs);
	da=bs*40/100;
	hr=bs*20/100;
	gs=bs+da+hr;
	printf("\n gross salary is:%f",gs);
	return 0;
}
