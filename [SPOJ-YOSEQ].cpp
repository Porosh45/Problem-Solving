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
#define mod 1000000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int main()
{
	fast_io;
	string s;
	cin>>s;
	mapii mp;
	int n = s.size();
	for(int i = 0;i<n;i++)
	{
		int x = s[i]-'0';
		int d = 0;
		for(int j = 0;j<8;j++)
		{
			if(i+j>=n)
				break;
			d=(d * 10) + (s[i+j] -'0');
			mp[d]++;
		}
	}
	for(int i = 0;i<=100000000;i++)
	{
		if(mp[i]==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}