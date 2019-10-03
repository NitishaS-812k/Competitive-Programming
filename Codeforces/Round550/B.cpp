Problem Statement : https://codeforces.com/contest/1144/problem/B

#include<bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,sum = 0,a[100005];
    vector<ll> even,odd;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum += a[i];
        if(a[i] % 2 == 0)  even.pb(a[i]);
        else odd.pb(a[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
 
    int c1 = even.size()-1;
    int c2 = odd.size()-1;
    int rofl = 0;
 
    if(even.size() < odd.size())    rofl = 1;
 
    while(true){
        if(rofl == 0)   { if(c1<0) break; sum -= even[c1]; c1--;  }
        if(rofl == 1)   { if(c2<0) break; sum -= odd[c2]; c2--;  }
 
        rofl ^= 1;
    }
 
    cout<<sum<<endl;
    return 0;
}
