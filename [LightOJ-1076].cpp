#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
using namespace std;
ll bi_search(ll a[],ll low,ll high,ll k,ll n)
{
    ll ans = 0;
    while(low<high)
    {
    ll sum = 0,mid,count=0,c=0;
        mid = (low + high)/2;
        for(int i = 0;i<n;)
        {
            if((sum+a[i])<=mid)
            {
                    sum+=a[i];
                    i++;
            }
            else
            {
                sum=0;
                c++;
            }

            if(c==k)
                break;
        }
        if(c<k)
            {
                ans = mid;
                high = mid;
            }
        else
            low = mid+1;
    //count++;
   // cout<<count<<" low "<<low<<" high "<<high<<" mid "<<mid<<endl;
    }
return ans;
}
int main()
{
    int t;
    cin>>t;
    for(int j = 1;j<=t;j++)
    {ll n,k,Max = 0,sum=0;
    cin>>n>>k;
    ll a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>Max)
            Max = a[i];
        sum+=a[i];
    }
    if(k==1)
        printf("Case %d: %lld\n",j,sum);
    else
        printf("Case %d: %lld\n",j,bi_search(a,Max,sum,k,n));
    }
    return 0;
}