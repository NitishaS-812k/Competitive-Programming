#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,i, max=-1;
        scanf("%d %d",&n,&k);
        for( i=1;i<=k;i++)
        {
            if(n%i>max)
                max=n%i;
        }

        printf("%d\n",max);
    }
    return 0;

}
