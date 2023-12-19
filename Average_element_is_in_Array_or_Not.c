#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        int avg=(sum/n);
        int found=0;
        for(i=0;i<n;i++)
        {
            if(avg==arr[i])
            {
                found=1;
                break;
            }
     }
    if(found==0)printf("False");
    else printf("True");
}