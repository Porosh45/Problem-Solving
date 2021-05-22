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
double x,y,h;
double bisect(double low ,double hi,double h)
{
    double h1,h2,mid;
    int c=0;
    while(low<hi && c<=200)
    {
        mid=(low+hi)/2.0;
        h1 = sqrt((x*x)-(mid*mid));
        h2 = sqrt((y*y)-(mid*mid));
       // cout<<low<<" "<<hi<<" "<<mid<<endl;
        //cin.get();
        double r = ((h1*h2)/(h1+h2));
        if(r>h)
            low = mid;
        else
            hi = mid;
    c++;
    }
   // cout<<mid<<endl;
    return mid;
}
int main()
{
    int t;
    cin>>t;
    FOR(i,t)
    {
        cin>>x>>y>>h;
        double res = bisect(0.0,min(x,y),h);
        cout.precision(10);
        cout<<"Case "<<i+1<<": "<<res<<endl;
    }
    return 0;
}