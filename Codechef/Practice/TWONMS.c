#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{long long int a,b,n;
int i;
scanf("%lld%lld%lld",&a,&b,&n);
if(n%2==0)
{
    if(a>b)
    printf("%lld\n",a/b);
    else
        printf("%lld\n",b/a);
}
else
  {

    a=a*2;
if(a>b)
    printf("%lld\n",a/b);
else
    printf("%lld\n",b/a);
  }
}
return 0;
}




