#include<bits/stdc++.h>
using namespace std;
int par[30005];
int cot[30005];
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
        return ;
   if(a>b)
    {
        cot[b]+=cot[a];
        cot[a]=1;
        par[a]=b;
//        return cot[b];
    }
   else
    {
        cot[a]+=cot[b];
        cot[b]=1;
        par[b]=a;
  //      return cot[a];
    }
}
int main()
{
    int n;
    cin>>n;

       int k,a,b,Cmax=1,Cmin=30005,c=1,t=n;
        for(int i = 1;i<=n+n;i++)
        {
            par[i]=i;
            cot[i]=1;
        }
        while(t--)
        {
            cin>>a>>b;
            union_set(a,b);
        }
    //cout<<"total"<<c<<endl;
    for(int i = 1;i<=n+n;i++)
    {
  //     cout<<"check the min value"<<cot[i]<<endl;
        if(cot[i]<Cmin && cot[i]>1)
            Cmin=cot[i];
        if(cot[i]>Cmax)
            Cmax=cot[i];
    }
    cout<<Cmin<<" "<<Cmax<<endl;

return 0;
}