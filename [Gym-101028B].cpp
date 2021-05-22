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
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size() != s2.size())
        {
            cout<<"No"<<endl;
        }
        else
        {
            int ans = 0;
            FOR(i,s1.size())
            {
                if(s1[i]=='b'||s1[i]=='B'||s1[i]=='p'||s1[i]=='P')
                {
                    if(s1[i]=='b'||s1[i]=='B')
                    {
                        if(s2[i]=='b'||s2[i]=='B'||s2[i]=='p'||s2[i]=='P')
                            ans++;
                        else
                            break;
                    }
                    if(s1[i]=='p'||s1[i]=='P')
                    {
                        if(s2[i]=='b'||s2[i]=='B'||s2[i]=='p'||s2[i]=='P')
                            ans++;
                        else
                            break;
                    }
                }
                else if(s1[i]=='i'||s1[i]=='I'||s1[i]=='e'||s1[i]=='E')
                {
                    if(s1[i]=='i'||s1[i]=='I')
                    {
                        if(s2[i]=='i'||s2[i]=='I'||s2[i]=='e'||s2[i]=='E')
                            ans++;
                        else
                            break;
                    }
                    if(s1[i]=='e'||s1[i]=='E')
                    {
                        if(s2[i]=='e'||s2[i]=='E'||s2[i]=='i'||s2[i]=='I')
                            ans++;
                        else
                            break;
                    }
                }
                else
                {
                    if(s1[i]-'A'==s2[i]-'A' ||s1[i]-'a'==s2[i]-'A'||s1[i]-'A'==s2[i]-'a' ||s1[i]-'a'==s2[i]-'a')
                    {
                        ans++;
                    }
                    else
                        break;
                }
            }
        if(ans==s1.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
    }
    return 0;
}