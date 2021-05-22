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
#define MAX 1000000007
#define all(x) (x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
ll bigmod(ll base, ll pow , ll mod)
{
    ll ans = 1LL,rem;
    rem = base % mod;
    while(pow)
    {
        if(pow%2)
            ans = (ans* rem) % mod;
        else
            rem = (rem * rem) % mod;
        pow/=2;
    }
    return ans;
}
int main()
{
    fast_io;
    int t;
    cin>>t;
    vi v;
    while(t--)
    {
      //  cout<<t<<endl;
        string s,p;
        cin>>s>>p;
        int ls = s.size();
        int lp = p.size();
        ll cs[ls+1],cp[lp + 1];
        ll c = 31;
        cs[0] = 0;
        cp[0] = 0;
        for(int i = 0;i<ls;i++)
        {
            cs[i+1] = ((c) * (cs[i]));
            cs[i+1] += (s[i]-'a' + 1);
            cs[i+1]%=MAX;
        }
        ll big = 1LL;

        for(int i = 0;i<lp;i++)
        {
            big = (big * c) % MAX;
            cp[i+1] = ((c) * (cp[i]));
            cp[i+1] += (p[i]-'a' + 1);
            cp[i+1]%=MAX;
        }
        ll x = cp[lp];
        for(int i = lp;i<=ls;i++)
        {
           ll  y =((cs[i] - (cs[i-lp]* big))%MAX + MAX) %MAX;
            if(x==y)
                v.pb(i - lp + 1);
        }
        if(v.size()==0)
            cout<<"Not Found"<<endl;
        else
        {
            cout<<v.size()<<endl;
            for(auto x: v)
                cout<<x<<" ";
            cout<<endl;
        }
        v.clear();
        if(t)
            cout<<endl;
    }
    return 0;
}