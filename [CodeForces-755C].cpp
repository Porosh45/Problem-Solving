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
vi v[10005];
int vis[10005];
void dfs(int a)
{
    if(vis[a])
        return;
    vis[a]=1;
    FOR(i,v[a].size())dfs(v[a][i]);
}
int main()
{
    int n,c=0;
    cin>>n;
    memset(vis,0,sizeof vis);
    FOR(i,n)
    {
        int a;
        cin>>a;
        v[i+1].pb(a);
        v[a].pb(i+1);
    }
    FOR(i,n){
    if(vis[i+1]==0)
    {
        dfs(i+1);
        c++;
    }
    }
    cout<<c<<endl;
    return 0;
}