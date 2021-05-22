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
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdin)
#define MAX 1000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,p;
    cin>>s>>p;
    int ls = s.size();
    int lp = p.size();
    int g = __gcd(ls,lp);
    int k = (int)sqrt(g) + 1;
    vi div;
    if(g==1)
        div.pb(1);
    else
    {
    for(int i = 1;i<k;i++)
    {
        if(g%i==0)
        {
            div.pb(i);
            if(i != (g/i))
                div.pb(g/i);
        }
    }
    }

  //  cout<<"g "<<g<<" k"<<k<<"div size"<<div.size()<<endl;
    int ans = 0;
    sort(div.begin(),div.end());
    FOR(i,div.size())
    {
        string c;
        FOR(x,div[i])c+=s[x];

        int check1 = 0, check2 = 0;
        for(int k = 0;k<ls;k+=div[i])
            {
                string cs;
                for(int x = k;x<k + div[i] ;x++)
                {
                    cs+=s[x];
                }
                //cout<<"string cs--->"<<cs<<endl;
                if(cs!=c)
                {
                    check1 = 1;
                    break;
                }
            }
            for(int k = 0;k<lp;k+=div[i])
            {
                string cp;
                for(int x = k;x<k + div[i] ;x++)
                {
                    cp+=p[x];
                }
               // cout<<"string cp--->"<<cp<<endl;
                if(cp!=c)
                {
                    check2 = 1;
                    break;
                }
            }
        if(!check1 && !check2)
           {
               // cout<<"string c--->"<<c<<endl;
                ans++;
           }
    }
    cout<<ans<<endl;
    return 0;
}
