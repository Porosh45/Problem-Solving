#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) cout<<"Case "<<n<<":"<<endl
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MAX 1000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    int t;
    cin>>t;
    FOR(i,t)
    {
        int n , q;
        cin>>n>>q;
        int a[n];
        FOR(j,n)scanf("%d",&a[j]);
        sort(a,a+n);
        int id1 , id2;
        CP(i+1);
        while(q--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            id1 = lower_bound(a,a+n,x) - a;
            id2 = upper_bound(a,a+n,y) - a;
            printf("%d\n",id2-id1);
        }

    }
    return 0;
}
