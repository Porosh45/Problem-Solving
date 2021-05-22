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
bool vis[1005];
vi v[1005];
void dfs(int a)
{
	vis[a] = 1;
	for(auto x: v[a])
		if(!vis[x])
			dfs(x);
}
int main()
{
	int n,m;
	cin>>n>>m;
	memset(vis, 0 ,sizeof vis);
	for(int i = 0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	dfs(1);
	int c = 0;
	for(int i = 1;i<=n;i++)
		if(!vis[i])
			{
				c = 1;
				break;
			}
	cout<<(c?"NO":"YES")<<endl;
	return 0;
}