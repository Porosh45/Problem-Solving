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
int main()
{
    fast_io;
    int t;
    cin>>t;
    for(int j = 1;j<=t;j++)
    {
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
        c = 0;
        for(int i = lp;i<=ls;i++)
        {
           ll  y =((cs[i] - (cs[i-lp]* big))%MAX + MAX) %MAX;
            if(x==y)
                c++;
        }
        CP(j);
        cout<<c<<endl;
    }
    return 0;
}