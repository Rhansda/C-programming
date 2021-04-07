#include<stdio.h>
int main()
{
	float ftemp,ctemp;
	printf("Temparature in Farenheit: ");
	scanf("%f",&ftemp);
	ctemp=(5*ftemp-160)/9;
	printf("\n Temparature in Centigrade is: %f",ctemp);
	return 0;
}
