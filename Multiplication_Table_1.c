#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        x=n*i;
        printf("%d x %d = %d
",n,i,x);
    }
}