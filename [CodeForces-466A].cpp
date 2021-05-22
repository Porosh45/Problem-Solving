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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x = n/m;
    if(x==0)
    {
        if(b<n*a)
            cout<<b<<endl;
        else
            cout<<n*a<<endl;
    }
    else
    {
        if(x*b < x*m*a)
            cout<<x*b+((n%m*a<b)?n%m*a:b)<<endl;
        else
            cout<<a*n<<endl;
    }
    return 0;
}