#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int par[200005];
int cot[200005];
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
    map<string, int> frnd;
    int c = 1, t;
    while(cin>>t)
    {
        for(int i=1;i <=t;i++)
                {
                    int n;
                    cin>>n;
                    int y=n,l=0;
            for( int k=1;k<=200005;k++)
                        {
                                  par[k]=k;
                                  cot[k]=1;
                        }

        while(n--)
            {int sum = 0;
                string s1,s2;
                cin>>s1;
            if(frnd.find(s1)==frnd.end() )
                {
                    frnd[s1]=c;
                    c++;
                }
            cin>>s2;
            if(frnd.find(s2)==frnd.end() )
                {
                    frnd[s2]=c;
                    c++;
                }
            cout<<union_set(frnd[s1],frnd[s2])<<endl;
            }
   }
}
return 0;
}
