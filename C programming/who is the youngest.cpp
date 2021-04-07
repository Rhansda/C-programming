#include<stdio.h>
int main()
{
	int r,s,a;
	printf("Enter age of Ram: ");
	scanf("%d",&r);
	printf("Enter age of Shyam: ");
	scanf("%d",&s);
	printf("Enter age of Ajay: ");
	scanf("%d",&a);
	if((r<s)&&(r<a))
	{
		printf("Ram is the youngest",r);
	}
	if((s<r)&&(s<a))
	{
		printf("Shyam is the youngest",s);
	}
	else
	{
		printf("Ajay is the youngest",a);
	}
	return 0;
}
