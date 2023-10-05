#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)
    {
        printf("a-%d\t",a);
    }
    else if(b<=c && b<=a)
    {
        printf("b-%d\t",b);
    }
    else
    {
        printf("c-%d\t",c);
    }

    if(a>=b && a>=c)
    {
        printf("a-%d",a);
    }
    else if(b>=c && b>=a)
    {
        printf("b-%d",b);
    }
    else
    {
        printf("c-%d",c);
    }







return 0;
}
