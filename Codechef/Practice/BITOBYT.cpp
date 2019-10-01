#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        long k;
        cin>>n;
        long bit=0,nibble=0,byte=0;
        n--;
        d=n%26;
        n/=26;
        k=pow(2,n);
        if(d<2)
            bit=k;
        else if(d<10)
            nibble=k;
        else
            byte=k;
        cout<<bit<<"\t"<<nibble<<"\t"<<byte<<endl;

    }
    return 0;
}
