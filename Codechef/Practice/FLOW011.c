#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 long long int sal;
 float gsal;
scanf("%lld",&sal);
if(sal<1500)
{
gsal=sal+sal*0.1+sal*0.9;
printf("%f\n",gsal);
}
else
{
gsal=sal+500+sal*0.98;
printf("%f\n", gsal);
}
}
return 0;
}
