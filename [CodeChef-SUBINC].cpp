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
using namespace std;
ll sum(ll n)
{
    return (n*(n+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    ll a[n];
    ll ans = 0;
    FOR(i,n)cin>>a[i];
    int count = 0;
    for(int i = 1;i<n;i++)
    {
        if(a[i-1]<=a[i])
            count++;
        else
        {
            ans+=sum(count+1);
            count=0;
        }
    }
    ans+=sum(count+1);
    cout<<ans<<endl;
    }
    return 0;
}