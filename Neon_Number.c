#include<stdio.h>
int main()
{
    int n,i,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    for(i=0;i<=sq;i++)
    {
    sum+=sq%10;
    sq=sq/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}