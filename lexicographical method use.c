#include<stdio.h>
#include<string.h>
int main()
{

    char a[100], b[100];

    scanf("%s %s",a,b);

    int sabbir=strcmp(a,b);

    if(sabbir<0)
    {
        printf("A is smaller");
    }
    else if(sabbir>0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("same");
    }





    return 0;
}
