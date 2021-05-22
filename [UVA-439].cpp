#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector < int > vec[65];
int fx[]={-2,-2,-1,-1,1,1,2,2};
int fy[]={-1,1,-2,2,-2,2,-1,1};
int vis[65],path[65];
void bfs(int src , int target)
{
    queue <int>s;
    vis[src]=1;
    s.push(src);
    while(!s.empty())
    {
        int node = s.front();
        vis[node]=1;
        s.pop();
        for(int i = 0;i<vec[node].size();i++)
        {
                int n = vec[node][i];
            if(!vis[vec[node][i]])
            {
                vis[n]=1;
                s.push(n);
                path[n]=node;
            }
        }
    }
}
int find_path(int src , int target)
{
    int c = 1, x;
    x=path[target];
    while(x!=src)
    {
        x = path[x];
        c++;
    }
return c;
}
void making_nodes()
{
    for(int row = 1; row<=8;row++)
    {
        for(int col = 1;col<=8;col++)
        {
            int nodes = (row-1) * 8 + col;
            for(int i = 0; i < 8;i++)
            {
                int x = row + fx[i];
                int y = col + fy[i];

                if(x<=8 && x>=1 &&y<=8 && y>=1)
                {
                    vec[nodes].pb((x-1)*8+y);
                }

            }

        }

    }
}
int main()
{

    making_nodes();
    string s1,s2;
  while(cin>>s1>>s2)
  {
    int src = ((s1[0] - 97)*8)+(s1[1]-'0');
    int target = ((s2[0] - 97)*8)+(s2[1]-'0');
  //  cout<<"Source = "<<src<<" target = "<<target<<endl;
    int moves = 0;
    memset(vis,0,65*sizeof(vis[0]));
    memset(path,0,65*sizeof(path[0]));
    if(src!=target)
    {
        bfs(src,target);
        moves = find_path(src,target);
    }
    cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<moves<<" knight moves."<<endl;
}
    return 0;
}