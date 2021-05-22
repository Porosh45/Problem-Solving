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
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
		cin>>a[i];
	int dp[n];
	memset(dp,0,sizeof dp);
	for(int i = 1;i<n;i++)
	{
		int x = abs(a[i] - a[i-1]), y=10000000;
		if(i-2>=0)
			y = abs(a[i] - a[i-2]);
		//cout<<"x "<<x<<" dp ";
		dp[i] = min(dp[i-1]+ x,(((i-2)>=0)?dp[i-2]:0)+y);
		//cout<<dp[i]<<endl;
	}
	cout<<dp[n-1]<<endl;
	return 0;
}