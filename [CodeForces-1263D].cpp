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
vi v[27];
int grp,par[200005];
int fp(int n)
{
	if(par[n]==n)
		return n;
	return par[n] = fp(par[n]);
}
void dsu(int a, int b)
{
	int x = fp(a);
	int y = fp(b);
	if(x!=y)
	{
		grp--;
		if(x<y)
			par[y] = x;
		else
			par[x] = y;
	}
	return;
}
int main()
{
	fast_io;
	for(int i = 0;i<200005;i++)
		par[i] = i;
	int n;
	cin>>n;
	grp = n;
	string s;
	for(int i = 1;i<=n;i++)
	{
		cin>>s;
		int  l = s.size();
		for(int j = 0;j<l;j++)
		{
			int x = s[j]-'a' + 1;
			if(v[x].size()==0)
				v[x].pb(i);
			else
				dsu(v[x][0],i);
		}
	}
	cout<<grp<<endl;
	return 0;
}