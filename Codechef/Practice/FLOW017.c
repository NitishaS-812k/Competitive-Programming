#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
if((a>b&&a<c)||(a>c&&a<b))
        d=a;
   else if((b>a&&b<c)||(b>c&&b<a))
        d=b;
    else if((c>a&&c<b)||(c>b&&c<a))
        d=c;
        printf("%d\n",d);
        
        }
        return 0;
        }
