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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    mapii mp;
    FOR(i,n)cin>>a[i];
    int Lp = 0 , Rp = 0;
    int al = -1 , ar = -1, c = 0;
    while(Rp<n)
    {
        if(mp[a[Rp]]==0)
        {
            c++;
            mp[a[Rp]]++;
            //cout<<"a[Rp] "<<a[Rp]<<" c "<<c<<" mp[a[Rp]] "<<mp[a[Rp]]<<endl;
            while(c==k && Lp<=Rp)
            {
                if(mp[a[Lp]]-1==0)
                {
                    //cout<<"Lp "<<a[Lp]<<" Rp "<<a[Rp]<<endl;
                    c--;
                    al = Lp + 1;
                    ar = Rp + 1;
                    mp[a[Lp]]--;
                    Lp++;
                   // cout<<"c "<<c<<endl;
                    break;
                }
                mp[a[Lp]]--;
                Lp++;
            }
        }
        else
            mp[a[Rp]]++;

        Rp++;
    }
    cout<<al<<" "<<ar<<endl;
    return 0;
}