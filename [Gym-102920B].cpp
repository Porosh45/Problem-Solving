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
	int a[6],b[6];
	for(int i = 0;i<6;i++)
		cin>>a[i];
	sort(a,a+6);
	for(int i = 0;i<6;i++)
		cin>>b[i];
	int cnt = 0;
	for(int i = 0;i<6;i++)
	{
		for(int j = 0;j<6;j++)
		{
			if(a[i]>b[j])
				cnt++;
		}
	}
	int g = __gcd(cnt,36);
	cout<<(cnt/g)<<"/"<<36/g<<endl;
	return 0;
}