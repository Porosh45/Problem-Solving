#include<bits/stdc++.h>
using namespace std;
vector <int > vec[105]; stack<int > s;
int vis[105];
void dfs(int a)
{
    if(vis[a]==1)
        return;

//    if(vis[a]==1)
//        {
//            cout<<"Circle found"<<endl;
//            return;
//        }

    vis[a]=1;
    for(int i = 0 ; i < vec[a].size();i++)
    {
      dfs(vec[a][i]);
    }
//vis[a] = 2;
    s.push(a);
}
int main()
{
    int n,e;
    while(cin>>n>>e && (n || e))
    {
    for (int i = 0;i<105;i++)
        vis[i]=0;
   for(int i = 1;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
    }

    for(int i = 1;i<=n;i++)
        dfs(i);

    while(!s.empty())
    {
        int u = s.top();
        cout<<u<<" ";
        s.pop();
    }
for(int i = 1;i<=n;i++)
    vec[i].clear();
cout<<endl;
}
return 0;
}
