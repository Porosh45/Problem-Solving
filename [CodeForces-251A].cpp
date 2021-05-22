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
int main()
{
	int n,d;
	cin>>n>>d;
	mapii mp;
	vector<ll>a;
	FOR(i,n)
		{
			int b;
			cin>>b;
			if(mp[b]==0)
				a.pb(b);
		}
	sort(a.begin(),a.end());
	ll ans = 0;
	FOR(i,n-2)
	{
		int idx1 = upper_bound(a.begin(),a.end(),a[i]) - a.begin();
		int idx2 = lower_bound(a.begin(),a.end(),a[i]+d+1) - a.begin();
		//cout<<"idx1 "<<idx1<<" idx2 "<<idx2<<endl;
		if(idx2-idx1 > 1)
		{
			ll x = (idx2 - idx1);
			ans+=((x)*(x-1))/2;
		}
	}
	cout<<ans<<endl;
	return 0;
}