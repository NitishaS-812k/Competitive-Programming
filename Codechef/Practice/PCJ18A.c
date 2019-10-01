#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         long int n,x;
         int i,flag=0;
        scanf("%ld%ld",&n,&x);
        long int a[1000];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=x)
                flag=1;
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
