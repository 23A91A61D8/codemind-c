#include<stdio.h>
int main()
{
    int N;
    char i,j;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}