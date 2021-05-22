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
#define mod 1000000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
ll sum(ll n)
{
	return (n*(n - 1))/2;
}
void test_case()
{
	ll n , m;
	cin>>n>>m;
	ll mx = sum(n - m + 1);
	ll rem = n % m, x = n / m;
	//cout<<"rem "<<rem<<" x "<<x<<endl;
	ll mn = (rem * (sum(x + 1))) + (( m - rem) *sum(x));
	cout<<mn<<" "<<mx<<endl;
	return;
}
int main()
{ 
	#ifndef ONLINE_JUDGE
	  freopen("/IO/input.txt","r",stdin);
	  freopen("/IO/output.txt","w",stdout);
 	#endif
	int t = 1;
	//cin>>t;
	while(t--)
	{
		test_case();
	}
	return 0;
}