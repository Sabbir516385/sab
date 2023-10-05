#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
     int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",ar[i]);
    }
    int x;
    scanf("%d",&x);

    for( int i=0;i<n-1;i++)
    {
        for(int j=1+1;j<n;j++)
        {
            printf("%d %d",ar[i],ar[j]);
        }
    }




    return 0;
}
