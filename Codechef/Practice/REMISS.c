#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int a,b,d,c;
scanf("%d%d\n",&a,&b);
 c= a+b;
if(a>b)
d=a;
else
d=b;
printf("%d %d \n",d,c);
}
return 0;
}