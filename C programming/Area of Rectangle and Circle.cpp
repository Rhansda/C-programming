#include<stdio.h>
int main()
{
	float l,b,arear,peri,r,areac,cir;
	printf("Enter the value of length: ");
	scanf("%f",&l);
	printf("Enter the value of breadth: ");
	scanf("%f",&b);
	arear=l*b;
	peri=2*(l+b);
	printf("\n Area of Rectangle= %f",arear);
	printf("\n perimeter of a Rectangle= %f",peri);
	printf("\n Enter the value of radius: ");
	scanf("%f",&r);
	areac=3.14*r*r;
	cir=2.00*3.14*r;
	printf("\n Area of Circle: %f",areac);
	printf("\n Circumference of Circle: %f",cir);
	return 0;
}
