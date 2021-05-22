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
int main()
{
    int t;
    cin>>t;
    FOR(i,t)
    {
        double a , b;
        scanf("%lf : %lf",&a,&b);
        double d = sqrt((a*a) + (b*b));
        double r = d / 2.0;
        double o = acos(((2 * r * r ) - (b * b))/(2 * r * r ));
        double s = r * o;
        double x = (400)/(2 * (a+s));
        CP(i+1);
        printf("%.10f %.10f\n",a*x , b*x);
    }
    return 0;
}