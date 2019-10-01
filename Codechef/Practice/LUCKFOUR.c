#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        int count=0,rem;
        scanf("%lld",&n);
        while(n>0)
        {
            rem=n%10;
            if(rem==4)
                count++;
            n/=10;
        }
        printf("%d\n",count);
    }
    return 0;
}
