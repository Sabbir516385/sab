#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n-1;k++)
    {
        for(int m=k+1;m<n;m++)
        {
            if(a[k]>a[m])
            {
                int tmp=a[k];
                a[k]=a[m];
                a[m]=tmp;

            }

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}
