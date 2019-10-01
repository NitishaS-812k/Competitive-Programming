#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t>=1&&t<=20)
    {
        while(t--)
        {
        int n,sq;
        scanf("%d",&n);
        if(n>=1&&n<=10000)
            {
                sq=sqrt(n);


            }printf("%d\n",sq);
        }
}
return 0;
}
