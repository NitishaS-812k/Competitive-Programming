Problem Statement : https://codeforces.com/contest/1144/problem/C

#include<bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const ll maxi = 2e5 + 1;
 
ll idk[maxi],n;
vector<ll> a,b;
map<ll,ll> cnt;
 
int main()
{
    ll i,j;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>idk[i];
        cnt[idk[i]]++;
        if(cnt[idk[i]] > 2) { puts("NO"); return 0; }
 
    }
    sort(idk+1,idk+n+1);
    for(i=1;i<=n;++i){
        if(i>1 && idk[i] == idk[i-1])   b.pb(idk[i]);
        else a.pb(idk[i]);
    }
    puts("YES");
    cout<<a.size()<<endl;
    for(i=0;i<a.size();i++) cout<<a[i]<<" ";
    reverse(b.begin(),b.end());
    cout<<endl;
    cout<<b.size()<<endl;
    for(i=0;i<b.size();i++) cout<<b[i]<<" ";
}
