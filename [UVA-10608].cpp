#include<bits/stdc++.h>
using namespace std;
int par[30001],cot[30001];
using namespace std;
int find_parent(int a)
{
    if(par[a]==a)
        return a;
   return par[a]=find_parent(par[a]);
}
int union_set(int u, int v)
{
    int a = find_parent(u);
    int b = find_parent(v);
  if(a==b)
    return cot[a];
  if(a>b)
    {
        par[a]=b;
        cot[b]+=cot[a];
        return cot[b];
    }
  else
    {
        par[b]=a;
        cot[a]+=cot[b];
        return cot[a];
    }
}
int main()
{
    int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i = 1;i<=n;i++)
        {
            par[i]=i;
            cot[i]=1;
        }
        int a,b,k=0,c;
        for(int i = 1;i<=m;i++)
        {
            cin>>a>>b;
            c=union_set(a,b);
           if(c>k)
            k=c;
        }
    if(m==0)
        cout<<1<<endl;
    else
        cout<<k<<endl;
    }
    return 0;
}