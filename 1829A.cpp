#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s="codeforces",t;
	
	int n;
	cin>>n;
	
	while(n--)
	{
		cin>>t;
		int cnt=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=t[i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}