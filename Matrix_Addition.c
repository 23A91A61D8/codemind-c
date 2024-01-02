#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr1[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
    }
}
int x,y;
scanf("%d%d",&x,&y);
int arr2[x][y];
for(int i=0;i<x;i++)
{
    for(int j=0;j<y;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        int temp=arr1[i][j]+arr2[i][j];
        printf("%d ",temp);
    }
    printf("
");
}
return 0;
}
