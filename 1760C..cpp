#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        long long ar[n+5],max1=-1,max2=0,res;
        cin>>ar[0];
        max1=ar[0];
        max2=ar[0];
        int f=1;
        for(int i=1;i<n;i++)
        {
            cin>>ar[i];

            if(ar[i]>max1)
            {
                max2=max1;
                max1=ar[i];
                f=0;
                continue;
            }
            if(ar[i]>max2 || f)
            {
                max2=ar[i];
                f=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==max1)
                res=ar[i]-max2;
            else
                res=ar[i]-max1;

            cout<<res<<" ";
        }
        cout<<endl;
    }
}
