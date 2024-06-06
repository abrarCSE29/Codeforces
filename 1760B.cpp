#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;

        sort(s.begin(),s.end());
        cout<<int(s[s.length()-1]-'a')+1<<endl;
    }
}
