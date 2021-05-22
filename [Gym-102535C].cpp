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
	mapii mp;
	FOR(i,n)
	{
		int a;
		cin>>a;
		mp[a]++;
	}
	int k,ans =0 ;
	cin>>k;
	FOR(i,k)
	{
		int a;
		cin>>a;
		if(mp[a-1] || mp[a+1])
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
