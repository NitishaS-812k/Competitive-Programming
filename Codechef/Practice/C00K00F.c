#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      scanf("%d",&n);
      int a=0,b=0,c=0,d=0,e=0;
      while(n--)
      {
          char str[20];
          scanf("%s",str);
          if (strcmp(str,"cakewalk")==0)
            a++;
            else if(strcmp(str, "simple")==0)
                b++;
            else if(strcmp(str,"easy")==0)
                c++;
            else if(strcmp(str,"medium")==0||strcmp(str,"easy-medium")==0)
                d++;
            else if(strcmp(str,"hard")==0||strcmp(str,"medium-hard")==0)
                e++;
            else
                continue;
      }
      if(a>0&&b>0&&c>0&&d>0&&e>0)
        printf("Yes\n");
      else
        printf("No\n");
    }
    return 0;
}
