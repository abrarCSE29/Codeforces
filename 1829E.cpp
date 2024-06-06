#include<bits/stdc++.h>
using namespace std;
int vis[1005][1005];
long long int ar[1005][1005];
long long int sum=0;
long long int n,m;
void dfs(long long int x,long long int y)
{
	
	if(x>=n || x<0 || y>=m || y<0 || vis[x][y]!=0 || ar[x][y]==0 )
	{
		return;
	}
	//cout<<"X = "<<x<<" Y = "<<y<<endl;
	
	sum=sum+ar[x][y];
	//cout<<"SUM = "<<sum<<endl;
	vis[x][y]=1;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}


int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		
		cin>>n>>m;
		
		long long int res=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>ar[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(vis[i][j]==0 && ar[i][j]!=0)
				{
					dfs(i,j);
					if(res<=sum)
					{
						res=sum;
					}
				}
				sum=0;
			}
			
		}
		cout<<res<<endl;
		memset(vis,0,sizeof(vis));
	}
	
}