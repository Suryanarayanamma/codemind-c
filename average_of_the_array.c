#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float x,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        x=s/n;
    }
    printf("%0.2f",x);
}