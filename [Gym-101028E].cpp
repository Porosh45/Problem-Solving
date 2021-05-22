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
        int a[n];
        FOR(i,n)cin>>a[i];
        sort(a,a+n);
        int ans = a[0];
        FOR(i,n-1)
        {
            ans = __gcd(ans,a[i+1]);
        }
        int m = 0;
        FOR(i,n)
        {
            m +=a[i]/ans;
        }
        cout<<ans<<" "<<m<<endl;
    }
    return 0;
}
