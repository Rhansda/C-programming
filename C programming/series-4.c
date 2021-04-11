#include<stdio.h>
int main()
{
    int i,n;
    float s=0.00,d=2.00,m=1.00;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+m/d;
        d=d+3.00;
    }
    printf("Sum of the series is %f ",s);
    return 0;
}
