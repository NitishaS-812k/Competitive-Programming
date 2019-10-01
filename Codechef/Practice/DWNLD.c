#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int sum=0;
        while(n--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if(a>k)
             {
                 sum+=b*(a-k);
                k=0;
             }
             else
                k-=a;
        }
            printf("%d\n",sum);
    }
    return 0;
}
