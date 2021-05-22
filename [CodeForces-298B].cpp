#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
using namespace std;
ll dif(int a,int b,int x,int y)
{
    return abs(a-x)+abs(b-y);
}
int main()
{
    int t,ex,ey,sx,sy,c=0,X,Y,ans;
    cin>>t>>ex>>ey>>sx>>sy;
    X = ex;
    Y = ey;
    string s;
    cin>>s;
    FOR(i,t+1)
    {
        if(dif(X,Y,sx,sy)==0)
        {
            c=1;
            ans=i;
            break;
        }
        if(i==t)
            break;

        if(s[i]=='E')
        {
            if(dif(X,Y,sx,sy)>dif(X+1,Y,sx,sy))
                {
                    X++;
                }
        }
        else if(s[i]=='S')
        {
            if(dif(X,Y,sx,sy)>dif(X,Y-1,sx,sy))
                {
                    Y--;
                }
        }
        else if(s[i]=='W')
        {
            if(dif(X,Y,sx,sy)>dif(X-1,Y,sx,sy))
                {
                    X--;
                }
        }
        else
        {
            if(dif(X,Y,sx,sy)>dif(X,Y+1,sx,sy))
                {
                    Y++;
                }
        }
    }
    if(c)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;

  //  main();
    return 0;
}
