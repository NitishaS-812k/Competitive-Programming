#include<stdio.h>
int s(int d, int n);
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,d,sum;
scanf("%d%d",&d,&n);
sum=s(d,n);
printf("%d\n",sum);
}
return 0;
}
int s(int d, int n)
{
    int i,t=0;
while(d--)
{ t=n*(n+1)/2;
    n=t;}
return t;
}


