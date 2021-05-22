#include<bits/stdc++.h>
using namespace std;
class mst
{
   public :
    long long w;
    int a;
    int b;
};
 bool operator<(mst const & a, mst const & b)
{
    return a.w< b.w;
}
  mst M[100005];
  int par[100005];
//  vector <int >vec[100];
int parent(int a)
{
    if(par[a]==a)
        return a;
    return par[a]=parent(par[a]);
}
void union_set(int x, int y)
{
    int a = parent(x);
    int b = parent(y);
    if(a!=b)
    {
        if(a>b)
            par[a]=b;
        else
            par[b]=a;
    }
//   else
//    return;
}
int main()
{
    int nodes,edge;
   while( cin>>nodes>>edge)
    {
        for(int i = 1 ; i <= nodes ;i++ )
            par[i]=i;
    for(int i = 1 ; i <= edge ; i++)
    {
        cin>>M[i].a>>M[i].b>>M[i].w;
//        vec[M.a].push_back(M.b);
//        vec[M.b].push_back(M.a);
    }
//for (int i = 1; i < edge ; i++)
//{
//    for(int j = i + 1; j <= edge;j++)
//
//    {
//        if(M[i].w > M[j].w)
//            swap(M[i],M[j]);
//    }
//}
sort(&M[1],M+edge+1);
int mst_e = 1,i = 1;
long long mst_sum = 0;
while((mst_e < nodes) || (i <= edge))
{
    if(parent(M[i].a) != parent(M[i].b))
    {
        union_set(M[i].a,M[i].b);
        mst_sum+=M[i].w;
        mst_e++;
    }
 i++;
}
printf("%lld\n",mst_sum);
    }
return 0;
}
