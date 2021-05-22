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
#define MAX 1000000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
bool grid[1005][1005];
ll dp[1005][1005];
int n , m;
int solve(int r, int c)
{
	if(r==n || c==m)
		return 0;
	if(r==n-1 && c==m-1)
		return 1;
	if(grid[r][c])
		return 0;
	if(dp[r][c]!= -1)
		return dp[r][c] % MAX;
	return dp[r][c] = (solve(r+1,c)+solve(r,c+1))%MAX;
}
int main()
{
	fast_io;
	cin>>n>>m;
	memset(grid,0,sizeof grid);
	memset(dp,-1,sizeof dp);
	for(int i = 0;i<n;i++)
		for(int j = 0;j<m;j++)
		{
			char c;
			cin>>c;
			if(c=='#')
				grid[i][j] = 1;
		}
	cout<<solve(0,0)<<endl;

	return 0;
}