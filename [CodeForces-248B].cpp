#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<3)
        cout<<-1<<endl;
    else if(n==3)
        cout<<210<<endl;
    else
    {
        string val[6];
        val[0] = "170";
        val[1] = "20";
        val[2] = "200";
        val[3] = "110";
        val[4] = "50";
        val[5] = "80";
        int rem = (n%6);

        int x = (val[rem].size());
        int k = n - x;

        printf("1");
        for(int i = 1;i<k;i++)
            printf("0");

        for(int i = 0;i<x;i++)
            printf("%c",val[rem][i]);

    printf("\n");
    }
    //main();
    return 0;
}