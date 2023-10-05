#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int cnt[11]={0};

    for(int i=0;i<n;i++)
    {
         int val= ar[i]; //val=a[i] dara bujano hosse j joto nmbr value er dorker seta val er modhe ashbe then cnt te giye count korbe
         cnt[val]++;
    }


    for( int i=0;i<=10;i++)
    {
        printf("%d  - %d\n", i,cnt[i]);
    }





    return 0;
}
