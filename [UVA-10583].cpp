#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int par[50005];
//int cot[200005];
using namespace std;
int find_parent(int a)
{
    if(par[a]==a)
        return a;
   return par[a]=find_parent(par[a]);
}
bool union_set(int u, int v)
{
    int a = find_parent(u);
    int b = find_parent(v);
    if(a==b)
        return false;
   if(a>b)
    {
        //cot[b]+=cot[a];
        par[a]=b;
        //return cot[b];
    }
   else
    {
        //cot[a]+=cot[b];
        par[b]=a;
        //return cot[a];
    }
return true;
}
int main()
{
    int n,m,c=1;
    while(cin>>n>>m)
    {
        if(n== 0 && m == 0)
            break;
        int a,b;
        for(int i = 1;i<=n;i++)
        {
            par[i]=i;
        }
        for(int i = 1;i<=m;i++)
        {
            cin>>a>>b;
            if(union_set(a,b))
                n--;
        }
    cout<<"Case "<<c<<": "<<n<<endl;
    c++;
    }
    return 0;
}