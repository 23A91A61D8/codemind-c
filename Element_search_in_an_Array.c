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
        int se,found=0;
        scanf("%d",&se);
        for(i=0;i<n;i++)
        {
            if(se==arr[i])
            {
                found=1;
                break;
            }
     }
    if(found==0) printf("False");
    else printf("True");
}