#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,remainder,sum=0;
        scanf("%d",&n);
        while(n!=0)
        {
            remainder=n%10;
            sum+=remainder;
            n=n/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
