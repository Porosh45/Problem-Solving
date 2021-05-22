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
int a[1005][1005];
int check = 0,cnt = 0,n;
void dfs(int x,int prev)
{
	if(check)
		return;
	vis[x] = 1;
	cnt++;
	for(int i = 0;i<n;i++)
	{
		if(a[x][i] && i!=prev)
		{
			if(vis[i])
				check = 1;
			else
				dfs(i,x);
		}
	}
}

int main()
{
	cin>>n;
	memset(vis,0,sizeof vis);
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			cin>>a[i][j];
	dfs(0,-1);
	//cout<<check<<" "<<cnt<<endl;
	cout<<((check || (cnt!=n))?"NO":"YES")<<endl;
	return 0;
}