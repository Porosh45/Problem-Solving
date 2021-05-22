//‘Case #x: K = A * B = C * D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        int c = 0;
        cin>>n;
        cout<<"Case #"<<i<<": "<<n;
        for(int j = 2;j<=sqrt(n)+1;j++)
        {
            if(c==2)
                break;
            if(n%j==0)
            {
                cout<<" = "<<j<<" * "<<n/j;
                c++;
            }
        }
    cout<<endl;
    }
    return 0;
}