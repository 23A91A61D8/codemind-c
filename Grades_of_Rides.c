#include<stdio.h>
int main()
{
    int HF,SF,Spf;
    scanf("%d%d%d",&HF,&SF,&Spf);
    if(HF>50 && SF>60 && Spf>100)
    {
        printf("10");
    }
    else if(HF>50 && SF>60)
    {
        printf("9");
    }
    else if(SF>60 && Spf>100)
    {
        printf("8");
    }
    else if(HF>50 && Spf>100)
    {
        printf("7");
    }
    else if(HF>50 || SF>60 || Spf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}