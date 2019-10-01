#include<stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
int fact=1;
scanf("%d",&n);
while(n!=0)
{fact*=n;
n--;
}
printf("%d\n",fact);

}
return 0;
}
