// atcoder 301 C
// not solved
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	int chk=0;
	cin>>s>>t;
	map<char,int>mp_s,mp_t;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='a'||s[i]!='t'||s[i]!='c'||s[i]!='o'||s[i]!='d'||s[i]!='e'||s[i]!='r' || t[i]!='a'||t[i]!='t'||t[i]!='c'||t[i]!='o'||t[i]!='d'||t[i]!='e'||t[i]!='r') chk=1;
		mp_s[s[i]]++;
		mp_t[t[i]]++;
	}
	int flag=1;
	for(char tmp= 'a'; tmp<='z'; tmp++)
	{
		if(tmp=='a'||tmp=='t'||tmp=='c'||tmp=='o'||tmp=='d'||tmp=='e'||tmp=='r')
		{
			
		}
		
		if(mp_s[tmp]!=mp_t[tmp])
		{
			flag=0;
			break;
		}
	}
	
	if(chk==0)
	{
		for(int i=0;i<t.length();i++)
		{
			if(mp)
		}
	}
	
	if(flag)
	{
		
	}
	
	else cout<<"No"<<endl;
}