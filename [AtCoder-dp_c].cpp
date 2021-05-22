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
#define third [
using namespace std;
ll n,dp[100005][3];
int a[100005][3];
ll solve(int pos , int day)
{
    if(pos==n)
        return 0;
    if(dp[pos][day]!= -1)
        return dp[pos][day];
    ll x = 0;
    for(int i = 0;i<3;i++)
    {
        if(i!=day)
            x = max(x,solve(pos+1,i)+a[pos][i]);
    }
    return dp[pos][day] = x;
}
int main()
{
    cin>>n;
	for(int i = 0;i<n;i++)
	{
        cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	memset(dp,-1,sizeof dp);
	cout<<solve(0,3)<<endl;
	return 0;
}
