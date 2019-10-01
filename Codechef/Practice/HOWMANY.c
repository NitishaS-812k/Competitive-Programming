#include<stdio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
while(n!=0)
{
n/=10;
count++;
}
if(count==1)
printf("1\n");
if(count==2)
printf("2\n");
if(count==3)
printf("3\n");
if(count>3)
printf("More than 3 digits");
return 0;
}