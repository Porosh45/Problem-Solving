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
vi prime;
int a[505][505];
bool nprime[MAX + 3];
void sieve()
{
    memset(nprime , false , sizeof nprime);
    nprime[1] = true;
    for(int i = 2;i<=100005;i++)
    {
        if(!nprime[i])
        {
            prime.pb(i);
            for(int j = i+i;j<=100005;j+=i)
                nprime[j] = true;
        }
    }
}
int main()
{
    fast_io
    sieve();
    int n , m;
    cin>>n>>m;
    ll r[n],c[m];
    memset(r,0,sizeof r);
    memset(c,0,sizeof c);
    FOR(i,n)
    {
        FOR(j,m)cin>>a[i][j];
    }
    FOR(i,n)
    {
        FOR(j,m)
        {
            int idx = lower_bound(prime.begin(),prime.end(),a[i][j]) - prime.begin();
          //  cout<<"prime[idx] "<<prime[idx]<<endl;
            r[i]+= prime[idx] - a[i][j];
            c[j]+= prime[idx] - a[i][j];
        }
    }
    sort(r,r+n);
    sort(c,c+m);
    cout<<min(c[0],r[0])<<endl;

    return 0;
}