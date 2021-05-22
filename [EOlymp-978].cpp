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
int par[105];
vector< pair< int,int > >v;
int fp(int a)
{
	if(par[a]==a)
		return a;
	return par[a]=fp(par[a]);
}
bool dsu(int a,int b)
{
	int x = fp(a);
	int y = fp(b);
	if(x!=y)
	{
		par[y] = x;
		return true;
	}
	return false;
}
int main()
{
	for(int i = 1;i<105;i++)
		par[i] = i;
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		if(dsu(x,y))
			{
				v.pb(make_pair(x,y));
			}
	}
	for(auto x:v)
		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}