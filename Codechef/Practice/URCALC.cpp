#include<bits/stdc++.h>
using namespace std;
int main()
{
double a,b;
char ch;
cin>>a>>b;
cin>>ch;
switch(ch)
{
case '+':
cout<<a+b<<endl;
break;
case '-':
cout<<a-b<<endl;
break;
case '*':
cout<<a*b<<endl;
break;
case '/':
cout<<setprecision(8)<<(double)a/(double)b<<endl;
}
return 0;
}

