#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;
    map<string , string>mp;
    for(int i =0;i<m;i++)
    {
        string s1,s2;
        cin>>s1;
        getchar();
        cin>>s2;
        getchar();
 //       cout<<"S1 "<<s1<<" S2 "<<s2<<endl;
        if(s1.size()>s2.size())
            mp[s1]=s2;
        else
            mp[s1]=s1;
    }
    //cout<<"after word 1"<<endl;
    vector<string>vec;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
  //      cout<<i+1<<"st "<<s<<endl;
        vec.push_back(s);
    }
//    cout<<"after word 2"<<endl;

    for(int i = 0;i<n;i++)
       {
          cout<<mp[vec[i]]<<" ";
       }
    cout<<endl;
    return 0;
}