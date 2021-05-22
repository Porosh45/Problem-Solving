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
void union_set(int u, int v)
{
    int a = find_parent(u);
    int b = find_parent(v);
  if(a==b)
    return;
  if(a>b)
    {
        par[a]=b;
        cot[b]+=cot[a];
    }
  else
    {
        par[b]=a;
        cot[a]+=cot[b];
    }
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m == 0)
            break;
        //cout<<"check1"<<endl;
        for(int i = 0;i< n; i++)
            {
                par[i]=i;
                cot[i]=1;
            }
        for(int i = 1; i<=m; i++)
        {
           int l = 0,c;
            cin>>c;
            int a[c];
            for(int j = 0; j<c ; j++)
            {
                cin>>a[j];
            if( l>0 && l<c)
               {
                  union_set(a[l-1],a[l]);
                }
            l++;
            }
    }
    cout<<cot[0]<<endl;
    }
    return 0;
}