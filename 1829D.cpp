#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll m,p,q;

ll rec(ll x)
{
	//cout<<x<<endl;
	if(x==m) return 1;
	else if(x%3!=0)return 0;
	else return (rec(x/3)||rec(2*x/3));
}

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		
		cin>>n>>m;
		
		
		if(n==m)cout<<"YES"<<endl;
		else if(n<m || n%3!=0)cout<<"NO"<<endl;
		else
		{
			//cin>>n>>m;
			ll r = rec(n);
			//cout<<r<<endl;
			if(r)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
	}
	return 0;
}