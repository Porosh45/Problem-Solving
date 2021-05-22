#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int vis[205], c ;
vector <int> vec[205];
void dfs(int a , int V)
{
    if(vis[a]==1)
        {
            if(vis[a]==V)
                {
                    c=1;
        //              cout<<"Bicolor state count "<<c<<" current node "<<a<<"  "<<vis[a] <<" "<<"last value " << V<<endl;
                }
            return;
        }
    if(vis[a]==2)
        {
            if(vis[a]==V)
                {
                    c=1;
      //              cout<<"Bicolor state count "<<c<<" current node "<<a<<"  "<<vis[a] <<" "<<"last value" << V<<endl;
                }
      //       cout<<"entered int the returned block "<<V<<endl;
            return;
        }
    if( V == 1 )
            {
                vis[a]=2;
                V = 2;
            }
    else
            {
                vis[a] =1;
                V = 1;
            }
    //cout<<"Checking the count "<<c<<endl;
     //cout<<" current node  "<<a<<"  "<<vis[a] <<" "<<" last value " << V<<endl;
    for(int i = 0; i<vec[a].size();i++)
{
       dfs(vec[a][i],V);
      // cout<<"Checking the count in loop"<<c<<endl;
}

    //cout<<"End of the segment "<<c<<endl;
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        int e;
        cin>>e;
        c = 0;

        for(int i = 0;i<205;i++)
            vis[i]=0;

        for(int i = 0;i<e;i++)
        {
            int a,b;
            cin>>a>>b;
            vec[a].pb(b);
            vec[b].pb(a);
        }
int v  = 2;
       /// for(int i = 0;i<n;i++)
            dfs(0,v);

     if(c)
        cout<<"NOT BICOLORABLE."<<endl;
     else
        cout<<"BICOLORABLE."<<endl;

    for(int i = 0;i<n;i++)
        vec[i].clear();
    }
return 0;
}