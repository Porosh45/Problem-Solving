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
int a[200005];
ll tree[600030];
void build(int node , int l , int r)
{
	if(l==r)
	{
		tree[node] = a[l];
		return;
	}
	int mid = (l+r)/2;
	build(node * 2 , l , mid );
	build ((node * 2) + 1,mid + 1 , r);
	tree[node] = tree[node * 2 ] + tree[node * 2  + 1];
}
void update(int node , int l , int r , int idx , int val)
{
	if(l==r && l == idx)
	{
		tree[node] = val;
		return;
	}
	int mid = (l+r)/2;
	if(idx<=mid)
		update(node * 2 , l , mid ,idx ,val);
	else
		update((node * 2) + 1,mid + 1 , r,idx , val);
	tree[node] = tree[node * 2 ] + tree[node * 2  + 1];
}
ll query(int node , int l , int r , int a , int b)
{
	if(l>b|| r<a)
		return 0;
	if(l>=a && r<=b)
		return tree[node];
	int mid = (l+r)/2;

	ll x = query(node * 2 , l , mid , a, b);
	ll y = query((node * 2) + 1,mid + 1 , r ,a , b);
	return x+y;
}
int main()
{
	int n;
	int t = 0;
	while(scanf("%d",&n))
	{
		if(n==0)
			break;
		for(int i = 0;i<n;i++)
			scanf("%d",&a[i+1]);
		getchar();
		build(1,1,n);
		if(t)
			printf("\n");

		printf("Case %d:\n",++t);
		char s[5];
		while(scanf("%s",s))
		{
			if(s[0]=='E')
				break;
			if(s[0]=='S')
			{
				int idx , val;
				scanf("%d%d",&idx,&val);
				update(1,1,n,idx,val);
			}
			else
			{
				int a , b;
				scanf("%d%d",&a,&b);
				printf("%lld\n",query(1,1,n,a,b));
			}
		}
	}

	return 0;
}