#include<stdio.h>

void main()
{
    int i,n;
    unsigned long long factorial=1;
    printf("enter a number :");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("the factorial of %d doesn't exit",n);
    }
    else
    {
        for(i=2;i<=n;i++)
        factorial*=n;
        printf("the factorial of %d = %llu",n,factorial);
        
    }
}
