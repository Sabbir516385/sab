#include<stdio.h>
int main()
{
    char a[100],b[100];

    scanf("%s %s",a,b);

    int i=0;

    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0') //condition1:A=abcd B=abcd ( same)
        {
            printf("Same\n");
            break;
        }
        else if(a[i]=='\0') //condition2:A=abc and B=abcd:A is small
        {
            printf("A is small\n");
            break;
        }
        else if(b[i]=='\0') //conditoin3:A=abcd and B=abc:B is small
        {
            printf("B is small\n");
            break;
        }
        if(a[i]==b[i]) // jodi A=B hoi char hobe tahole samne jabe
        {
            i++;
        }
        else if(a[i]<b[i]) //A jodi B char er soto hoi tahole A soto hobe
        {
            printf("A is small\n");
            break;
        }
        else
        {
            printf("B is small\n"); //nahole B soto hobe
            break;
        }


    }

















    return 0;
}
