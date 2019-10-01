#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);
    if((float)(x+0.5)>y)
        y=y-0;
    else if(x%5==0)
        y=y-x-0.5;
    else
        y=y-0;
    printf("%0.2f",y);
    return 0;
}
