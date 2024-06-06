#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ar[n+5];
		int mx1=0,mx2=0;
		memset(ar,0,sizeof(ar));		
		for(int i=0;i<m;i++)
		{
			int p,q;
			cin>>p>>q;
			ar[p]++;
			ar[q]++;
		}
		
		/*for(int i=1;i<=n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;*/
		for(int i=1;i<=n;i++)
		{
			if(mx1<ar[i])
			{
				mx2=mx1;
				mx1=ar[i];
			}
			else if(mx2<ar[i] && mx1!=ar[i])
			{
				mx2=ar[i];
			}
		}
		cout<<mx2<<" "<<mx1-1<<endl;
	}
}