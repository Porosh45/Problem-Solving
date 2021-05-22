#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int par[5005];
int cot[5005];
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
        cot[b]+=cot[a];
        par[a]=b;
        return cot[b];
    }
   else
    {
        cot[a]+=cot[b];
        par[b]=a;
        return cot[a];
    }
}
int main()
{
    int n,r;
    while(cin>>n>>r )
    {
      getchar();
      if(n==0 && r==0)
        break;
      map <string , int> animal;
      int c = 1;
      for(int i = 1; i<=n;i++)
      {
          string s;
          cin>>s;
          if(animal.find(s)==animal.end())
          {
              animal[s]=c;
              c++;
            // cout<<"map "<<animal[s]<<endl;
          }
      }
      for(int i = 1;i<c;i++)
        {
            par[i]=i;
            cot[i]=1;
        }
    int k = 1,C;
    for(int i = 1;i<=r;i++)
    {
    string s1,s2;
    cin>>s1>>s2;
    C=union_set(animal[s1],animal[s2]);
    //cout<<"count "<<C<<endl;
    if(C>k)
        {
            k = C;
        }
    }
    cout<<k<<endl;
    }
    return 0;
}