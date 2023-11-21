#include<stdio.h>
int main()
{
    int N;
    int i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=1;j<=N;j++)
        {
            printf("%d ",i%2);
        }
        printf("
");
    }
}