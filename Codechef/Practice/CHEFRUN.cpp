#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		double a=abs(x3-x1),b=abs(x2-x3);
		if(a/v1>b/v2)
		{
			cout<<"Kefa"<<endl;
		}else
		if(a/v1<b/v2)
		{
			cout<<"Chef"<<endl;
		}else
		cout<<"Draw"<<endl;
	}
}
	