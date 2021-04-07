#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is it",a);
		}
		if(a<0)
		a=(-1)*a;
		{
			printf("%d is a absolute number",a);
			}
			return 0;	
}
