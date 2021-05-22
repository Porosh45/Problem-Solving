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
vi v[100005];
int dp[100005];
bool vis[100005];
int dfs(int src)
{
    if(vis[src])
        return dp[src];
    vis[src] = 1;
    for(int i = 0;i<v[src].size();i++)
    {
        dp[src] = max(dp[src],1 + dfs(v[src][i]));
    }
    return dp[src];
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(vis,0,sizeof vis);
    memset(dp,0,sizeof dp);
    for(int i = 0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
    }
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            ans = max(ans,dfs(i));
        }
    }
    cout<<ans<<endl;
    return 0;
}