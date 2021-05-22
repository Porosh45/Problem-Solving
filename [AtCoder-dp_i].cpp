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
double dp[3005][3005];
int n,x;
double a[3005];
double solve(int pos,int cnt)
{
    if(pos==n)
    {
        if(cnt>=x)
            return 1.0;
        else
            return 0;
    }
    if(dp[pos][cnt]>=0.0)
        return dp[pos][cnt];
    return dp[pos][cnt] = (solve(pos+1,cnt+1)*a[pos]) + (solve(pos+1,cnt)*(1.0 - a[pos]));
}
int main()
{
    memset(dp, -1.0,sizeof dp);
    cin>>n;
    x = (n+1)/2;
    FOR(i,n)cin>>a[i];
    cout.precision(10);
    cout<<fixed;
    cout<<solve(0,0)<<endl;
    return 0;
}