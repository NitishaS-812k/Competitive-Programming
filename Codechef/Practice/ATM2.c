#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
      long long  int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {

           if(a[i]<=k)
           {
               k=k-a[i];
               a[i]=1;
           }
           else
           {
               a[i]=0;
           }
        }
        for(i=0;i<n;i++)
        {
            printf("%lld",a[i]);
        }
        printf("\n");
    }
    return 0;
}
