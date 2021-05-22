#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    long long s;
    while(cin>>n>>s)
    {
        int a[n+1],Lp=1,Rp=1 , c = 0;
        long long last = n ,ans = n, sum = 0 , total = 0;

        for(int i = 1;i<=n;i++)
            {
                cin>>a[i];
                total+=a[i];
            }
        if(total<s)
            last = 0;
        else
        {
            while(Rp<=n)
        {
            sum+=a[Rp];

        if(sum>=s)
            ans = Rp - Lp + 1;

   //     cout<<" Left :"<<Lp<<" Right :"<<Rp<<" sum :"<<sum<<endl;
        while( sum>=s )
            {
                sum-=a[Lp];
                Lp++;
                c=1;
            }
        Rp++;
        if(c)
        {
            ans = Rp - Lp +1;
            c = 0;
        }

        if(ans<last)
            last = ans;
        }
    }
    cout<<last<<endl;
    }
    return 0;
}