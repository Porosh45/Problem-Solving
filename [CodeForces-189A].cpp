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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int a[3];
int dp[4005] ,n;
int solve(int b , int x , int i)
{
//    cout<<"b "<<b<<" x "<<x<<" i "<<i<<endl;
//    cin.get();
    if(b==n)
        return dp[b] = max(dp[b],x);
    if(i==3 || b>n)
        return 0;
    if(dp[b] != -1)
        return dp[b] = max(dp[b],x);
    return dp[b] = max((solve(b,x,i+1)),(solve(b+a[i],x+1,i)));
}
int main()
{
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    memset(dp,-1,sizeof dp);
    solve(0,0,0);
    cout<<dp[n]<<endl;
   // main();
    return 0;
}