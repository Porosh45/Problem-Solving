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
    int n,m;
    cin>>n>>m;
    ll a[n],b[m];
    mapii mp;
    FOR(i,n)cin>>a[i];
    FOR(i,m)cin>>b[i];
    sort(a,a+n);
    FOR(i,m)
    {
     int id = upper_bound(a,a+n,b[i]) - a;
        cout<<id<<" ";
    }
    cout<<endl;
    return 0;
}