#include<stdio.h>
int main()
{

    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(a>=97 && a<=122)
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAITAL\n");
        }
    }










    return 0;
}
