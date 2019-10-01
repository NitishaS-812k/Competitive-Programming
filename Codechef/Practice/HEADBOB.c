#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,ic=0,nc=0,yc=0;
        scanf("%d",&n);
        char a[1000];
        scanf("%s",&a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='N')
                nc++;
            else if(a[i]=='Y')
                yc++;
            else if(a[i]=='I')
                ic++;
        }
        if(nc==n)
            printf("NOT SURE\n");
            else if(ic>0)
                printf("INDIAN\n");
        else
        printf("NOT INDIAN\n");
    }
    return 0;
}
