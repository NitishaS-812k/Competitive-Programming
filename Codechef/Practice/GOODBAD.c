#include<stdio.h>
#include<ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        char str[n];
        scanf("%s",str);
        int i,upper=0,lower=0;
        for(i=0;i<n;i++)
        {
            if(isupper(str[i])!=0)
                upper++;
                else if(islower(str[i])!=0)
                    lower++;
        }
         if((k>=upper) && (k<lower))
	    printf("chef\n");
	    else if((k>=lower)&&(k<upper))
	    printf("brother\n");
	    else if((k>=upper)&&(k>=lower))
	    printf("both\n");
	    else printf("none\n");
    }
    return 0;
}
