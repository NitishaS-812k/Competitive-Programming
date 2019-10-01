#include<stdio.h>
int main()
{
    int n,i,a[100],lc=0,uc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            lc++;
        else
            uc++;
    }
    if(lc>uc)
        printf("READY FOR BATTLE");
    else printf("NOT READY");
    return 0;
}
