#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int p[n+1];
    for(i=0;i<=n;i++)
    {
      p[i]=0;
    }
    for(i=0;i<n;i++)
    {
       scanf("%d",&c);
       p[c]=1;
    }
    for(i=0;i<=n;i++)
    {
        if(p[i]==0)
            printf("%d\t",i);
    }
    return 0;

}
