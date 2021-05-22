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
int n,k;
vi v[100005];
bool vis[100005],a[100005];
int ans = 0;
void dfs(int src,int cat,int dis)
{
    if(cat>k)
        return;
    if(v[src].size()==1 and dis!=src)
        {
            ans++;
            return;
        }
    vis[src] = 1;
    for(int i = 0;i<v[src].size();i++)
    {
        if(!vis[v[src][i]])
        {
            vis[v[src][i]] = 1;
            dfs(v[src][i],(a[v[src][i]]?cat + 1:0),src);
        }
    }
    return;
}
int main()
{
    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<n - 1;i++)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(0,a[0],0);
    cout<<ans<<endl;
    return 0;
}