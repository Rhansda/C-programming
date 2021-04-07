#include<stdio.h>
int main()
{
	float sp,cp,net;
	printf("Enter selling price: ");
	scanf("%f",&sp);
	printf("Enter cost price: ");
	scanf("%f",&cp);
	if(sp>cp)
	net=sp-cp;
	{
		printf("profit incurred is %f",net);
	}
	if(cp>sp);
	net=cp-sp;
	{
		printf("loss incurred is %f",net);
	}
	return 0;
}
