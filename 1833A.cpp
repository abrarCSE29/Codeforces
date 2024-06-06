#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int q;
		cin>>q;
		
		string s;
		cin>>s;
		
		map<string,int>mp;
		
		for(int i=0;i<s.length()-1;i++)
		{
			string tmp = s.substr(i,2);
			//cout<<tmp<<endl;
			
			if(!mp[tmp])mp[tmp]++;
		}
		cout<<mp.size()<<endl;
		mp.clear();
	}
}