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
	int a[n],b[n-1],c[n-2];
	for(int i = 0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i = 0;i<n-1;i++)
		cin>>b[i];
	sort(b,b+n-1);
	for(int i = 0;i<n-2;i++)
		cin>>c[i];
	sort(c,c+n-2);
	int x = 0, y = 0;

	for(int i = 0;i<n;i++)
	{
	//	cout<<x<<" "<<y<<endl;
		if((i == n-1 || a[i]!=b[i]) && !x)
			x = a[i];
		if((i == n - 2 || b[i]!=c[i])&& !y)
			y = b[i];
	}
	cout<<x<<endl<<y<<endl;

	return 0;
}