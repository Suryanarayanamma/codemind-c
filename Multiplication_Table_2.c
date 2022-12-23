#include<stdio.h>
int main()
{
    int n,r,i,x;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        x=n*i;
        printf("%d x %d = %d
",n,i,x);
    }
}