#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int s,d;
        cin>>s>>d;
        if(s>=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}