#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],count=0;
    for(int i = 0; i < n ;i++)
    {
         cin>>a[i];
    }
    int i;
    for( i = n; i>0 ; i--)
    {
        if(a[i]<a[i-1])
            break;
        count++;
    }
    cout<<n-count<<"\n";
    return 0;
}