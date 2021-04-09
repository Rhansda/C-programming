#include<stdio.h>
int main()
{
	int a[10],i,n,p;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the Numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		while(a[i]!=0)
		p=0;
		{
			n=a[i]%10;
			a[i]=a[i]/10;
			p=p*10+n;
		}
	}
	printf("The reversed array is:\n",p);
	return 0;
}
