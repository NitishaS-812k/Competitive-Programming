#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         long int x1,x2,x3,v1,v2;
        scanf("%ld %ld %ld %ld %ld",&x1,&x2,&x3,&v1,&v2);
        double t1,t2;
        t1= (double)abs(x3-x1)/(double)v1;
        t2= (double) abs(x3-x2)/(double)v2;
        if(t1>t2)
           {printf("Kefa\n");}
         if(t2>t1)
         {printf("Chef\n");}
        if(t1==t2)
         {printf("Draw\n");}
             }
    return 0;

}