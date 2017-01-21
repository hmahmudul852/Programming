#include<bits/stdc++.h>

using namespace std;

map<string,int> my;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("aaa.txt", "r", stdin);
    #endif
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(my[s]==0)
        {
            cout<<"OK\n";
            my[s]++;
        }
        else
        {
            cout<<s<<my[s]<<endl;
            my[s]++;
        }
    }
    return 0;
}
