#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j = 1;j<=t;j++)
    {
        int n , m , k;
        cin>>n>>m>>k;
        int a[n+1],Rp = 1,Lp = 1,ans = n, c = 0 ,pos;
        a[1]=1;a[2]=2;a[3]=3;
        for(int i = 4;i<=n;i++)
            a[i]= ((a[i-1]+a[i-2]+a[i-3])%m)+1;

        map<int , int> check;
        while(Rp<=n)
        {
            //cout<<"first while loop "<<endl;
            if(a[Rp]<=k)
            {
                check[a[Rp]]++;
                if(check.size()==k)
                    c=1;
            }
        if(c)
        {
            pos = Rp - Lp +1;
        //    cout<<"Ans "<<ans<<endl;
            int Size = check.size();
            while(Size==k)
            {
                pos = Rp - Lp +1;
                if(a[Lp]<=k)
                {
                    if((check[a[Lp]]-1) == 0)
                        {
                            check.erase(a[Lp]);
                            c=0;
                            Size = check.size();
                        }
                else
                    check[a[Lp]]--;

                }
                Lp++;
            }
        if(pos<ans)
            ans = pos;
       // cout<<"pos "<<pos<<" Ans "<<ans<<endl;
        }
    Rp++;
    }
if(ans>=k && ans != n)
    cout<<"Case "<<j<<": "<<ans<<endl;
else
    cout<<"Case "<<j<<": sequence nai"<<endl;
check.clear();
memset(a,0,(n+1)*sizeof(a[0]));
}
return 0;
}