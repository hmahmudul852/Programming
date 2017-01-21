#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cou=0;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin >> ws;
        getline(cin,s);
        if(s=="report")
            cout<<cou<<endl;
        else
            cou+=stoi(s.substr(7));
    }
    return 0;
}
