#include<stdio.h>
int main()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("%d",fact);
}
//6 factorial is 6*5*4*3*2*1