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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int fx[] = {0,0,-1,1};
int fy[] = {-1,1,0,0};
int n,cnt = 0;
int vis[105][105];
int a[105][105];
void dfs(int x, int y ,int src)
{

	//cout<<"x "<<x<<" y "<<y<<" src "<<src<<" cnt "<<cnt<<endl;
	if(!vis[x][y] && a[x][y]==src)
	{
		cnt++;
		vis[x][y]= 1;
	}
	else
		return;
	for(int i = 0;i<4;i++)
	{
		int r = x + fx[i];
		int c = y + fy[i];

		if(r<n && r>=0 && c<n && c>=0 )
			dfs(r,c,src);
	}
}
int main()
{
//	fr;
//	fw;
	while(cin>>n , n)
	{
		cin.get();
		memset(a,-1,sizeof a);
		memset(vis,0,sizeof vis);
		FOR(i,n-1)
		{
			string s;
			getline(cin,s);
			stringstream ss;
			ss<<s;
			int x , y;
			while(ss>>x>>y)
			{
				x--,y--;
				a[x][y]=i+1;
			}
		}
		FOR(i,n)
		{
			FOR(j,n)
			{
			//	cout<<a[i][j]<<" ";
				if(a[i][j]== -1)
						a[i][j]=n;
			}
			//cout<<endl;
		}
		int check = 0;
		FOR(i,n)
		{
			FOR(j,n)
			{
			cnt = 0;
				if(!vis[i][j])
				{
					dfs(i,j,a[i][j]);
					if(cnt != n)
					{
						check = 1;
						break;
					}
				}
			}
			//cout<<"count "<<cnt<<endl;
		}
		cout<<(check?"wrong":"good")<<endl;
	}
	return 0;
}
