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
int dp[3005][3005];
string s,p;
vector<char>ans;
int lcs(int n , int m)
{
	if(n == 0 || m == 0)
		return 0;
	if(dp[n][m]!= -1)
		return dp[n][m];
	if(s[n-1]==p[m-1])
		dp[n][m] = (1 + lcs(n-1,m-1));
	else
		dp[n][m] = max(lcs(n-1,m),lcs(n,m-1));
	return dp[n][m];
}
void sequence(int r , int c , int l)
{
	if(r==0 || c==0 || l == 0)
		return;
	if(!dp[r][c])
		return;
	if(dp[r][c]==dp[r-1][c])
		sequence(r-1,c,l);
	else if(dp[r][c]==dp[r][c-1])
		sequence(r,c-1,l);
	else
	{
		//cout<<r<<" "<<c<<" "<<l<<" "<<s[r-1]<<endl;
		ans.pb(s[r-1]);
		sequence(r-1,c-1,l-1);
	}
}

int main()
{
	fast_io;
	cin>>s>>p;
	if(s.size()>p.size())
		swap(s,p);
	memset(dp,-1,sizeof dp);
	for(int i = 0;i<3005;i++)
	{
		dp[0][i] = 0;
		dp[i][0] = 0;
	}
	int l = lcs(s.size(),p.size());
	sequence(s.size(),p.size(),l);
	//for(int i = 0;i<=s.size();i++)
	//{
		//for(int j = 0;j<=p.size();j++)
			//cout<<dp[i][j]<<" ";
		//cout<<endl;
	//}
		for(int i = l - 1;i>=0;i--)
			cout<<ans[i];
	cout<<endl;
	return 0;
}
