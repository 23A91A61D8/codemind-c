#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("Equilateral triangle");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}