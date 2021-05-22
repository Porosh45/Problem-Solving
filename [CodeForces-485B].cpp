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
    int n;
    cin>>n;
    vector< pair<ll , ll> >v;
    FOR(i,n)
    {
        ll x , y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    ll xm = - INT_MAX, ym = -INT_MAX , x = INT_MAX , y = INT_MAX;
    FOR(i,n)
    {
        xm = max(xm,v[i].first);
        x = min(x,v[i].first);
        ym = max(ym,v[i].second);
        y = min(y,v[i].second);
    }

    ll ans = max(xm-x,ym-y);
    cout<<ans*ans<<endl;
    v.clear();
    return 0;
}