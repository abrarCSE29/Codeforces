#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int res=0,cnt=0;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			
			if(p==0)
			{
				cnt++;
				res=max(cnt,res);
			}
			else
			{
				
				cnt=0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}