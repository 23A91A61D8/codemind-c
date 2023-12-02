#include<stdio.h>
int main()
{
    int t,i,n,r,rev=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}