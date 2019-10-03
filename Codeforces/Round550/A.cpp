Problem Statement : https://codeforces.com/contest/1144/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        int sz = s.size();
        sort(s.begin(),s.end());
        if(set<char>(s.begin(),s.end()).size() == s.size() && *max_element(s.begin(),s.end()) - *min_element(s.begin(),s.end()) == s.size() - 1)   puts("Yes");
        else puts("No");
    }
    return 0;
}
