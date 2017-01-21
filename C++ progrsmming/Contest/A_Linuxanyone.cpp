#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,set<string>> ma;
    map<string,int> te;
    vector<string> ar;

    string s,keep;

    while(getline(cin,s))
    {
        te[s]++;
        if(s=="1")
        {
            int a;
            cin>>a;
            break;
        }

        if((int)s[0]>=65 && (int)s[0]<=90)
        {
            keep=s;
            ar.push_back(keep);
        }
        else if((int)s[0]>=97 && (int)s[0]<=122 && te[s]==1)
            ma[keep].insert(s);
    }

    for(int i=0;i<ar.size();i++)
    {
        cout<<ar[i]<<" "<<ma[ar[i]].size()<<endl;
    }

    return 0;
}
