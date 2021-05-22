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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll d, a, b;
    cin>>n>>d>>a>>b;
    ll x[n],y[n];
    FOR(i,n)cin>>x[i]>>y[i];
    vector< pair<ll,ll> > v;
    FOR(i,n)
    {
        v.pb(make_pair((a*x[i] + b*y[i]),(i+1)));
    }
    sort(v.begin(),v.end());
    int c = 0;
    ll sum = 0;
    FOR(i,n)
    {
        if(sum+v[i].first>d)
            break;
        else
            {
                c++;
                sum+=v[i].first;
            }
    }
    cout<<c<<endl;
    FOR(i,c)cout<<v[i].second<<" ";
    cout<<endl;
    return 0;
}