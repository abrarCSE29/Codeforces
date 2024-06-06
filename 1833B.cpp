//Not solved

#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
	LL t;
	cin>>t;
	
	while(t--)
	{
		LL n,k;
		cin>>n>>k;
		LL ar[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		map<LL,LL>mp;
		for(int i=0;i<n;i++)
		{
			LL x;
			cin>>x;
			
			mp[x]++;
		}
		
		for(int i=0;i<n;i++)
		{
			LL mx,mn;
			
			mx=ar[i]+k;
			mn=ar[i]-k;
			
			for(LL j=mx;j>=mn;j--)
			{
				if(mp[j])
				{
					mp[j]--;
					cout<<j<<" ";
					break;	
				}
			}
		}
		cout<<endl;
	}
}