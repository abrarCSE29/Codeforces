#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		long long int t1,t2,t3; t1=t2=t3=INT_MAX;
		int w1,w2,w3; w1=w2=0;
		for(int i=0;i<n;i++)
		{
			long long x;
			string y;
			cin>>x>>y;
			//cout<<"x = "<<x<<" Y = "<<y<<endl;
			if(y=="10")
			{
				t1=min(t1,x);
				w1=1;
			}
			else if(y=="01")
			{
				t2=min(t2,x);
				w2=1;
			}
			else if(y=="11")
			{
				t3=min(t3,x);
				w1=w2=1;
			}
		}
		if(w1==1 && w2==1)
		cout<<min(t1+t2,t3)<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}