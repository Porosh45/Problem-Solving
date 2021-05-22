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
        map<char,int>mp;
        cin>>s1;
        cin>>s2;
        FOR(i,s1.size()){
        if(!mp[s1[i]])mp[s1[i]]=1;
        }
        FOR(i,s2.size()){
        if(mp[s2[i]])mp[s2[i]]++;
        }
        int check = 0;
        map<char,int>::iterator it;
        for(it = mp.begin();it!=mp.end();it++)
        {
            if(it->second>=2)
            {
                check = 1;
                break;
            }
        }
        if(check)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
