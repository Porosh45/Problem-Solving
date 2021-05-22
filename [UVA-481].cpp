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
#define fw freopen("output.txt","w",stdout)
#define MAX 1000007
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);

//   fr;
//   fw;
    ll n;
    vector<ll> v;
    while(scanf("%lld",&n)!=EOF)
        {
            v.pb(n);
        }
    n = v.size();
    ll res[n+1],pos[n+1];
    res[0] = -1e18;
    for(int i = 1;i<n;i++)res[i]= 1e18;
    int x = 0;
    FOR(i,n)
    {
        int idx = lower_bound(res,res + n,v[i]) - res;
        res[idx] = v[i];
        pos[i] = idx;
        x = max(x,idx);
    }

    cout<<x<<endl;
    cout<<"-"<<endl;
    stack<ll> st;
    st.push(res[x]);
    ll b = res[x];
    int l = x - 1;
    //FOR(i,n)cout<<i<<" v "<<v[i]<<" pos "<<pos[i]<<endl;
    for(int i = n;i>=0;i--)
    {
        if(pos[i]==l && v[i]<b)
        {
          //  cout<<i<<" vitore v "<<v[i]<<" pos "<<pos[i]<<endl;
            l--;
            b = v[i];
            st.push(v[i]);
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}