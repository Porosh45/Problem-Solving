#include<bits/stdc++.h>
using namespace std;
void build(int node,int beg,int fin,int a[],long long tree[])
{
    if(beg==fin)
    {
      tree[node] = a[beg];
      return;
    }
    int mid = (beg+fin)/2;
    int left = node*2;
    int right = left + 1;

    build(left,beg,mid,a,tree);
    build(right,mid+1,fin,a,tree);

    tree[node] = tree[left]+tree[right];

}
long long query(int node,int beg,int fin,int l,int r,long long tree[])
{
   // cout<<"query"<<endl;
    if(l>fin || r <beg)
        return 0;
    if(l<=beg && r>=fin)
        return tree[node];

    int mid = (beg+fin)/2;
    int left = node*2;
    int right = left + 1;

    long long  x = query(left,beg,mid,l,r,tree);
    long long  y = query(right,mid+1,fin,l,r,tree);

    return x+y;
}
void update(int node ,int l,int r,int idx,int value,long long tree[])
{
   // cout<<"update"<<endl;
    if(l>idx || r<idx)
        return;
    if(l==r)
    {
        if(value==-1)
            tree[node] = 0;
        else
            tree[node]+=value;

        return;
    }
    int mid=(l+r)/2;
    int left=node*2;
    int right = left + 1;

    if(idx<=mid)
        update(left,l,mid,idx,value,tree);
    else
        update(right,mid+1,r,idx,value,tree);

    tree[node]=tree[left]+tree[right];
}
int main()
{
     int t;
     scanf("%d",&t);
     for(int k = 1;k<=t;k++)
     {
         int n , q;
         scanf("%d%d",&n,&q);
         int a[n+1];
         long long tree[4*(n+1)]={0};
         for(int i = 1;i<=n;i++)
            scanf("%d",&a[i]);
        build(1,1,n,a,tree);
        printf("Case %d:\n",k);
        for(int i = 1;i<=q;i++)
        {
            int sam;
            scanf("%d",&sam);
            if(sam == 1)
            {
                int idx;
                scanf("%d",&idx);
                printf("%lld\n",query(1,1,n,idx+1,idx+1,tree));
                update(1,1,n,idx+1,-1,tree);

            }
            if(sam == 2)
            {
                int idx , value;
                scanf("%d%d",&idx,&value);
                update(1,1,n,idx+1,value,tree);
            }
            if(sam == 3)
            {
                int a,b;
                scanf("%d%d",&a,&b);
                if(a>b)
                    swap(a,b);
                printf("%lld\n",query(1,1,n,a+1,b+1,tree));
            }
        }
     }
    return 0;
}
