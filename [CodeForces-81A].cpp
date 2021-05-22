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
	string s;
	cin>>s;
	int n = s.size();
	stack<char> st;
	for(int i = 0;i<n;i++)
	{
		if(st.empty() or st.top()!=s[i])
		{
			st.push(s[i]);
		}
		else
			st.pop();
	}
	vector<char>v;
	while(!st.empty())
	{
		v.pb(st.top());
		st.pop();
	}
	reverse(v.begin(),v.end());
	for(auto x: v)
		cout<<x;
	cout<<endl;
	return 0;
}