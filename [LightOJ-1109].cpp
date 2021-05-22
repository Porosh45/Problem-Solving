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
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
vector<pair<int,int> >v;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else
        return a.first<b.first;
}
void make()
{
    for(int i = 1;i<=1000;i++)
    {
        int c = 0;
        for(int j = 1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(j != (i/j))
                   c+=2;
                else
                    c++;
            }
        }
        v.pb({c,i});
    }
sort(v.begin(),v.end(),cmp);
}
int main()
{
    make();
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int q;
        cin>>q;
        CP(i);
        cout<<v[q-1].second<<endl;
    }
    return 0;
}