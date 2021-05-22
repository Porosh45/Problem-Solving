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
struct edge{
	int u , v , c;
};
int par[200];
bool cmp(edge a , edge b)
{
	return a.c<b.c;
}
int fp(int a)
{
	if(par[a] == a)
		return a;
	return par[a] = fp(par[a]);
}
void dsu(int a, int b)
{
	int x = fp(a);
	int y = fp(b);
	if(x<y)
		par[y] = x;
	else
		par[x] = y;
}
int main()
{
	int n , m;
	cin>>n>>m;
	edge e[m];
	for(int i = 0;i<=n;i++)
		par[i] = i;
	for(int i = 0;i<m;i++)
	{
		int a,b,c;
		cin>>e[i].u>>e[i].v>>e[i].c;
	}
	int c = 0;
	ll sum = 0;
	sort(e,e+m,cmp);
	for(int i = 0;i<m;i++)
	{
		int a = fp(e[i].u);
		int b = fp(e[i].v);
		if(a!=b)
		{
			dsu(e[i].u,e[i].v);
			c++;
			sum+=e[i].c;
		}
		if(c==n-1)
			break;
	}
	cout<<sum<<endl;
	return 0;
}
