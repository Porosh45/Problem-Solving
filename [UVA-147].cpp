/*
Bismillahir Rahmanir Rahim
Md.Rashedul Hasan Porosh
ID- CE 16050
MBSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
using namespace std;
int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
int dp[11][30005];
ll res[11][30005];
ll coin_change(int i , int taka)
{
    if(i==11)
        return 0;
    if(taka<0)
        return 0;
    if(taka == 0)
        return 1;
    if(dp[i][taka] == -1)
    {
        res[i][taka] = coin_change(i,taka-coin[i]) + coin_change(i+1,taka);
        dp[i][taka]=1;
      //  cout<<"pos "<<i<< " Taka "<<taka<<" res "<<res[i][taka]<<endl;
    }
    return res[i][taka];
}
int length_count(ll r,int in)
{
    int c=0;
    if(r<100 && in)
        c=1;
    while(r)
    {
        r/=10;
        c++;
    }
return c;
}
int main()
{
    float n;
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while((cin>>n) && n)
    {
            int x = lround(n * 100.0),k;
        //cout<<x<<endl<<endl;
        if(fabs(n-0.05)<=0.00001)
           {
           printf("  0.05                1\n");
           // cout<<"entered"<<endl;
           }
        else
        {
            memset(dp,-1,sizeof dp);
      //  cout<<x<<endl<<endl;
         ll r = coin_change(0,x);
        int in = length_count(x,1), out = length_count(r,0);
    //    cout<<"in "<<in<<" out "<<out<<endl;
        for(int i = 1;i<=6-(in+1);i++)
            printf(" ");
        printf("%.2f",n);
        for(int i = 1;i<=17-out;i++)
            printf(" ");
        printf("%lld",r);
        printf("\n");
        }
    }
    return 0;
}