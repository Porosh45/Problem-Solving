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
ll big[1000006],h1[1000005],h2[1000005];
ll base = 31,mod = 1000000007;
int main()
{
    fast_io;
    big[0] = 1LL;
    string s , p;
    cin>>s>>p;
    int ls = s.size();
    int lp = p.size();
    h1[0] = 0LL;
    h2[0] = 0LL;
    vi v;
    for(int i = 1;i<1000002;i++)
    {
        big[i] = (big[i-1] * base) % mod;
    }
    for(int i = 0;i<ls;i++)
    {
        h1[i+1] = (h1[i]*base) + (s[i]-'a'+1);
        h1[i+1]%=mod;
    }
    for(int i = 0;i<lp;i++)
    {
        h2[i+1] = (h2[i]*base) + (p[i]-'a'+1);
        h2[i+1]%=mod;
    }
    if(ls-lp==1)
    {
        for(int i = 1;i<=ls;i++)
        {
            ll x1  = h1[i-1];
            ll x2;
            x1 = ((x1 % mod  * big[ls - i] % mod))%mod;
            x2 = ((h1[ls] - (h1[i] * big[ls - i]))%mod + mod)%mod;
           // cout<<x1<<" "<<x2<<" "<<x1+x2<<" "<<h2[lp]<<endl;
            if((x1+x2)%mod == h2[lp])
                v.pb(i);
        }
        cout<<v.size()<<endl;
        for(int x: v)
            cout<<x<<" ";
        return 0;
    }
    cout<<0<<endl;
    return 0;
}