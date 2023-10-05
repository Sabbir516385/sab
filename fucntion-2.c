#include<stdio.h>
int sum()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s=a+b+c;
    return s;
}
int main()
{
    int s=sum();
    printf("%d",s);
}
