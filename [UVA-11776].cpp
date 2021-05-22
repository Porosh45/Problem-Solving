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
bool cmp(pair<int,int>a, pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    vector< pair<int,int> >v;
    int t = 1;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        for(int i = 0;i<n;i++)
        {
            int x, y;
            cin>>x>>y;
            v.pb({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        int ans = 0;
        for(int i = 0;i<n-1;i++)
        {
            int c = 1;
            for(int j = 0;j<n;j++)
            {
                if(i!=j and (v[i].second<=v[j].second and v[i].second>=v[j].first))
                {
                    c++;
                }
            }
            ans = max(c,ans);
        }
        if(n==1)
            ans= 1;
        CP(t++);
        cout<<ans<<endl;
        v.clear();
    }
    return 0;
}