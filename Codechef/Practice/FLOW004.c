#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { long long int sum=0;
        long long int n;
        scanf("%lld",&n);
        sum=sum+n%10;
        while(n>=10)
        {
            n=n/10;
        }
        sum=sum+n;
    printf("%d\n",sum);
    }
    return 0;

}
