#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define sfi(n) scanf("%d",&n);
#define sfl(n) scanf("%lld",&n);
#define sff(n) scanf("%f",&n);
#define sfd(n) scanf("%lf",&n);
#define pfi(n) printf("%d\n",n);
#define pfl(n) printf("%ll\nd",n);
#define pff(n) printf("%f\n",n);
#define pfd(n) printf("%lf\n",n);
#define CP(n) printf("Case %d: ",n);
using namespace std;
int main()
{
    int n;
    sfi(n);
    int a[n];
    int check[n],co=0,ce=0;
    FOR(i,n)
    {
        sfi(a[i]);
        if(a[i]%2)
            {
                check[i]=1;
                co++;
            }
        else
            {
                check[i]=0;
                ce++;
            }
    }
    int c;
    if(co<ce)
        c=1;
    else
        c=0;
    FOR(i,n)
    {
        if(check[i]==c)
            {
                pfi(i+1);
                break;
            }
    }

    return 0;
}
