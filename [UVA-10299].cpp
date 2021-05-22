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
#define MAX 1000007
using namespace std;
vi prime;
bool mark[MAX];
void sieve()
{
    memset(mark,true,sizeof mark);
    mark[1]=false;
    for(int i = 4;i<=MAX;i+=2)
        mark[i]=false;
    for(int i = 3;i*i<=MAX;i++)
    {
        if(mark[i]==true)
        {
            for(int j = i*i;j<MAX;j+=i*2)
                {
                    mark[j]=false;
                }
        }
    }
FOR(i,MAX)
{
    if(mark[i])
        prime.pb(i);
}
}

ll phi(ll n)
{
    ll result = n;
    for(int i = 1;prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
                n/=prime[i];
            result-=result/prime[i];
        }
    }
    if(n>1)
        result-=result/n;
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    ll n;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        if(!n)
            break;
        if(n==1)
            cout<<0<<endl;
        else
            cout<<phi(n)<<endl;
    }

    return 0;
}
