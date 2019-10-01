#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int alice[n],bob[n];
        for(i=0;i<n;i++)
            scanf("%d",&alice[i]);
        for(i=0;i<n;i++)
            scanf("%d",&bob[i]);
        int ma,mb;
        ma=alice[0];
        mb=bob[0];
        for(i=0;i<n;i++)
        {
            if(alice[i]>ma)
                ma=alice[i];
        }
    for(i=0;i<n;i++)
    {
       if(bob[i]>mb)
            mb=bob[i];
    }
    for(i=0;i<n;i++)
       { if(alice[i]==ma)
        {
        alice[i]=0;
        break;
        }
        }
    for(i=0;i<n;i++)
      {
        if(bob[i]==mb)
       {
        bob[i]=0;
        break;
        }
        }
    int suma=0,sumb=0;
    for(i=0;i<n;i++)
    {
        suma+=alice[i];
        sumb+=bob[i];
    }
    if(sumb>suma)
        printf("Alice\n");
    else if(suma>sumb)
        printf("Bob\n");
    else if(suma==sumb)
        printf("Draw\n");
    }
    return 0;
}
