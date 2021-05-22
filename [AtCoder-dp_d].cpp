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
ll n,k;
ll w[105],v[105];
ll dp[105][100005];
ll solve(ll pos,ll we)
{
    if(pos==n)
        return 0;
    if(dp[pos][we]!= -1)
        return dp[pos][we];
    ll x = solve(pos+1,we);
    if((we-w[pos])>=0)
        x = max(x,v[pos]+solve(pos+1,we-w[pos]));
    return dp[pos][we] = x;
}
int main()
{
    fast_io;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    for(int i = 0;i<n;i++)
        cin>>w[i]>>v[i];
    cout<<solve(0,k)<<endl;
    return 0;
}