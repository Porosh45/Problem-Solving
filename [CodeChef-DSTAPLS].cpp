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
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {ll n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(k<=1000000000)
        {
            if((n%(k*k))==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    }
    return 0;
}