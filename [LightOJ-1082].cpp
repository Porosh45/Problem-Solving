#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) cout<<"Case "<<n<<": "
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MAX 1000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int a[100005];
int tree[300005];
void build(int node , int l , int r)
{
	if(l==r)
	{
		tree[node] = a[l];
		return;
	}
	int mid = (l+r)/2;
	build(node*2,l,mid);
	build((node*2) + 1 ,mid + 1,r);
	tree[node] = min(tree[node*2],tree[(node * 2) + 1]);
}
int query(int node , int l , int r , int a, int b)
{
	if(l>b || r<a)
		return INT_MAX;
	if(r<=b && l>=a)
		return tree[node];
	int mid = (l+r)/2;
	int x = query(node*2,l,mid,a,b);
	int y = query((node*2) + 1 ,mid + 1,r,a,b);
	//cout<<"x "<<x<<" y "<<y<<endl;
	return min(x,y);
}
int main()
{
	int t;
	scanf("%d",&t);
	FOR(j,t)
	{
		int n,q;
		scanf("%d%d",&n,&q);
		FOR(i,n)scanf("%d",&a[i+1]);
		build(1,1,n);
		printf("Case %d:\n",j+1);
		while(q--)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			printf("%d\n",query(1,1,n,x,y));
		}
	}
	return 0;
}
