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
    cin>>n;
    int a[n];
    FOR(i,n)cin>>a[i];
    cin>>m;
    int b[m];
    FOR(i,m)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int l = 0;
    int c = 0;
    FOR(i,n)
    {
        int j = l;
        while(j<m)
        {
            if(abs(a[i]-b[j])<=1)
            {
                c++;
                l = j+1;
                break;
            }
        j++;
        }
    }
    cout<<c<<endl;
    return 0;
}