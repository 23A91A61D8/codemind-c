#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
    

            if(arr[i]>max)//8>4
        {
            max=arr[i];//8
        }
    
    }
        printf("%d",max);
    
}