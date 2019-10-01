#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int l[n],r[n],m[n];
        for(i=0;i<n;i++)
        {
            cin>>l[i];
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cin>>r[i];
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
           m[i]=l[i]*r[i];
        }
        int c=m[0];
        for(i=0;i<n;i++)
        {
            if(m[i]>c)
                {
            c=m[i];
             a=i;
             }
            else if(m[i]==c)
            {
                if(r[i]>r[a])
                {
                    a=i;
                }
            }
        }
        cout<<a+1<<endl;
    }
    return 0;
}
