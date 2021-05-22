#include<bits/stdc++.h>
using namespace std;
double ab,bc,ca,r;
double area(double a,double b, double c)
{
    double s = (a+b+c);
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double binary(double low, double hi, double A)
{
    int c = 0;
    double ad;
    while( (low<hi) &&(c<=300))
    {
        c++;
         ad = (low+hi)/2;
        double ae = (ad*ca)/ab;
        double de = (ad*bc)/ab;
        double a = area(ad,ae,de);
        double rat = a/(A-a);
        if(rat == r)
            break;
        if(rat>r)
            hi = ad;
        else
            low = ad;
    }
return ad;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++)
    {
        cin>>ab>>bc>>ca>>r;
        double A = area(ab,bc,ca);
        double result = binary(0,ab,A);
        printf("Case %d: %.7lf\n",i,result);
    }
    return 0;
}