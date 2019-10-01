#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int remainder, reverse=0;
        while(n>0)
        {
            remainder=n%10;
            reverse= reverse*10 +remainder;
            n/=10;
        }
        printf("%d\n",reverse);

    }
    return 0;

}
