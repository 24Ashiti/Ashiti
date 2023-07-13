#include<stdio.h>
int b=10;
int sum(int a)
{
    a++;
    printf("%d",a);
    printf("%d",b);
    if(a==10)
    {
        return a;
    }
    else
    {
        return sum(a);
    }
}
int main()
{
    int a;
    a=sum(1);

    printf("\nA:%d",a);
    printf("\nB:%d",b);
}