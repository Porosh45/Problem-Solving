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
vector<ll> prime;
bool nprime[1000008];
void sieve()
{
	memset(nprime,0,sizeof nprime);
	for(int i = 2;i*i<=1000007;i++)
	{
		if(!nprime[i])
		{
			for(int j = i*i;j<=1000007;j+=i)
			{
				nprime[j] = 1;
			}
		}
	}
	for(int i = 2;i<1000007;i++)
		if(!nprime[i])
		{
			prime.pb(i);
		}
	return;
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int lo = 1 , hi = prime.size(),mid;
		int c = 0,cnt = 0;
		while(lo<=hi && cnt<=200)
		{
			cnt++;
			mid = (lo+hi)/2;
			ll sum = prime[mid-1] * prime[mid-1];
		//	cout<<"mid "<<mid<<" sum "<<sum<<endl;
			if(sum == n)
			{
				c = 1;
				break;
			}
			if(sum<n)
				lo = mid + 1;
			else
				hi = mid;
		}
		cout<<(c?"YES":"NO")<<endl;
	}
	return 0;
}