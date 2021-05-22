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
    int a[n];
    FOR(i,n)cin>>a[i];
    int Lp = 0 ,Rp = n-1;
    ll sum[2];
    sum[0] = sum[1] = 0;
    for(int i = 1;i<=n;i++)
    {
        if(a[Lp]>a[Rp])
            sum[i%2]+=a[Lp++];
        else
            sum[i%2]+=a[Rp--];
    }
    cout<<sum[1]<<" "<<sum[0]<<endl;
    return 0;
}