#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) printf("Case %d: \n",n);
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdin)
#define MAX 1000007
using namespace std;
ll a,b,check = 0;
stack <ll> st;
vector<ll>v;
void solve(ll x)
{
//    cout<<x<<endl;
//    cin.get();
    if(x==b)
    {
        check = 1;
        while(!st.empty())
        {
            v.pb(st.top());
            st.pop();
        }
        return;
    }
    if(check || x>b)
        return;
    st.push(x);
    solve(x*2);
    solve(x*10 + 1);
    if(st.size()>1)
        st.pop();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b;
    check = 0;
    solve(a);
    if(check)
    {
        cout<<"YES"<<endl;
        cout<<(v.size() + 1)<<endl;
        reverse(v.begin(),v.end());
        FOR(i,v.size())cout<<v[i]<<" ";
        cout<<b<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
