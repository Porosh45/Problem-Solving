#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) printf("Case %d: \n",n);
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n , sum ;
        cin>>n>>sum;
        int check = 1500;
        FOR(i,n)
        {
            int a;
            cin>>a;
            check +=a;
        }
        if(check == sum)
            cout<<"Correct"<<endl;
        else
            cout<<"Bug"<<endl;
    }
    return 0;
}
