#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Enter the sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n Area of Triangle: %f",area);
	return 0;
}
