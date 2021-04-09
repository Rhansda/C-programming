#include<stdio.h>
int main()
{
	int a[10],i,n,p,m=1;
	printf("Enter the limt of an array: ");
	scanf("%d",&n);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
		for(i=0;i<n;i=i+2)
		{
			p=a[i];
			a[i]=a[m];
			a[m]=p;
			m=m+2;
		}
	}
			for(i=0;i<n;i++)
			{
				printf("\n%d",a[i]);
			}
	return 0;
}
