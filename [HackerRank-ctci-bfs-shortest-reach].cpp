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
vi v[1005];
int par[1005];
void bfs(int src)
{
	queue<int >q;
	q.push(src);
	while(!q.empty())
	{
		int x = q.front();
		for(auto a: v[x])
			{
				if(!par[a])
				{
					par[a] = par[x]+1;
					q.push(a);
				}
			}
		par[src] = 1;
		q.pop();
	}
}
int main()
{
	fast_io;
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		memset(par,0,sizeof par);
		for(int i = 0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			v[a].pb(b);
			v[b].pb(a);
		}
		int s;
		cin>>s;
		par[s] = 0;
		bfs(s);
		for(int i = 1;i<=n;i++)
			{
				if(i!=s)
					cout<<(par[i]?par[i]*6:-1)<<" ";

				v[i].clear();
			}
		cout<<endl;
	}
	return 0;
}