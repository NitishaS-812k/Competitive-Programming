#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float cc;
        int h,ts,grade;
        scanf("%d%f%d",&h,&cc,&ts);
        if(h>50&&cc<0.7&&ts>5600)
        grade=10;
        else if(h>50&&cc<0.7&&ts<5600)
            grade=9;
        else if(h<=50&&cc<0.7&&ts>5600)
            grade=8;
        else if(h>50&&cc>=0.7&&ts>5600)
            grade=7;
        else if(h>50||cc<0.7||ts>5600)
            grade=6;
        else
        grade=5;
        printf("%d\n",grade);

    }
    return 0;
}
