#include<stdio.h>
int main()
{
    int n,i,d=0;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d=i*i+1;
        printf("%d  ",d);
    }
    return 0;
}
