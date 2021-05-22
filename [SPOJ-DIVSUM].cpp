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
bool nprime[5000005];
vi prime;
void sieve()
{
	memset(nprime, 0 , sizeof nprime);
	nprime[1] = 1;
	prime.pb(2);
	for(int i = 4;i<5000005;i+=2)
		nprime[i] = 1;

	for(int i = 3;i*i<5000005;i+=2)
	{
		if(!nprime[i])
		{
			prime.pb(i);
			for(int j = i*i;j<5000005;j+=(i*2))
				nprime[j] = 1;
		}
	}
}
ll sod(ll n)
{
	ll result = n,ans = 1LL;
	for(int i = 0;i<prime.size() && prime[i]<=result;i++)
	{
		int c = 0;
		if(n%prime[i]==0)
		{
			while(n%prime[i]==0)
			{
				c++;
				n/=prime[i];
				//cout<<"Prime i "<<prime[i]<<endl;

			}
			//cout<<"Prime i "<<prime[i]<<endl;
			ll x = (ll)((pow(prime[i],c+1) - 1)/(prime[i] - 1));
			ans *= x;
		}
	}
	return ans;
}
int divSum(int num)
{
    int result = 0;

    for (int i=2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }

    return (num==1)?0:(result + 1);
}
int main()
{
	fast_io;
	int t;
	cin>>t;
	//sieve();
	while(t--)
	{
		int n;
		cin>>n;
		cout<<divSum(n)<<endl;
	}
	return 0;
}