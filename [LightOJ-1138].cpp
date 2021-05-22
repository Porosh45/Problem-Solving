#include<bits/stdc++.h>
using namespace std;
long long binary(long long low , long long high ,  int n)
{
 long long mid,c,ans=0,cnt = 0;
 while(cnt<=300)
 {
    long long d=1,i=5;
     mid =(low+high)/2;
  //   cout<<"1 low "<<low<<" mid "<<mid<<" high "<<high<<endl;
     c=0;
     while(d)
     {
         d=mid/i;
         c+=d;
         i*=5;
     }
 if(c==n)
      return mid;

 if(c>n)
    high=mid;
 else
    low = mid;
 //cout<<"2 low "<<low<<" mid "<<mid<<" high "<<high<<endl;
 cnt++;
 }
return ans;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int n;
        cin>>n;
        long long hi = n * 10;
        long long k = binary(5,hi,n);
     //   cout<<"check "<<k<<endl;
        if(k)
            cout<<"Case "<<i<<": "<<(k/5)*5<<endl;
        else
            cout<<"Case "<<i<<": impossible"<<endl;
    }
return 0;
}