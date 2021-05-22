#include<iostream>
#include<bits/stdc++.h>
#include<string>
int par[105];
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
        par[a] = b;
    }
    else
    {
        par[b] = a;
    }

    return true;
}
int main()
{
    string s;
    int t,n,a,b;
    cin>>t;
    getchar();
    getchar();
    for( int i= 1;i <=t;i++)
    {
        getline(cin,s);
        n=s[0] - 64;
        int com = n;
          for(int j=1;j<=n;j++)
                par[j]=j;
         while( getline(cin,s) && s!= "")
            {
                a=(int)s[0] - 64;
                b=(int)s[1] - 64;
            if(  union_set(a,b) )
                com--;
            }
            if(i > 1)
                cout<<endl;

            cout<<com<<endl;
    }
    return 0;
}