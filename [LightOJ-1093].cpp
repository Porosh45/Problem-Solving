#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) printf("Case %d: \n",n);
using namespace std;
ll mintree[400005],maxtree[400005];
void build (int node , int left , int right,ll a[])
{
    //cout<<"dhukse left "<<left<<" right "<<right<<endl;
    if(left == right)
    {
        maxtree[node] = a[left];
        mintree[node] = a[left];
        return;
    }
    int l = node * 2;
    int r = l+1;
    int mid = (left+right)/2;
    build(l,left,mid,a);
    build(r,mid+1,right,a);
  //  cout<<"node "<<node<<" max l "<<maxtree[node]<<" min r "<<mintree[node]<<endl;
    mintree[node] = min(mintree[l],mintree[r]);
    maxtree[node] = max(maxtree[l],maxtree[r]);
//    cout<<"node "<<node<<" max "<<maxtree[node]<<" min "<<mintree[node]<<endl;
//    cin.get();
}
ll maxquery(int node,int left,int right,int a,int b)
{
    if(left>b || right<a)
        return 0;
    if(a<=left && b>=right)
        return maxtree[node];
    int l = node * 2,r = l+1;
    int mid = (left+right)/2;
    ll x = maxquery(l,left,mid,a,b);
    ll y = maxquery(r,mid+1,right,a,b);
    return max(x , y);
}
ll minquery(int node,int left,int right,int a,int b)
{
  //  cout<<"dhukse query te"<<endl;
    if(left>b || right<a)
        return LONG_LONG_MAX;
    if(a<=left && b>=right)
        return mintree[node];
    int l = node * 2,r = l+1;
    int mid = (left+right)/2;
    ll x = minquery(l,left,mid,a,b);
    ll y = minquery(r,mid+1,right,a,b);
   // cout<<" x "<<x<<" y "<<y<<endl;
    return min(x,y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin>>q;
    FOR(k,q)
    {
//
//        free(maxtree);
//        free(mintree);
        int n,d;
 
        cin>>n>>d;
        ll a[n];
        FOR(i,n)cin>>a[i];
 
 
    //    cout<<"dhukse"<<endl;
        build(1,0,n-1,a);
        vi diff;
     //   cout<<"dhukse"<<endl;
        FOR(i,n-(d-1))
        {
            int x = maxquery(1,0,n-1,i,i+(d-1));
            int y = minquery(1,0,n-1,i,i+(d-1));
     //       cout<<"query "<<i<<" x "<<x<<" y "<<y<<endl;
            diff.pb(abs(x-y));
        }
        sort(diff.begin(),diff.end());
        cout<<"Case "<<k+1<<": "<<diff[diff.size() - 1]<<endl;
    }
    return 0;
}