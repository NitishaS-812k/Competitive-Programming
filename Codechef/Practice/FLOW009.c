#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int quantity,price;
scanf("%d%d",&quantity,&price);
double discount,total;
total=quantity*price;
if(quantity>1000)
{ discount=total*0.1;
total=total-discount;
}
printf("%lf\n",total);
}
return 0;
}