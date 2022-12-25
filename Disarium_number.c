#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,s=0,m;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+pow(r,m--);
        q=q/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}