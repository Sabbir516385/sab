#include<stdio.h>

int main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c", &a);
    printf("\n");
    if(a>=65 && a<90)
        printf("%c", a+1);
    else if(a>=97 && a<122)
        printf("%c", a+1);


    return 0;
}
