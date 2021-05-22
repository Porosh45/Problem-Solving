#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Lo=0,Ro=0,Lc=0,Rc=0;
    for(int i = 0;i<n;i++)
    {
        int a , b;
        cin>>a>>b;
        if(a)
            Lo++;
        else
            Lc++;

        if(b)
            Ro++;
        else
            Rc++;
    }
    int sum = (n - (max(Lc,Lo))) + (n - (max(Rc,Ro)));
    cout<<sum<<endl;
    return 0;
}
