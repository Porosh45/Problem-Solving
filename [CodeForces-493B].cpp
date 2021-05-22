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
void test_case()
{
	int n;
	cin>>n;
	int a[n];
	vi pos , neg;
	ll se = 0 , sn = 0;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=0)
		{
			pos.pb(a[i]);
			se+=a[i];
		}
		else
		{
			neg.pb(abs(a[i]));
			sn+=abs(a[i]);
		}
	}
	int winner = -1;
	if(sn==se)
	{
		int mn = min((int)neg.size(),(int)pos.size());
		for(int i = 0;i<mn;i++)
		{
			if(pos[i]>neg[i])
				{
					winner = 1;
					break;
				}
			else if(pos[i]<neg[i])
			{
				winner = 0;
				break;
			}
		}
		if(winner == -1)
		{
			if(a[n - 1]<0)
				winner = 0;
			else
				winner = 1;
		}
	}
	else
		winner = (se>sn)?1:0;
	cout<<(winner?"first":"second")<<endl;
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