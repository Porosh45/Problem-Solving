#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) cout<<"Case "<<n<<": "
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define MAX 1000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int main()
{
    string s;
    int current_serve = 0;
    int current_winner = 0;
    int lw = 0,rw = 0,gl = 0 ,gr = 0;
    cin>>s;
    int n = s.size();
    for(int i = 0;i<n;i++)
    {
        if(s[i]=='S')
        {
            if(!current_serve)
                lw++;
            else
                rw++;
        }
        else if(s[i]=='R')
        {
            if(current_serve==0)
                {
                    rw++;
                    current_serve = 1;
                }
            else
            {
                lw++;
                current_serve = 0;
            }
        }
        else
        {
            if(gl==2 or gr ==2)
            {
                cout<<gl<<" ";
                if(gl==2)
                    cout<<"(winner) ";
                cout<<"- ";
                cout<<gr<<" ";
                if(gr==2)
                    cout<<"(winner)";
                cout<<endl;
            }
            else
            {
                cout<<gl<<" (";
                cout<<lw;
                if(!current_serve)
                    cout<<"*";
                cout<<") - ";
                cout<<gr<<" (";
                cout<<rw;
                if(current_serve)
                    cout<<"*";
                cout<<")"<<endl;
            }
        }
        if((lw==10 or rw == 10))
        {
            if(lw==10)
                gl++;
            else
                gr++;
            lw = 0;
            rw = 0;
        }
        else if(abs(lw-rw)>=2 and (lw>=5 or rw>=5))
        {
            if(lw>=5)
                gl++;
            else
                gr++;
            lw = 0;
            rw = 0;
        }
    }
    return 0;
}