#include<stdio.h>
int main()
{
	int a,b,p=0;
	printf("Enter the size of Array: ");
	scanf("%d",&a);
	int i[a];
	printf("Enter the numbers: ");
	for(b=0;b<a;b++)
	{
		scanf("%d",&i[b]);
	}
	for(b=0;b<a;b++)
	{
		if(i[b]%2!=0)
		{
			printf("Odd numbers are %d",i[b]);
		}
	}
	return 0;
}
