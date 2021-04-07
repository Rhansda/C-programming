#include<stdio.h>
     
int main()
{
    int i,N,sum=0;
     
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
			sum= sum+ i;
        }
     
    /*print the sum*/
     
    printf("Sum of the series is: %d\n",sum);
     
    return 0;
}
