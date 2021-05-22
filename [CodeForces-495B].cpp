#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a , b;
    cin>>a>>b;
    if((a-b)==0)
        cout<<"infinity"<<endl;
    else
    {
        int c = 0;
        a-=b;
        int k = sqrt(a);
       for(int i = 1;i<=k;i++)
       {
           if(a%i==0)
           {
               if(i>b)
                c++;
               if((a/i)>b && (a/i)!=i)
                c++;
           }
       }
    cout<<c<<endl;
    }
    return 0;

}