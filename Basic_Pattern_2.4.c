#include<stdio.h>
int main()
{
    int i,j;
    int N;
    scanf("%d",&N);
        for(i=N;i>=1;i--)
        {
            for(j=i;j<=N;j++)
    {
        printf("%d ",j);
    }
    printf("
");
}
}