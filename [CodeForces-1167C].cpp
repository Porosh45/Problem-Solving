#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
using namespace std;
vi res[1000005];
int vis[1000005],v;
int cnt = 0;
void dfs(int a)
{
//    if(vis[a]==v)
//        return;
    vis[a]=v;
    cnt++;
    FOR(i,res[a].size())
        {
            if(vis[res[a][i]]==0)
                dfs(res[a][i]);
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int price[n+1];
    FOR(i,m)
    {
        int b;
        cin>>b;
        if(b!=0)
        {
            int a[b];
        FOR(j,b)cin>>a[j];
 
 
            for(int k = 1;k<b;k++)
            {
                res[a[k-1]].pb(a[k]);
                res[a[k]].pb(a[k-1]);
            }
        }
    }
    memset(vis,0,sizeof vis);
    memset(price,0,sizeof price);
    FOR(i,n)
        {
            cnt = 0;
            if(vis[i+1]==0)
                {
                    v=i+1;
                    dfs(i+1);
                }
                price[i+1]=cnt;
        }
    FOR(i,n)cout<<price[vis[i+1]]<<" ";
    cout<<endl;
    return 0;
}