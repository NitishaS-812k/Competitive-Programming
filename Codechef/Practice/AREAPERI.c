#include<stdio.h>
int main()
{
int l,b;
scanf("%d%d",&l,&b);
int ar,p;
ar=l*b;
p=2*(l+b);
if(p>ar)
  printf("Peri\n%d\n",p);
    else if(p<ar)
    printf("Area\n%d\n",ar);
    else
    printf("Eq\n%d\n",ar);

return 0;
}