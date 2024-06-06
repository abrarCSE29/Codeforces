#include<bits/stdc++.h>
#define ll long
using namespace std;

int main()
{
    int t,n;

    cin>>t;


    while(t--)
    {
        ll res;
        cin>>n;
        ll arr[n+20];
        cin>>arr[0];
        cin>>arr[1];
        res = max(arr[0],arr[1])-1;
        for(ll i=2; i<n; i++)
        {
            ll tmp;
            cin>>arr[i];
            tmp = max(arr[i],arr[i-1])-1;
            if(res>tmp)res=tmp;
        }

        cout<<res<<endl;


    }

}
