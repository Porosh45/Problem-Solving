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
ll dp[5005];
int n;
string s;
ll solve(int pos)
{
    if(pos>=n)
        {
            return 1;
        }
    if(dp[pos]!= -1)
        {
            return dp[pos];
        }
    ll x= 0, y = 0;
    if(s[pos]!='0')
        x = solve(pos+1);
    if(pos+1<n)
    {
        if((s[pos]=='2' and (s[pos+1]-'0')<=6) or ((s[pos]-'0' < 2) and (s[pos]-'0'>0)))
            y = solve(pos+2);
    }
    return dp[pos] = x+y;
}
int main()
{
    while(1)
    {
        cin>>s;
        if(s=="0")
            break;
        memset(dp,-1,sizeof dp);
        n = s.size();
        cout<<solve(0)<<endl;
    }
    return 0;
}