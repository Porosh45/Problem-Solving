#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
using namespace std;
ll dp[205][205];
int main()
{
    int t;
    cin>>t;
    for(int k = 1;k<=t;k++)
    {
        int n;
    scanf("%d",&n);
    int a[2*n][2*n];
    memset(a,0,sizeof a);
    for(int i = 0;i<(2*n) - 1;i++)
    {
        if(i<n)
        {
            for(int j = 0;j<=i;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        else
        {
            for(int j = 0;j<((2*n)-1)-i;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
memset(dp,0,sizeof dp);
dp[0][0]=a[0][0];

    for(int i = 1;i<(2*n) - 1;i++)
    {
        if(i<n)
        {
            for(int j = 0;j<=i;j++)
            {

                //cout<<a[i][j]<<" ";
                dp[i][j]=max(dp[i-1][j]+a[i][j] ,dp[i][j]);
                dp[i][j+1]=max(dp[i-1][j]+a[i][j+1] ,dp[i][j+1]);
            }
        }
        else
        {
            for(int j = 0;j<((2*n)-1)-i;j++)
            {
               //cout<<a[i][j]<<" ";
               dp[i][j]=max(dp[i-1][j]+a[i][j],dp[i-1][j+1]+a[i][j]);
            }
        }
    }

    cout<<"Case "<<k<<": "<<dp[(2*n)-2][0]<<endl;
    }
    return 0;
}