#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) cout<<"Case "<<n<<": "
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MAX 1000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int fx[]={-1,1,0,0};
int fy[]={0,0,-1,1};
bool a[1005][1005];
bool vis[1005][1005];
int dp[1005][1005];
int sx,sy,dx,dy;
int row,col;
queue<pair<int,int> >q;
void bfs(int r,int c)
{
	q.push({r,c});
	vis[r][c] = 1;
	while(!q.empty())
	{
		int xs = q.front().first;
		int ys = q.front().second;
		q.pop();
		for(int i = 0;i<4;i++)
	{
		int x = xs + fx[i];
		int y = ys + fy[i];
		if(x>=0 && x<row && y>=0 && y<col && !a[x][y] && !vis[x][y])
		{
			dp[x][y] = 1 + dp[xs][ys];
			vis[x][y] = 1;
			q.push({x,y});
		}
	}
	}
}
int main()
{
	fast_io;
	while(1)
	{
	memset(a,0,sizeof a);
	memset(vis,0,sizeof vis);
	memset(dp,0,sizeof dp);
		cin>>row>>col;
		if(!row && !col)
			break;
		int t;
		cin>>t;
		for(int i = 0;i<t;i++)
		{
			int row , total;
			cin>>row>>total;
			for(int j = 0;j<total;j++)

			{
				int x;
				cin>>x;
				a[row][x] = 1;
			}
		}
		cin>>sx>>sy>>dx>>dy;
		bfs(sx,sy);
		cout<<dp[dx][dy]<<endl;
	}
	return 0;
}