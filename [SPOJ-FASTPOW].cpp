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
//#define MAX 1000000
using namespace std;
ll bigmod(ll a , ll b , ll MAX)
{
    if(b==1)
        return a%MAX;
    if(b%2)
    {
        ll x = (bigmod(a,b/2,MAX))%MAX;
        return (a%MAX * ((x%MAX) * (x%MAX)))%MAX;
    }
    else
    {
        ll x =(bigmod(a,b/2,MAX))%MAX;
        return ((x%MAX) * (x%MAX))%MAX;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a , b , c;
    cin>>a>>b>>c;
    cout<<bigmod(a,b,c)<<endl;
    //main()
;    return 0;
}