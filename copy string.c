#include<stdio.h>
#include<string.h>
int main()
{

    char a[100],b[100];

    scanf("%s %s",a,b);
    strcpy(a,b);  //strcpy holo ekta build in function jeta 'b' puro man k copy kore dei

    printf("%s %s",a,b); //logic=a[0]=b[0]
                         //      a[1]=b[1] aivabe nal porjonto jabe










    return 0;

}
