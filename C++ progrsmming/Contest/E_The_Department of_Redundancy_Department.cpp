#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int> ar;
    vector<int> f,s;
    int a;
    while (cin>>a)
    {
        ar[a]++;
    }
    for (unordered_map<int,int>::iterator it=ar.begin(); it!=ar.end(); ++it)
    {
        f.push_back(it->first);
        s.push_back(it->second);
    }
    for(int i=f.size()-1;i>=0;i--)
    {
        cout<<f[i]<<" "<<s[i];
        if(i!=0)
            cout<<endl;
    }
    return 0;
}
