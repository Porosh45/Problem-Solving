#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , t , sum = 0 , Lp = 1, Rp = 1,ans = 0 , last = 0;
    cin>>n>>t;
    int a[n+1];
    for(int i = 1;i<=n;i++)
        cin>>a[i];

    while(Rp<=n)
    {
        sum +=a[Rp];
        if(sum<=t)
            ans=Rp-Lp+1;
        if(sum>t)
        {
            while(sum > t)
            {
               // cout<<sum<<" ";
                sum-=a[Lp];
                Lp++;
             //   cout<<"Ans in the while :"<<ans<<endl;
            }
        }
        //cout<<"Ans :"<<ans<<endl;
        Rp++;
    if(ans>last)
        last = ans;
    }
    cout<<last<<endl;
  //  main();
    return 0;
}