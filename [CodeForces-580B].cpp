#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<ll>
#define mapii map<ll , ll>
#define mapci map<char, ll>
#define mapsi map<string,ll>
#define FOR(i,n) for(ll i = 0;i<n;i++)
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
    ll d;
    cin>>n>>d;
    vector<pair<ll , ll > >v;
    for(int i = 0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    ll cum [n+1];
    cum[0] = 0;
    for(int i = 0;i<n;i++)
    {
        cum[i+1] = cum[i] + v[i].second;
    }
    ll ans = cum[1];
    for(int i = 0;i<n;i++)
    {
        int lo = i,hi = n - 1,mid = (lo + hi)/2,c =0,idx;
        while(lo<=hi)
        {
            c++;
            mid = (lo + hi) / 2;
            if(v[mid].first<(v[i].first+d))
                {
                    lo = mid + 1;
                    idx = mid;
                }
            else
                {
                    hi = mid - 1;
                }
        }
        //cout<<"idx "<<idx<<endl;
        ll sum = (cum[idx+1] - cum[i]);
        ans = max(sum,ans);
    }
    cout<<ans<<endl;
    return 0;
}