#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int p,mcount=0,j,r;
scanf("%d",&p);
for(j=11;j>=0;j--)
{
    if(p/pow(2,j)!=0)
    {
        r=p/pow(2,j);
        mcount+=r;
        p=p%(int)pow(2,(double)j);
    }
}
printf("%d\n",mcount);
}
return 0;
}

