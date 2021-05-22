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
int main()
{
    int n;
    cin>>n;
    int a[12][12];
    memset(a,0,sizeof a);
    int d, l  , r, c ,check = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>d>>l>>r>>c;
        c--,r--;
        if(d==0)
        {
            if(c+l>10)
                check = 1;
            else
            {
                for(int j = c;j<(c+l);j++)
                {
                    if(!a[r][j])
                        a[r][j] = i+1;
                    else
                        check = 1;
                }
            }
        }
        else
        {
            if(r+l>10)
                check = 1;
            else
            {
                for(int j = r;j<(r+l);j++)
                {
                    if(!a[j][c])
                        a[j][c] = i+1;
                    else
                        check = 1;
                }
            }
        }
    }
    cout<<(check?'N':'Y')<<endl;
    return 0;
}