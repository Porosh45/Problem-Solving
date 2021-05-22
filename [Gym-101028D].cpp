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

char m[105][105];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,a;
        cin>>r>>c>>a;
        FOR(i,r)
        {
            FOR(j,c)
                m[i+1][j+1]='.';
        }
        FOR(k,a)
        {
            int x1,y1,x2,y2;
            char ch;
            cin>>x1>>y1>>x2>>y2;

            cin>>ch;

            for(int i = x1  ;i<=x2;i++)
            {
                for(int j = y1;j<=y2;j++)
                    m[i][j]=ch;
            }
        }
        FOR(i,r)
        {
            FOR(j,c)
                cout<<m[i+1][j+1];

            cout<<endl;
        }
    }
    return 0;
}
