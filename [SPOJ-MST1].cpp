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
int dp[20000005];
int solve(int n)
{
    if(n==1)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int x = INT_MAX;
    if(n%3==0 || n%6==0)
        x = min(x,solve(n/3)+1);
    else if(n%2==0)
        x = min(x,solve(n/2)+1);

    x = min(x,solve(n-1)+1);
    return dp[n] = x;
}
int main()
{
    int t;
    cin>>t;
    memset(dp,-1,sizeof dp);
    for(int i= 1;i<=t;i++)
    {
        int n;
        cin>>n;
        CP(i);
        cout<<solve(n)<<endl;
    }
    return 0;
}