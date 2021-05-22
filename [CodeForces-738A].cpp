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
    int n;
    cin>>n;
    string s,ans;
    cin>>s;
    int c = 0;
    for(int i = 0;i<n;)
    {
        if(s[i]=='o' && s[i +1] == 'g' && s[i+2]=='o')
        {
            int j = i;
            while(s[j]=='o' && s[j+1] == 'g' && s[j+2]=='o' && j<n-1)
            {
                j+=2;
            }
            i = j + 1;
            ans+="***";
        }
        else
        {
            ans+=s[i];
            i++;
        }
    }
    cout<<ans<<endl;
   // main();
    return 0;
}