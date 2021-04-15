#include<stdio.h>
int main()
{
	int a[10],s,n,i,p=0;
	printf("how many numbers are available in array: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			p++;
		}
		if(p>=1)
		{
			printf("%d is present %d times",s,p);
		}
		else
		{
			printf("%d is not available",s);
		}
		return 0;
	}
}
